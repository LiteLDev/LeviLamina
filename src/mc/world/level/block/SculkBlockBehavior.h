#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
class Random;
class SculkSpreader;
// clang-format on

class SculkBlockBehavior : public ::SculkBehavior {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int updateDecayDelay(int const) const /*override*/;

    // vIndex: 1
    virtual int updateFacingData(int const, ::Block const&) const /*override*/;

    // vIndex: 2
    virtual bool canChangeBlockOnSpread() const /*override*/;

    // vIndex: 3
    virtual bool
    attemptSpreadVeins(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, int, ::SculkSpreader&)
        const /*override*/;

    // vIndex: 4
    virtual int attemptUseCharge(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::BlockPos const&    pos,
        int                  charge,
        int,
        ::Random&        random,
        ::SculkSpreader& spreader,
        bool const
    ) const /*override*/;

    // vIndex: 5
    virtual void onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _placeGrowthAt(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    pos,
        ::Random&            random,
        ::SculkSpreader&     spreader
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $updateDecayDelay(int const) const;

    MCAPI int $updateFacingData(int const, ::Block const&) const;

    MCFOLD bool $canChangeBlockOnSpread() const;

    MCFOLD bool
    $attemptSpreadVeins(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, int, ::SculkSpreader&)
        const;

    MCAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::BlockPos const&    pos,
        int                  charge,
        int,
        ::Random&        random,
        ::SculkSpreader& spreader,
        bool const
    ) const;

    MCFOLD void $onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
