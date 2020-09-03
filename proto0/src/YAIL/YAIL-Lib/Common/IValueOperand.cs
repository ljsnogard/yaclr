namespace Yail
{
    public interface IOperand
    { }



    public interface IValueOperand<T> : IOperand
        where T : struct
    { }
}
