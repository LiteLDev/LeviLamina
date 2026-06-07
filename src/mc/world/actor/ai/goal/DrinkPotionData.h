#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"

struct DrinkPotionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mPotionId;
    ::ll::TypedStorage<4, 4, float>               mChance;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
    // NOLINTEND
};
