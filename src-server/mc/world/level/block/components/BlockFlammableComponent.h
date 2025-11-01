#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/LavaFlammable.h"

struct BlockFlammableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LavaFlammable> mLavaFlammable;
    ::ll::TypedStorage<2, 2, ::FlameOdds> mCatchChanceModifier;
    ::ll::TypedStorage<2, 2, ::BurnOdds> mDestroyChanceModifier;
    // NOLINTEND

};
