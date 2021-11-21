#include <yail/symbol_name_t.h>

#include <cstdint>

#pragma once

namespace yaclr::yail
{
  class func_info_t
  {
    public:
      const symbol_name_t func_name(void) const;
  };
}
