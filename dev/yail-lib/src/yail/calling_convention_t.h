#include <cstdint>
#include <string>

#pragma once

namespace yaclr::yail
{
  class calling_convention_t 
  {
    public:
      const uint8_t id;

    public:
      static const calling_convention_t Unspecified;
      static const calling_convention_t Cdecl;

    private:
      static const uint8_t C_UNSPEC = 0;
      static const uint8_t C_CDECL  = 1;

    private:
      calling_convention_t(uint8_t u8id);
  };
}