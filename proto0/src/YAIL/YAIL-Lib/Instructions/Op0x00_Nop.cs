namespace Yail.Instructions
{
    public readonly struct Op0x00_Nop : IInstruction
    {
        public OperationCode OpCode
            => InstructionExt.GenOpCode(in this);
    }
}
