#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

#pragma warning(push)
#pragma warning(disable : 5204)
class SculkVeinBlockBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    SculkVeinBlockBehavior& operator=(SculkVeinBlockBehavior const&);
    SculkVeinBlockBehavior(SculkVeinBlockBehavior const&);
    SculkVeinBlockBehavior();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?updateDecayDelay@SculkVeinBlockBehavior@@UEBAHH@Z
    virtual int updateDecayDelay(int) const;

    // vIndex: 1, symbol: ?updateFacingData@SculkVeinBlockBehavior@@UEBAHHAEBVBlock@@@Z
    virtual int updateFacingData(int, class Block const& block) const;

    // vIndex: 2, symbol: ?canChangeBlockOnSpread@SculkVeinBlockBehavior@@UEBA_NXZ
    virtual bool canChangeBlockOnSpread() const;

    // vIndex: 3, symbol:
    // ?attemptSpreadVeins@SculkVeinBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int, class SculkSpreader&)
        const;

    // vIndex: 4, symbol:
    // ?attemptUseCharge@SculkVeinBlockBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&,
        class BlockPos const& pos,
        int                   charge,
        int,
        class Random& random,
        class SculkSpreader&,
        bool
    ) const;

    // vIndex: 5, symbol:
    // ?onDischarged@SculkVeinBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void
    onDischarged(class IBlockWorldGenAPI& target, class BlockSource* region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_attemptPlaceSculk@SculkVeinBlockBehavior@@CA_NAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVSculkSpreader@@AEAVRandom@@@Z
    MCAPI static bool _attemptPlaceSculk(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    pos,
        class SculkSpreader&,
        class Random& random
    );

    // symbol:
    // ?_cleanUpVeinsWithSculkSubstrate@SculkVeinBlockBehavior@@CAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _cleanUpVeinsWithSculkSubstrate(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    pos
    );

    // NOLINTEND
};
#pragma warning(pop)
