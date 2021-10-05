#include "yail/op0x00_nop_t.h"
#include "yail/op0x01_break_t.h"

#include <iostream>
#include <typeinfo>


int main(int argc, char** argv)
{
  {
    yaclr::yail::op0x00_nop_t op;
    std::string type_name(typeid(op).name());
    std::cout
      << " opcode for " << type_name << "is: " << op.opcode().code << std::endl;
  }
  {
    yaclr::yail::op0x01_break_t op;
    std::string type_name(typeid(op).name());
    std::cout
      << " opcode for " << type_name << "is: " << op.opcode().code << std::endl;
  }
  return 0;
}
