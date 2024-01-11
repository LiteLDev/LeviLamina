#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

#pragma warning(push)
#pragma warning(disable : 5204)
class SculkBlockBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    SculkBlockBehavior& operator=(SculkBlockBehavior const&);
    SculkBlockBehavior(SculkBlockBehavior const&);
    SculkBlockBehavior();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?updateDecayDelay@SculkBlockBehavior@@UEBAHH@Z
    virtual int updateDecayDelay(int) const;

    // vIndex: 1, symbol: ?updateFacingData@SculkBlockBehavior@@UEBAHHAEBVBlock@@@Z
    virtual int updateFacingData(int, class Block const&) const;

    // vIndex: 2, symbol: ?canChangeBlockOnSpread@SculkBlockBehavior@@UEBA_NXZ
    virtual bool canChangeBlockOnSpread() const;

    // vIndex: 3, symbol:
    // ?attemptSpreadVeins@SculkBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int, class SculkSpreader&)
        const;

    // vIndex: 4, symbol:
    // ?attemptUseCharge@SculkBlockBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    origin,
        class BlockPos const&    pos,
        int                      charge,
        int,
        class Random& random,
        class SculkSpreader&,
        bool
    ) const;

    // vIndex: 5, symbol:
    // ?onDischarged@SculkBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_placeGrowthAt@SculkBlockBehavior@@CAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVSculkSpreader@@@Z
    MCAPI static void
    _placeGrowthAt(class IBlockWorldGenAPI& target, class BlockSource* region, class BlockPos const& pos, class Random& random, class SculkSpreader&);

    // NOLINTEND
};
#pragma warning(pop)
