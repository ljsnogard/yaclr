#include "calling_convention_t.h"

namespace yaclr::yail 
{
  const calling_convention_t calling_convention_t::Unspecified(calling_convention_t::C_UNSPEC);
  const calling_convention_t calling_convention_t::Cdecl      (calling_convention_t::C_CDECL);
  const calling_convention_t calling_convention_t::Stdcall    (calling_convention_t::C_STDCALL);
  const calling_convention_t calling_convention_t::Fastcall   (calling_convention_t::C_FASTCALL);
}