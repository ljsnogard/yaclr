namespace Yail
{
    using System;


    public readonly struct OperationCode : IEquatable<OperationCode>
    {
        public readonly ushort Val;


        internal OperationCode(ushort val)
            => this.Val = val;


        public bool Equals(OperationCode other)
            => this.Val == other.Val;


        public override int GetHashCode()
            => this.Val ^ typeof(OperationCode).GetHashCode();
    }
}
