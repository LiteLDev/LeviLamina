#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

#pragma warning(push)
#pragma warning(disable : 5204)
class DefaultSculkBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    DefaultSculkBehavior& operator=(DefaultSculkBehavior const&);
    DefaultSculkBehavior(DefaultSculkBehavior const&);
    DefaultSculkBehavior();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?updateDecayDelay@DefaultSculkBehavior@@UEBAHH@Z
    virtual int updateDecayDelay(int currentValue) const;

    // vIndex: 1, symbol: ?updateFacingData@DefaultSculkBehavior@@UEBAHHAEBVBlock@@@Z
    virtual int updateFacingData(int currentValue, class Block const&) const;

    // vIndex: 2, symbol: ?canChangeBlockOnSpread@DefaultSculkBehavior@@UEBA_NXZ
    virtual bool canChangeBlockOnSpread() const;

    // vIndex: 3, symbol:
    // ?attemptSpreadVeins@DefaultSculkBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int, class SculkSpreader&)
        const;

    // vIndex: 4, symbol:
    // ?attemptUseCharge@DefaultSculkBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
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

    // vIndex: 5, symbol:
    // ?onDischarged@DefaultSculkBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    // NOLINTEND
};
#pragma warning(pop)
