#include "instruction_t.h"

#pragma once

namespace yaclr::yail
{
  /**
   * #sum
   * No OPeration
   */
  class op0x00_nop_t : instruction_t
  {
    public:
      opcode_t opcode(void) const;
  };
}