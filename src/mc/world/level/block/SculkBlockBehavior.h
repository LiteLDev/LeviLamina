#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

class SculkBlockBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    SculkBlockBehavior& operator=(SculkBlockBehavior const&);
    SculkBlockBehavior(SculkBlockBehavior const&);
    SculkBlockBehavior();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual int updateDecayDelay(int) const;

    // vIndex: 1
    virtual int updateFacingData(int, class Block const&) const;

    // vIndex: 2
    virtual bool canChangeBlockOnSpread() const;

    // vIndex: 3
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int, class SculkSpreader&)
        const;

    // vIndex: 4
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    origin,
        class BlockPos const&    pos,
        int                      charge,
        int,
        class Random&        random,
        class SculkSpreader& spreader,
        bool
    ) const;

    // vIndex: 5
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _placeGrowthAt(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    pos,
        class Random&            random,
        class SculkSpreader&     spreader
    );

    // NOLINTEND
};
