#include "opcode_t.h"

namespace yaclr::yail
{
  opcode_t::opcode_t(uint32_t code) : code(code) { }


  bool opcode_t::operator<(const opcode_t& other) const {
    return this->code < other.code;
  }


  bool opcode_t::operator==(const opcode_t& other) const {
    return this->code == other.code;
  }
}
