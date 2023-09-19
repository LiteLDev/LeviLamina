#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkChargeCursor {
public:
    // prevent constructor by default
    SculkChargeCursor& operator=(SculkChargeCursor const&);
    SculkChargeCursor(SculkChargeCursor const&);
    SculkChargeCursor();

public:
    // NOLINTBEGIN
    // symbol: ??0SculkChargeCursor@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit SculkChargeCursor(class CompoundTag const&);

    // symbol:
    // ?update@SculkChargeCursor@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVSculkSpreader@@_N@Z
    MCAPI void update(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class Random&,
        class SculkSpreader&,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getNonCornerNeighborsOffsets@SculkChargeCursor@@CA?AV?$array@VBlockPos@@$0BC@@std@@AEAVRandom@@@Z
    MCAPI static std::array<class BlockPos, 18> _getNonCornerNeighborsOffsets(class Random&);

    // symbol: ?_getSculkBehavior@SculkChargeCursor@@CAAEBVSculkBehavior@@AEBVBlock@@@Z
    MCAPI static class SculkBehavior const& _getSculkBehavior(class Block const&);

    // symbol:
    // ?_getValidMovementPos@SculkChargeCursor@@CA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVSculkSpreader@@AEAVRandom@@@Z
    MCAPI static std::optional<class BlockPos>
    _getValidMovementPos(class IBlockWorldGenAPI&, class BlockPos const&, class SculkSpreader&, class Random&);

    // symbol: ?_isMovementUnobstructed@SculkChargeCursor@@CA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@1@Z
    MCAPI static bool _isMovementUnobstructed(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sDefaultSculkBehavior@SculkChargeCursor@@0VDefaultSculkBehavior@@B
    MCAPI static class DefaultSculkBehavior const sDefaultSculkBehavior;

    // symbol: ?sSculkBlockBehavior@SculkChargeCursor@@0VSculkBlockBehavior@@B
    MCAPI static class SculkBlockBehavior const sSculkBlockBehavior;

    // symbol: ?sSculkVeinBlockBehavior@SculkChargeCursor@@0VSculkVeinBlockBehavior@@B
    MCAPI static class SculkVeinBlockBehavior const sSculkVeinBlockBehavior;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $sDefaultSculkBehavior() { return sDefaultSculkBehavior; }

    auto& $sSculkBlockBehavior() { return sSculkBlockBehavior; }

    auto& $sSculkVeinBlockBehavior() { return sSculkVeinBlockBehavior; }

    // NOLINTEND
};
