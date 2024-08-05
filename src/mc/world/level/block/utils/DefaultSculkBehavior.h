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
    attemptSpreadVeins(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int, class SculkSpreader&)
        const;

    // vIndex: 4
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class BlockPos const&,
        int charge,
        int,
        class Random&,
        class SculkSpreader&,
        bool
    ) const;

    // vIndex: 5
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    // NOLINTEND
};
