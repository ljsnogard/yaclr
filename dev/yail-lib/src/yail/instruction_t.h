#include "opcode_t.h"

#include <iterator>
#include <string>
#include <regex>
#include <typeinfo> // typeid()
#include <iostream> // string::erase
#include <sstream>  // std::stringstream

#pragma once

namespace yaclr::yail
{
  class instruction_t
  {
    public:
      template <typename T>
      class generate_opcode_for
      {
        private:
          generate_opcode_for(void) = delete;

          static std::uint32_t find_opcode_(void) {
            const T instruction_;
            const std::regex typename_regex_("op0x[0-9a-f]+");
            const std::string typename_(typeid(instruction_).name());
            const std::size_t PREFIX_LEN = 4; // length of "op0x"
            std::smatch typename_match_;
            const bool match_found_ = std::regex_search(typename_, typename_match_, typename_regex_);

            if (false == match_found_)
              throw typename_;

            std::uint32_t u32code;
            std::stringstream ss;

            std::string hex_str_(typename_match_[0].str().substr(PREFIX_LEN));
            const std::string& trimmed = hex_str_.erase(0, hex_str_.find_first_not_of('0'));
            ss << std::hex << trimmed;
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
