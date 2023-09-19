#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct FormattedString {
public:
    // prevent constructor by default
    FormattedString& operator=(FormattedString const&);
    FormattedString(FormattedString const&);
    FormattedString();
};

}; // namespace Util
