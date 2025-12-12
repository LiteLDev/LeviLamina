#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/BlockPos.h"

class LegacyStructureActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>        mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mBlockPos;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mTag;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureActorInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyStructureActorInfo(::Vec3 const& pos, ::BlockPos const& blockPos, ::CompoundTag tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const& pos, ::BlockPos const& blockPos, ::CompoundTag tag);
    // NOLINTEND
};
