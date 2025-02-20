#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExpiringTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1031ad;
    ::ll::UntypedStorage<2, 2> mUnke085f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpiringTick& operator=(ExpiringTick const&);
    ExpiringTick(ExpiringTick const&);
    ExpiringTick();
};
