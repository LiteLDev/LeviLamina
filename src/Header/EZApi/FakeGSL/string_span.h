#pragma once

#include "span.h"
#include <cstring>
#include <string>

namespace gsl {

template <typename T = char const, size_t ext = (size_t)-1>
class basic_string_span;
template <>
class basic_string_span<char const, (size_t)-1> : public span<char const> {
public:
    basic_string_span(char const* str)
        : span{str, strlen(str)} {
    }
    basic_string_span(std::string const& str)
        : span{str.c_str(), str.length()} {
    }
};

template <typename T = char const>
using cstring_span = basic_string_span<T>;

} // namespace gsl