#include <string>

#pragma once

namespace yaclr::yail
{
  class symbol_name_t
  {
    public:
      symbol_name_t(void) = delete;
      symbol_name_t(const symbol_name_t& other);

    public:
      const std::string& to_string(void) const;
  };
}
