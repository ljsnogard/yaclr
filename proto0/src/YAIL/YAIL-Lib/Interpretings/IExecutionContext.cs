namespace Yail.Interpretings
{
    using System.Collections.Immutable;


    public interface IExecutionContext
    {
        public ImmutableArray<Processor> Processors { get; }
    }
}
