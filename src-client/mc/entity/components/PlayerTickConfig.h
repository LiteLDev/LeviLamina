#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickConfig {
public:
    // PlayerTickConfig inner types define
    enum class TickPolicy : uchar {
        Greedy    = 0,
        Throttled = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerTickConfig::TickPolicy> mPolicy;
    ::ll::TypedStorage<8, 8, uint64>                         mMaxBatchedTicks;
    ::ll::TypedStorage<8, 8, uint64>                         mMaxCreditTicks;
    ::ll::TypedStorage<1, 1, bool>                           mIsStrictMovement;
    ::ll::TypedStorage<1, 1, bool>                           mIsStrictDismount;
    ::ll::TypedStorage<1, 1, bool>                           mIsStrictEntityInteractions;
    // NOLINTEND
};
