#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class DefaultSculkBehavior;
class IBlockWorldGenAPI;
class Random;
class SculkBlockBehavior;
class SculkSpreader;
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
    MCAPI void load(::CompoundTag const& tag);

    MCAPI void update(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::Random&            random,
        ::SculkSpreader&     spreader,
        bool                 spreadVeins
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::BlockPos, 18> _getNonCornerNeighborsOffsets(::Random& random);

    MCAPI static bool
    _isMovementUnobstructed(::IBlockWorldGenAPI& target, ::BlockPos const& fromPos, ::BlockPos const& toPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::DefaultSculkBehavior const& sDefaultSculkBehavior();

    MCAPI static ::SculkBlockBehavior const& sSculkBlockBehavior();

    MCAPI static ::SculkVeinBlockBehavior const& sSculkVeinBlockBehavior();
    // NOLINTEND
};
