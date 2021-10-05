#include "register_id_t.h"
#include "primitive_type_t.h"

#pragma once

namespace yaclr::yail
{
  class register_t
  {
    private:
      const register_id_t id_;

      const primitive_type_t data_type_;

    public:
      register_t(register_id_t id, primitive_type_t data_type);

    public:
      register_id_t id(void) const;

      primitive_type_t data_type(void) const;
  };
}
