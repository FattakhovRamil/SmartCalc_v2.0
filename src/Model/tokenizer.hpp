/*
 * This file is part of TKR Library.
 *
 * TKR Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TKR Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TKR Library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <algorithm>
#include <iostream>
#include <memory>
#include <regex>
#include <sstream>
#include <vector>

#define TKR_DEFAULT_SEPARATOR ' '

namespace tkr {
class tokenizer {
 public:
  /**
   * Constructor
   * \param String to tokenize
   * \param Token separator (blank by default)
   */
  tokenizer(std::string&, char separator = TKR_DEFAULT_SEPARATOR);

  /**
   * Constructor
   * \param String to tokenize
   * \param Token separator (blank by default)
   */
  tokenizer(const char*, char separator = TKR_DEFAULT_SEPARATOR);

  /**
   * \return false when all tokens have been read
   */
  bool has_more_tokens() const;

  /**
   * \return the next token found in given string
   */
  const std::string& next_token();

 private:
  void _tokenize(const char*, char);
  void _tokenize(std::string&, char);

  // Vector containing all tokens
  std::vector<std::string> _tokens;

  // Iterator pointing on next token
  std::vector<std::string>::const_iterator _it;
};
}  // namespace tkr

#endif
