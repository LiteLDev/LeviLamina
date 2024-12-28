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
    ::ll::UntypedStorage<4, 12> mUnk12b508;
    ::ll::UntypedStorage<4, 12> mUnke67835;
    ::ll::UntypedStorage<8, 24> mUnk7ae825;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureActorInfo& operator=(LegacyStructureActorInfo const&);
    LegacyStructureActorInfo(LegacyStructureActorInfo const&);
    LegacyStructureActorInfo();

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
