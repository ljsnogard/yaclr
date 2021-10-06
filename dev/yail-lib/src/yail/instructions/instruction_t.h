#include "../opcode_t.h"

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
    protected:
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

            std::string hex_str_(typename_match_[0].str().substr(PREFIX_LEN));
            const std::size_t pos_first_not_0_ = hex_str_.find_first_not_of('0');
            if (pos_first_not_0_ == std::string::npos)
              return 0;

            std::uint32_t u32code;
            std::stringstream ss;
            const std::string& trimmed = hex_str_.erase(0, pos_first_not_0_);
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
