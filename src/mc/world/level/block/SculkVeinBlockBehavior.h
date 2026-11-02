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
    MCNAPI static void
    _cleanUpVeinsWithSculkSubstrate(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $updateDecayDelay(int const) const;

    MCNAPI int $updateFacingData(int const, ::Block const& block) const;

    MCNAPI bool $canChangeBlockOnSpread() const;

    MCNAPI bool $attemptSpreadVeins(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
        int,
        ::SculkSpreader&
    ) const;

    MCNAPI int $attemptUseCharge(
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

    MCNAPI void $onDischarged(::IBlockWorldGenAPI& target, ::BlockSource* region, ::BlockPos const& pos) const;


    // NOLINTEND
};
