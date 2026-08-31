#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/LavaFlammable.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"

struct BlockFlammableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::LavaFlammable> mLavaFlammable;
    ::ll::TypedStorage<2, 2, ::FlameOdds>                            mCatchChanceModifier;
    ::ll::TypedStorage<2, 2, ::BurnOdds>                             mDestroyChanceModifier;
    // NOLINTEND
};
