#include <yail/symbol_name_t.h>

namespace yaclr::yail
{
  static const std::string empty_string("");


  const std::string& symbol_name_t::to_string(void) const {
    return empty_string;
  }
}
