#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct FormattedString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_FORMATTEDSTRING
public:
    FormattedString& operator=(FormattedString const&) = delete;
    FormattedString(FormattedString const&)            = delete;
    FormattedString()                                  = delete;
#endif

public:
};

}; // namespace Util
