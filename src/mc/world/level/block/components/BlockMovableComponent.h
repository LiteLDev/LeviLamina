#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/MovementType.h"
#include "mc/world/level/block/components/StickyType.h"

struct BlockMovableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MovementType> mMovementType;
    ::ll::TypedStorage<1, 1, ::StickyType>   mStickyType;
    // NOLINTEND
};
