#include <cstdint>

#pragma once

namespace yaclr::yail
{
  /**
   * # Summary
   * Primitive types of the VM
   */
  class primitive_type_t
  {
    public:
      uint16_t type_code(void) const;

      bool is_pointer_type(void) const;

      primitive_type_t get_pointer_type(void) const;

    public:
      bool operator==(const primitive_type_t& other) const;
      bool operator!=(const primitive_type_t& other) const;
      bool operator <(const primitive_type_t& other) const;

    public:
      static const primitive_type_t u8;
      static const primitive_type_t i8;
      static const primitive_type_t u16;
      static const primitive_type_t i16;
      static const primitive_type_t u32;
      static const primitive_type_t i32;
      static const primitive_type_t u64;
      static const primitive_type_t i64;
      static const primitive_type_t nuint;
      static const primitive_type_t fnc_info;
      static const primitive_type_t typ_info;
      static const primitive_type_t typedref;
      static const primitive_type_t typedval;

    private:
      const uint16_t type_code_;

      static const int C_PTR_MASK_SIZE = 8;

    private:
      primitive_type_t(uint16_t code);
  };
}