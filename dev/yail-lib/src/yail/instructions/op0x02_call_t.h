#include <yail/instructions/instruction_t.h>
#include <yail/func_info_t.h>

#pragma once

namespace yaclr::yail
{
  class op0x02_call_t : public instruction_t
  {
    public:
      op0x02_call_t(const func_into_t& func_info);

    public:
      opcode_t opcode(void) const;
  }
}
