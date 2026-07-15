#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct WatchdogEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka61f79;
    ::ll::UntypedStorage<1, 1>  mUnk2ce2d5;
    ::ll::UntypedStorage<8, 32> mUnk157a3d;
    ::ll::UntypedStorage<8, 8>  mUnk636071;
    ::ll::UntypedStorage<8, 8>  mUnkff37ad;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogEvent& operator=(WatchdogEvent const&);
    WatchdogEvent(WatchdogEvent const&);
    WatchdogEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WatchdogEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
