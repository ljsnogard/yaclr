namespace Yail
{
    public readonly struct RegisterId : IOperand
    {
        private readonly ushort val_;


        internal RegisterId(ushort val)
            => this.val_ = val;
    }
}
