#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/BlockPos.h"

class LegacyStructureActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>        mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mBlockPos;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mTag;
    // NOLINTEND
};
