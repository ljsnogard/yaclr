#include <yail/register_t.h>

namespace yaclr::yail
{
  register_t::register_t(register_id_t id, primitive_type_t data_type) :
      id_(id),
      data_type_(data_type)
  {};


  register_id_t register_t::id(void) const {
    return this->id_;
  };


  primitive_type_t register_t::data_type(void) const {
    return this->data_type_;
  };
}
