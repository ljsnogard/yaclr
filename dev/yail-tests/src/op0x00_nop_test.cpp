#include <yail/instructions/op0x00_nop_t.h>

#include <catch2/catch.hpp>


TEST_CASE( "opcode should be 0", "[op0x00_nop_t]" ) {
  yaclr::yail::op0x00_nop_t op;

  REQUIRE( op.opcode() == yaclr::yail::opcode_t(0));
}
