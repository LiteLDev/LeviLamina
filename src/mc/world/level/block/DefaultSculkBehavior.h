#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

class DefaultSculkBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    DefaultSculkBehavior& operator=(DefaultSculkBehavior const&);
    DefaultSculkBehavior(DefaultSculkBehavior const&);
    DefaultSculkBehavior();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual int updateDecayDelay(int currentValue) const;

    // vIndex: 1
    virtual int updateFacingData(int currentValue, class Block const&) const;

    // vIndex: 2
    virtual bool canChangeBlockOnSpread() const;

    // vIndex: 3
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int facingData, class SculkSpreader&)
        const;

    // vIndex: 4
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class BlockPos const&,
        int charge,
        int decayDelay,
        class Random&,
        class SculkSpreader&,
        bool
    ) const;

    // vIndex: 5
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool
    attemptSpreadVeins$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int facingData, class SculkSpreader&)
        const;

    MCAPI int attemptUseCharge$(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class BlockPos const&,
        int charge,
        int decayDelay,
        class Random&,
        class SculkSpreader&,
        bool
    ) const;

    MCAPI bool canChangeBlockOnSpread$() const;

    MCAPI void onDischarged$(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    MCAPI int updateDecayDelay$(int currentValue) const;

    MCAPI int updateFacingData$(int currentValue, class Block const&) const;

    // NOLINTEND
};
