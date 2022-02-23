#include <yail/symbol_name_t.h>

#include <cstdint>

#pragma once

namespace yaclr::yail
{
  class func_info_t
  {
    public:
      func_info_t(const symbol_name_t& func_name);

      const symbol_name_t func_name(void) const;

    private:
      symbol_name_t name_;
  };
}
