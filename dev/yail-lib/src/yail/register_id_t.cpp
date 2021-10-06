#include "register_id_t.h"

namespace yaclr::yail
{
  register_id_t::register_id_t(uint16_t code) : code(code)
  {};


  bool register_id_t::operator==(const register_id_t& other) const {
    return this->code == other.code;
  }


  bool register_id_t::operator!=(const register_id_t& other) const {
    return this->code != other.code;
  }


  bool register_id_t::operator <(const register_id_t& other) const {
    return this->code < other.code;
  }


  bool register_id_t::operator >(const register_id_t& other) const {
    return this->code > other.code;
  }


  bool register_id_t::operator<=(const register_id_t& other) const {
    return this->code <= other.code;
  }


  bool register_id_t::operator>=(const register_id_t& other) const {
    return this->code >= other.code;
  }
}