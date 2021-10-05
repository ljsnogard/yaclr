#include "opcode_t.h"

#include <iterator>
#include <string>
#include <regex>
#include <typeinfo>
#include <sstream>

#pragma once

namespace yaclr::yail
{
  class instruction_t
  {
    protected:
      template <typename T>
      class generate_opcode_for
      {
        private:
          generate_opcode_for(void) = delete;

          static std::uint32_t find_opcode_(void) {
            const T instruction_;
            const std::regex typename_regex_("op0x[a-f0-9]+");
            const std::string typename_(typeid(instruction_).name());
            std::smatch typename_match_;
            const bool match_found_ = std::regex_search(typename_, typename_match_, typename_regex_);

            if (false == match_found_)
              throw typename_;

            std::uint32_t u32code;
            std::stringstream ss;
            ss << std::hex << typename_match_[0];
            ss >> u32code;
            return u32code;
          }

        public:
          static opcode_t result(void) {
            static const opcode_t opcode(find_opcode_());
            return opcode;
          }
      };

    public:
      virtual opcode_t opcode(void) const = 0;
  };
}
