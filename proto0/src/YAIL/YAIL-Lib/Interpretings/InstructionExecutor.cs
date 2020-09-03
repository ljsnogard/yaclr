namespace Yail.Interpretings
{
    public abstract class InstructionExecutor
    {
        private protected InstructionExecutor()
        { }
    }



    public abstract class InstructionExecutor<I, C> : InstructionExecutor
        where I : struct, IInstruction
        where C : IExecutionContext
    {
        private protected InstructionExecutor()
        { }


        public abstract void Execute(ref I instruction, C context);
    }
}
