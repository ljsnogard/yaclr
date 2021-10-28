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

    public:
      static const primitive_type_t boolean; // boolean type (true or false)
      static const primitive_type_t u8;      // 8-bit unsigned integer
      static const primitive_type_t i8;      // 8-bit signed integer
      static const primitive_type_t u16;     // 16-bit unsigned integer
      static const primitive_type_t i16;     // 16-bit signed integer
      static const primitive_type_t u32;     // 32-bit unsigned integer
      static const primitive_type_t i32;     // 32-bit signed integer
      static const primitive_type_t u64;     // 64-bit unsigned integer
      static const primitive_type_t i64;     // 64-bit signed integer
      static const primitive_type_t nuint;   // native uintptr_t
      static const primitive_type_t u16char; // utf-16 char

      static const primitive_type_t f32;     // float
      static const primitive_type_t f64;     // double
      static const primitive_type_t f128;    // 128bit floating point numerics

      static const primitive_type_t fn_info; // a structure representing function info
      static const primitive_type_t ty_info; // a structure representing type info
      static const primitive_type_t ty_val;  // a value with unspecified generic type

    private:
      const uint16_t type_code_;

      static const int C_PTR_MASK_SIZE = 8;  // 8 bit mask for pointers

      static const uint16_t C_U8    = 0x0010;
      static const uint16_t C_U16   = 0x0011;
      static const uint16_t C_U32   = 0x0012;
      static const uint16_t C_U64   = 0x0013;
      static const uint16_t C_I8    = 0x0020;
      static const uint16_t C_I16   = 0x0021;
      static const uint16_t C_I32   = 0x0022;
      static const uint16_t C_I64   = 0x0023;

      static const uint16_t C_NUINT = 0x0001;
      static const uint16_t C_U16CH = 0x0002;
      static const uint16_t C_BOOL  = 0x0003;

      static const uint16_t C_F32   = 0x0032;
      static const uint16_t C_F64   = 0x0033;
      static const uint16_t C_F128  = 0x0034;

      static const uint16_t C_FINFO = 0x0040;
      static const uint16_t C_TINFO = 0x0041;
      static const uint16_t C_TYVAL = 0x0042;

    private:
      primitive_type_t(uint16_t code);
  };
}