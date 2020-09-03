namespace Yail.Interpretings
{
    public abstract class Register
    {
        public RegisterId Id { get; }


        private protected Register(in RegisterId id)
            => this.Id = id;
    }



    public abstract class Register<T> where T: struct, IOperand
    {
        public T Content { get; internal set; }
    }
}
