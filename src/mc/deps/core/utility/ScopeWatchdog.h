#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopeWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka90f4d;
    ::ll::UntypedStorage<8, 8>  mUnk17f0bb;
    ::ll::UntypedStorage<1, 1>  mUnk8cd6b2;
    ::ll::UntypedStorage<8, 8>  mUnk81b113;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeWatchdog& operator=(ScopeWatchdog const&);
    ScopeWatchdog(ScopeWatchdog const&);
    ScopeWatchdog();
};
