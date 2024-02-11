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
    // symbol: ?getCorrespondingWaxedBlock@CopperBehavior@@QEBAAEBVBlock@@AEBV2@@Z
    MCAPI class Block const& getCorrespondingWaxedBlock(class Block const& block) const;

    // symbol: ?isWaxable@CopperBehavior@@QEBA_NXZ
    MCAPI bool isWaxable() const;

    // symbol: ?isWaxed@CopperBehavior@@QEBA_NXZ
    MCAPI bool isWaxed() const;

    // symbol: ?tryDecrementAge@CopperBehavior@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool tryDecrementAge(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?tryIncrementAge@CopperBehavior@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@MM@Z
    MCAPI bool tryIncrementAge(class BlockSource& region, class BlockPos const& pos, float, float) const;

    // symbol: ?use@CopperBehavior@@QEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    MCAPI bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // symbol: ??1CopperBehavior@@QEAA@XZ
    MCAPI ~CopperBehavior();

    // NOLINTEND
};
