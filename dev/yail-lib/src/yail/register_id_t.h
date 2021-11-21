#include <cstdint>

#pragma once

namespace yaclr::yail
{
  class register_id_t
  {
    public:
      const uint16_t code;

      register_id_t(uint16_t code);
      register_id_t(const register_id_t& other) = default;

    public:
      bool operator==(const register_id_t& other) const;
      bool operator!=(const register_id_t& other) const;
      bool operator <(const register_id_t& other) const;
      bool operator >(const register_id_t& other) const;
      bool operator<=(const register_id_t& other) const;
      bool operator>=(const register_id_t& other) const;
  };
}
