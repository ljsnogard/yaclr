#include "opcode_t.h"
#include "instruction_t.h"

#pragma once

namespace yaclr::yail
{
  class op0x00_nop_t : instruction_t
  {
    public:
      opcode_t opcode(void) const;
  };
}