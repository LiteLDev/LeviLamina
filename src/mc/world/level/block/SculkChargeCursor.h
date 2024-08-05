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
    MCAPI explicit SculkChargeCursor(class CompoundTag const& tag);

    MCAPI void update(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    origin,
        class Random&            random,
        class SculkSpreader&,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<class BlockPos, 18> _getNonCornerNeighborsOffsets(class Random& random);

    MCAPI static class SculkBehavior const& _getSculkBehavior(class Block const& block);

    MCAPI static std::optional<class BlockPos> _getValidMovementPos(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class SculkSpreader&,
        class Random& random
    );

    MCAPI static bool _isMovementUnobstructed(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    fromPos,
        class BlockPos const&    toPos
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class DefaultSculkBehavior const sDefaultSculkBehavior;

    MCAPI static class SculkBlockBehavior const sSculkBlockBehavior;

    MCAPI static class SculkVeinBlockBehavior const sSculkVeinBlockBehavior;

    // NOLINTEND
};
