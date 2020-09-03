namespace Yail.Instructions
{
    public readonly struct Op0x10_AddU32 : IInstruction
    {
        public OperationCode OpCode
            => InstructionExt.GenOpCode(in this);


        public readonly RegisterId Left { get; }


        public readonly RegisterId Right { get; }


        public readonly RegisterId Result { get; }


        public Op0x10_AddU32(
                in RegisterId left,
                in RegisterId right,
                in RegisterId result)
        {
            this.Left = left;
            this.Right = right;
            this.Result = result;
        }
    }
}
