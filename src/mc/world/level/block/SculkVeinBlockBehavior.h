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
    virtual int updateDecayDelay(int const) const /*override*/;

    virtual int updateFacingData(int const, ::Block const& block) const /*override*/;

    virtual bool canChangeBlockOnSpread() const /*override*/;

    virtual bool attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
        int,
        ::SculkSpreader&
    ) const /*override*/;

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
    MCFOLD int $updateDecayDelay(int const) const;

    MCAPI int $updateFacingData(int const, ::Block const& block) const;

    MCFOLD bool $canChangeBlockOnSpread() const;

    MCFOLD bool $attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
        int,
        ::SculkSpreader&
    ) const;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
