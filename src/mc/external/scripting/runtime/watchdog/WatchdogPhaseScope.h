#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class WatchdogPhaseScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95f4d5;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogPhaseScope& operator=(WatchdogPhaseScope const&);
    WatchdogPhaseScope(WatchdogPhaseScope const&);
    WatchdogPhaseScope();
};

} // namespace Scripting
