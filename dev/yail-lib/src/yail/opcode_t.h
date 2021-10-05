#include <cstdint>

#pragma once

namespace yaclr::yail
{
  class opcode_t
  {
    public:
      const uint32_t code;

      opcode_t(uint32_t code);

      bool operator<(const opcode_t&) const;

      bool operator==(const opcode_t&) const;
  };
}
