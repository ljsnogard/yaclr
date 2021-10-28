#include <yail/instructions/op0x01_break_t.h>

#include <catch2/catch.hpp>


TEST_CASE( "opcode should be 1", "[op0x01_break_t]" ) {
  yaclr::yail::op0x01_break_t op;

  REQUIRE( op.opcode() == yaclr::yail::opcode_t(1));
}