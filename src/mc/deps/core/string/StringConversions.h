#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string toUtf8(::std::basic_string_view<wchar_t, ::std::char_traits<wchar_t>> src);

    MCAPI static ::std::string toUtf8(wchar_t const* src, int srcLen);

    MCAPI static int toUtf8(wchar_t const* src, int srcLen, char* dest, int max);

    MCAPI static ::std::wstring toWide(::std::string_view src);

    MCAPI static ::std::wstring toWide(char const* src, int srcLen);

    MCAPI static int toWide(char const* src, int srcLen, wchar_t* dest, int max);
    // NOLINTEND
};

} // namespace Core
