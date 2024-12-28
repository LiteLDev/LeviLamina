#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WatchdogTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkca7973;
    ::ll::UntypedStorage<8, 56> mUnk90dabf;
    ::ll::UntypedStorage<8, 8>  mUnk94702c;
    ::ll::UntypedStorage<8, 64> mUnk52bf64;
    ::ll::UntypedStorage<8, 16> mUnk5d4bfb;
    ::ll::UntypedStorage<8, 80> mUnk646dac;
    ::ll::UntypedStorage<1, 1>  mUnk3d77c6;
    ::ll::UntypedStorage<8, 8>  mUnk8a3aa9;
    ::ll::UntypedStorage<1, 1>  mUnk296058;
    ::ll::UntypedStorage<8, 8>  mUnk39e2bf;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogTimer& operator=(WatchdogTimer const&);
    WatchdogTimer(WatchdogTimer const&);
    WatchdogTimer();
};
