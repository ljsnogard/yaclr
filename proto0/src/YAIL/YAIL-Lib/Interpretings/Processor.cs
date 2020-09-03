namespace Yail.Interpretings
{
    using System;


    public sealed class Processor
    {
        public Register<T> AllocateRegister<T>() where T: struct, IValueOperand<T>
            => throw new NotImplementedException();


        public void DeallocRegister(Register register)
            => throw new NotImplementedException();
    }
}
