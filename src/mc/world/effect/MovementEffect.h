#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MovementEffectType.h"

class MovementEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>               mStartTick;
    ::ll::TypedStorage<4, 4, ::EffectDuration>     mDuration;
    ::ll::TypedStorage<4, 4, ::MovementEffectType> mType;
    // NOLINTEND
};
