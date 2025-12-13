#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
    ::ll::UntypedStorage<4, 12> mUnkd12853;
    ::ll::UntypedStorage<4, 4>  mUnkbd7b4e;
    ::ll::UntypedStorage<4, 4>  mUnkad8615;
    ::ll::UntypedStorage<4, 4>  mUnke19e1f;
    ::ll::UntypedStorage<4, 4>  mUnke09bb7;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkChargeCursor& operator=(SculkChargeCursor const&);
    SculkChargeCursor(SculkChargeCursor const&);
    SculkChargeCursor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(::CompoundTag const& tag);

    MCNAPI void update(
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
    MCNAPI static ::std::array<::BlockPos, 18> _getNonCornerNeighborsOffsets(::Random& random);

    MCNAPI static bool
    _isMovementUnobstructed(::IBlockWorldGenAPI& target, ::BlockPos const& fromPos, ::BlockPos const& toPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::DefaultSculkBehavior const& sDefaultSculkBehavior();

    MCNAPI static ::SculkBlockBehavior const& sSculkBlockBehavior();

    MCNAPI static ::SculkVeinBlockBehavior const& sSculkVeinBlockBehavior();
    // NOLINTEND
};
