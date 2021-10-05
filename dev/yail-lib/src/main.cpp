#include "yail/op0x00_nop_t.h"
#include "yail/op0x01_break_t.h"

#include <iostream>
#include <typeinfo>


int main(int argc, char** argv)
{
  {
    yaclr::yail::op0x00_nop_t nop;
    std::cout << "opcode for " << typeid(nop).name()  << " is: " << nop.opcode().code << std::endl;
  }
  {
    yaclr::yail::op0x01_break_t op_break;
    std::cout << "opcode for " << typeid(op_break).name()  << " is: " << op_break.opcode().code << std::endl;
  }
  return 0;
}
