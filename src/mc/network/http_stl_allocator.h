#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class http_stl_allocator {

public:
    // prevent constructor by default
    http_stl_allocator& operator=(http_stl_allocator const&) = delete;
    http_stl_allocator(http_stl_allocator const&)            = delete;
    http_stl_allocator()                                     = delete;
};

using http_string  = std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>;
using http_wstring = std::basic_string<wchar_t, std::char_traits<wchar_t>, class http_stl_allocator<wchar_t>>;
