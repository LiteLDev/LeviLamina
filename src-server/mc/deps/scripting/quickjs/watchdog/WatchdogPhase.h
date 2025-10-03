#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class WatchdogPhase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7ad488;
    ::ll::UntypedStorage<8, 24> mUnk7007bb;
    ::ll::UntypedStorage<8, 8>  mUnk599322;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogPhase& operator=(WatchdogPhase const&);
    WatchdogPhase(WatchdogPhase const&);
    WatchdogPhase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WatchdogPhase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
