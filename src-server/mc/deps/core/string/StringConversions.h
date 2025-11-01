#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string toUtf8(wchar_t const* src, int srcLen);

    MCNAPI static int toUtf8(wchar_t const* src, int srcLen, char* dest, int max);

    MCNAPI static ::std::wstring toWide(char const* src, int srcLen);

    MCNAPI static int toWide(char const* src, int srcLen, wchar_t* dest, int max);
    // NOLINTEND

};

}
