#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/DeathTickingType.h"

struct DeathTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mSpawnedXP;
    ::ll::TypedStorage<4, 4, int>                mTicks;
    ::ll::TypedStorage<4, 4, ::DeathTickingType> mType;
    // NOLINTEND
};
