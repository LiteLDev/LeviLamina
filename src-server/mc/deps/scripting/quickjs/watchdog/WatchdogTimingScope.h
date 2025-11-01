#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct WatchdogTimingScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9a2355;
    ::ll::UntypedStorage<1, 1> mUnk37d998;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogTimingScope& operator=(WatchdogTimingScope const&);
    WatchdogTimingScope(WatchdogTimingScope const&);
    WatchdogTimingScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WatchdogTimingScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
