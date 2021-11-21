#include <yail/instructions/op0x00_nop_t.h>

namespace yaclr::yail
{
  opcode_t op0x00_nop_t::opcode(void) const {
    return generate_opcode_for<op0x00_nop_t>::result();
  }
}
