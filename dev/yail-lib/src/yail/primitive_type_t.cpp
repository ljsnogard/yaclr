#include "primitive_type_t.h"

namespace yaclr::yail
{
  primitive_type_t::primitive_type_t(uint16_t code) : type_code_(code)
  {}


  uint16_t primitive_type_t::type_code(void) const {
    return this->type_code_;
  }


  bool primitive_type_t::is_pointer_type(void) const {
    return 0 < (this->type_code_ >> C_PTR_MASK_SIZE);
  }


  primitive_type_t primitive_type_t::get_pointer_type(void) const {
    const uint16_t type_code = this->type_code_ + ((uint16_t)(1 << C_PTR_MASK_SIZE));
    return primitive_type_t(type_code);
  }


  bool primitive_type_t::operator==(const primitive_type_t& other) const {
    return this->type_code_ == other.type_code_;
  }


  bool primitive_type_t::operator!=(const primitive_type_t& other) const {
    return this->type_code_ != other.type_code_;
  }


  bool primitive_type_t::operator <(const primitive_type_t& other) const {
    return this->type_code_ < other.type_code_;
  }
}