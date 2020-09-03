namespace Yail.Instructions
{
    using System;
    using System.Collections.Generic;
    using System.Threading;


    internal static class InstructionExt
    {
        public const string Prefix = "Op0x";


        private static readonly Dictionary<Type, OperationCode> ncdict_ =
            new Dictionary<Type, OperationCode>(256);


        private static readonly Dictionary<OperationCode, Type> ctdict_ =
            new Dictionary<OperationCode, Type>(256);


        private static readonly ReaderWriterLockSlim rwlock_ = 
            new ReaderWriterLockSlim();


        public static OperationCode GenOpCode<T>(in T instruction)
            where T : struct, IInstruction
        {
            var it = instruction.GetType();
            var tn = it.Name;

            rwlock_.EnterUpgradeableReadLock();
            try
            {
                if (ncdict_.TryGetValue(it, out var opCode))
                    return opCode;

                if (false == tn.StartsWith(Prefix))
                    throw new NotSupportedException($"Unsupported type name \"{tn}\" (no prefix \"{Prefix}\")");

                var i = tn.IndexOf('_');
                if (i <= Prefix.Length)
                    throw new NotSupportedException($"Unsupported type name \"{tn}\" (no underscore)");

                var codeStrLength = i - Prefix.Length;
                var codeStr = tn.Substring(Prefix.Length, codeStrLength);
                var code = System.Convert.ToUInt16(codeStr, 16);
                opCode = new OperationCode(code);

                if (ctdict_.TryGetValue(opCode, out var conflict))
                    throw new Exception($"Conflict OpCode({code}) between {it} and {conflict}");

                rwlock_.EnterWriteLock();
                try
                {
                    ncdict_.Add(it, opCode);
                    ctdict_.Add(opCode, it);
                }
                finally
                {
                    rwlock_.ExitWriteLock();
                }
                return opCode;
            }
            finally
            {
                rwlock_.ExitUpgradeableReadLock();
            }
        }
    }
}
