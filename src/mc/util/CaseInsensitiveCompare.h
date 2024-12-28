#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveCompare {
public:
    // prevent constructor by default
    CaseInsensitiveCompare& operator=(CaseInsensitiveCompare const&);
    CaseInsensitiveCompare(CaseInsensitiveCompare const&);
    CaseInsensitiveCompare();
};

} // namespace Util
