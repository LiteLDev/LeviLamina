#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/DeathTickingType.h"

struct DeathTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>              mTicks;
    ::ll::TypedStorage<1, 1, ::DeathTickingType> mType;
    ::ll::TypedStorage<1, 1, bool>               mSpawnedXP;
    // NOLINTEND
};
