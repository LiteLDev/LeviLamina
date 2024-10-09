#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class WatchdogTimingScope {
public:
    // prevent constructor by default
    WatchdogTimingScope& operator=(WatchdogTimingScope const&);
    WatchdogTimingScope(WatchdogTimingScope const&);
    WatchdogTimingScope();

public:
    // NOLINTBEGIN
    MCAPI ~WatchdogTimingScope();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
