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

class SculkVeinBlockBehavior : public ::SculkBehavior {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int updateDecayDelay(int const) const /*override*/;

    // vIndex: 1
    virtual int updateFacingData(int const, ::Block const& block) const /*override*/;

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
        ::BlockPos const&,
        ::BlockPos const& pos,
        int               charge,
        int,
        ::Random&        random,
        ::SculkSpreader& spreader,
        bool const       spreadVeins
    ) const /*override*/;

    // vIndex: 5
    virtual void onDischarged(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos) const
        /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _attemptPlaceSculk(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    pos,
        ::SculkSpreader&     spreader,
        ::Random&            random
    );

    MCAPI static void
    _cleanUpVeinsWithSculkSubstrate(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $updateDecayDelay(int const) const;

    MCAPI int $updateFacingData(int const, ::Block const& block) const;

    MCAPI bool $canChangeBlockOnSpread() const;

    MCAPI bool
    $attemptSpreadVeins(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, int, ::SculkSpreader&)
        const;

    MCAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&,
        ::BlockPos const& pos,
        int               charge,
        int,
        ::Random&        random,
        ::SculkSpreader& spreader,
        bool const       spreadVeins
    ) const;

    MCAPI void $onDischarged(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
