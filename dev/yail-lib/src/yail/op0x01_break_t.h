#include "instruction_t.h"

#pragma once

namespace yaclr::yail 
{
  /**
   * #summary
   * Inform the debugger that a breakpoint has reached.
   */
  class op0x01_break_t : instruction_t
  {
    public:
      opcode_t opcode(void) const;
  };
}
