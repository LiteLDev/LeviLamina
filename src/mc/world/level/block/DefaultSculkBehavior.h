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

class DefaultSculkBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    DefaultSculkBehavior& operator=(DefaultSculkBehavior const&);
    DefaultSculkBehavior(DefaultSculkBehavior const&);
    DefaultSculkBehavior();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual int updateDecayDelay(int const currentValue) const /*override*/;

    // vIndex: 1
    virtual int updateFacingData(int const currentValue, ::Block const&) const /*override*/;

    // vIndex: 2
    virtual bool canChangeBlockOnSpread() const /*override*/;

    // vIndex: 3
    virtual bool
    attemptSpreadVeins(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, int facingData, ::SculkSpreader&)
        const /*override*/;

    // vIndex: 4
    virtual int attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
        int charge,
        int decayDelay,
        ::Random&,
        ::SculkSpreader&,
        bool const
    ) const /*override*/;

    // vIndex: 5
    virtual void onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $updateDecayDelay(int const currentValue) const;

    MCAPI int $updateFacingData(int const currentValue, ::Block const&) const;

    MCAPI bool $canChangeBlockOnSpread() const;

    MCAPI bool
    $attemptSpreadVeins(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, int facingData, ::SculkSpreader&)
        const;

    MCAPI int $attemptUseCharge(
        ::IBlockWorldGenAPI&,
        ::BlockSource*,
        ::BlockPos const&,
        ::BlockPos const&,
        int charge,
        int decayDelay,
        ::Random&,
        ::SculkSpreader&,
        bool const
    ) const;

    MCAPI void $onDischarged(::IBlockWorldGenAPI&, ::BlockSource*, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
