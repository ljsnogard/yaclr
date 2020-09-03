namespace Yail
{
    public readonly struct ObjectId : IValueOperand<ObjectId>
    {
        private readonly ulong obj_;


        internal ObjectId(ulong obj)
            => this.obj_ = obj;
    }
}
