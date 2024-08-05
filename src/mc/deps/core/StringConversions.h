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

    MCAPI static std::string toUtf8(wchar_t const*, int);

    MCAPI static int toUtf8(wchar_t const* src, int, char* dest, int max);

    MCAPI static std::wstring toWide(std::string_view);

    MCAPI static std::wstring toWide(char const*, int);

    MCAPI static int toWide(char const* src, int, wchar_t* dest, int max);

    // NOLINTEND
};

}; // namespace Core
