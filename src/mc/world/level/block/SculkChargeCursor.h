#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefaultSculkBehavior;
class SculkBlockBehavior;
class SculkVeinBlockBehavior;
// clang-format on

class SculkChargeCursor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, int>         mCharge;
    ::ll::TypedStorage<4, 4, int>         mUpdateDelay;
    ::ll::TypedStorage<4, 4, int>         mDecayDelay;
    ::ll::TypedStorage<4, 4, int>         mFacingData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(::CompoundTag const& tag);

    MCNAPI void save(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::DefaultSculkBehavior const& sDefaultSculkBehavior();

    MCNAPI static ::SculkBlockBehavior const& sSculkBlockBehavior();

    MCNAPI static ::SculkVeinBlockBehavior const& sSculkVeinBlockBehavior();
    // NOLINTEND
};
