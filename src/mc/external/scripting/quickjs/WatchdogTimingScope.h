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
    // symbol: ??1WatchdogTimingScope@QuickJS@Scripting@@QEAA@XZ
    MCAPI ~WatchdogTimingScope();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
