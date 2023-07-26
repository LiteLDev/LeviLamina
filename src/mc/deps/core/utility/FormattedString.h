#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct FormattedString {

public:
    // prevent constructor by default
    FormattedString& operator=(FormattedString const&) = delete;
    FormattedString(FormattedString const&)            = delete;
    FormattedString()                                  = delete;
};

}; // namespace Util
