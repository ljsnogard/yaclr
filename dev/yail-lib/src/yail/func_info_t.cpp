#include "func_info_t.h"

namespace yaclr::yail
{
  func_info_t::func_info_t(const symbol_name_t& func_name) : name_(func_name)
  {}

  const symbol_name_t func_info_t::func_name(void) const {
    return this->name_;
  }
}