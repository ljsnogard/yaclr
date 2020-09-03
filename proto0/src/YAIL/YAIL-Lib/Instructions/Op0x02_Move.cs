namespace Yail.Instructions
{
    public readonly struct Op0x02_Move : IInstruction
    {
        public OperationCode OpCode
            => InstructionExt.GenOpCode(in this);


        public readonly RegisterId Source;


        public readonly RegisterId Target;


        public Op0x02_Move(in RegisterId source, in RegisterId target)
        {
            this.Source = source;
            this.Target = target;
        }
    }
}
