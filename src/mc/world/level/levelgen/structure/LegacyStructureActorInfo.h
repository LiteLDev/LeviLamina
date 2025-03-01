#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class Vec3;
// clang-format on

class LegacyStructureActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>        mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mBlockPos;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureActorInfo(::Vec3 const& pos, ::BlockPos const& blockPos, ::CompoundTag tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& pos, ::BlockPos const& blockPos, ::CompoundTag tag);
    // NOLINTEND
};
