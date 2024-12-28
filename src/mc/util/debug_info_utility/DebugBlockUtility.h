#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

class DebugBlockUtility {
public:
    // prevent constructor by default
    DebugBlockUtility& operator=(DebugBlockUtility const&);
    DebugBlockUtility(DebugBlockUtility const&);
    DebugBlockUtility();
};

} // namespace DebugInfoUtility
