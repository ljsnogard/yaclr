#include "primitive_type_t.h"

namespace yaclr::yail
{
  const primitive_type_t primitive_type_t::boolean(primitive_type_t::C_BOOL);   // boolean type (true or false)
  const primitive_type_t primitive_type_t::u8     (primitive_type_t::C_U8);     // 8-bit unsigned integer
  const primitive_type_t primitive_type_t::i8     (primitive_type_t::C_I8);     // 8-bit signed integer
  const primitive_type_t primitive_type_t::u16    (primitive_type_t::C_U16);    // 16-bit unsigned integer
  const primitive_type_t primitive_type_t::i16    (primitive_type_t::C_I16);    // 16-bit signed integer
  const primitive_type_t primitive_type_t::u32    (primitive_type_t::C_U32);    // 32-bit unsigned integer
  const primitive_type_t primitive_type_t::i32    (primitive_type_t::C_I32);    // 32-bit signed integer
  const primitive_type_t primitive_type_t::u64    (primitive_type_t::C_U64);    // 64-bit unsigned integer
  const primitive_type_t primitive_type_t::i64    (primitive_type_t::C_I64);    // 64-bit signed integer
  const primitive_type_t primitive_type_t::nuint  (primitive_type_t::C_NUINT);  // native uintptr_t
  const primitive_type_t primitive_type_t::u16char(primitive_type_t::C_U16CH);  // utf-16 char

  const primitive_type_t primitive_type_t::f32    (primitive_type_t::C_F32);    // float
  const primitive_type_t primitive_type_t::f64    (primitive_type_t::C_F64);    // double
  const primitive_type_t primitive_type_t::f128   (primitive_type_t::C_F128);   // 128bit floating point numerics

  const primitive_type_t primitive_type_t::fn_info(primitive_type_t::C_FINFO);  // a structure representing function info
  const primitive_type_t primitive_type_t::ty_info(primitive_type_t::C_TINFO);  // a structure representing type info
  const primitive_type_t primitive_type_t::ty_val (primitive_type_t::C_TYVAL);  // a value with unspecified generic type


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
}