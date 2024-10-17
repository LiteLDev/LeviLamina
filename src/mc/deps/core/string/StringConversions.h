#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // prevent constructor by default
    StringConversions& operator=(StringConversions const&);
    StringConversions(StringConversions const&);
    StringConversions();

public:
    // NOLINTBEGIN
    MCAPI static std::string toUtf8(std::wstring const& src);

    MCAPI static std::string toUtf8(wchar_t const* src, int srcLen);

    MCAPI static int toUtf8(wchar_t const* src, int srcLen, char* dest, int max);

    MCAPI static std::wstring toWide(std::string_view src);

    MCAPI static std::wstring toWide(char const* src, int srcLen);

    MCAPI static int toWide(char const* src, int srcLen, wchar_t* dest, int max);

    // NOLINTEND
};

}; // namespace Core
