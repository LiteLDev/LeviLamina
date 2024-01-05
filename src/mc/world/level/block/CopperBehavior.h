#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CopperType.h"

class CopperBehavior {
public:
    // prevent constructor by default
    CopperBehavior& operator=(CopperBehavior const&);
    CopperBehavior(CopperBehavior const&);
    CopperBehavior();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0CopperBehavior@@QEAA@W4CopperType@@AEBVHashedString@@AEBV?$function@$$A6AAEBVBlock@@AEBVHashedString@@AEBV1@@Z@std@@@Z
    MCAPI
    CopperBehavior(::CopperType, class HashedString const&, std::function<class Block const&(class HashedString const&, class Block const&)> const&);

    // symbol:
    // ??0CopperBehavior@@QEAA@W4CopperType@@AEBVHashedString@@11AEBV?$function@$$A6AAEBVBlock@@AEBVHashedString@@AEBV1@@Z@std@@@Z
    MCAPI
    CopperBehavior(::CopperType, class HashedString const&, class HashedString const&, class HashedString const&, std::function<class Block const&(class HashedString const&, class Block const&)> const&);

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
