namespace Yail.UnitTestings
{
    using Xunit;


    using Yail.Instructions;


    public class InstructionOpCodeTest
    {
        [Fact]
        public void GetOpCode_ShouldSucc()
        {
            var nopIns = new Op0x00_Nop();
            var addIns = new Op0x10_AddU32();
            Assert.Equal(0, nopIns.OpCode.Val);
            Assert.Equal(16, addIns.OpCode.Val);
        }
    }
}
