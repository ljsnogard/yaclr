#include <yail/instructions/op0x01_break_t.h>

namespace yaclr::yail
{
  opcode_t op0x01_break_t::opcode(void) const {
    return generate_opcode_for<op0x01_break_t>::result();
  }
}
