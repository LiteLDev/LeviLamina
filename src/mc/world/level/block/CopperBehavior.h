#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CopperBehavior {
public:
    // prevent constructor by default
    CopperBehavior& operator=(CopperBehavior const&);
    CopperBehavior(CopperBehavior const&);
    CopperBehavior();

public:
    // NOLINTBEGIN
    MCAPI class Block const& getCorrespondingWaxedBlock(class Block const& block) const;

    MCAPI bool isWaxable() const;

    MCAPI bool isWaxed() const;

    MCAPI bool tryDecrementAge(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool tryIncrementAge(
        class BlockSource&    region,
        class BlockPos const& pos,
        float                 generatedDailyChance,
        float                 generatedOxidizeChance
    ) const;

    MCAPI bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI ~CopperBehavior();

    // NOLINTEND
};
