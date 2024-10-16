#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SculkBehavior.h"

class SculkVeinBlockBehavior : public ::SculkBehavior {
public:
    // prevent constructor by default
    SculkVeinBlockBehavior& operator=(SculkVeinBlockBehavior const&);
    SculkVeinBlockBehavior(SculkVeinBlockBehavior const&);
    SculkVeinBlockBehavior();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual int updateDecayDelay(int) const;

    // vIndex: 1
    virtual int updateFacingData(int, class Block const& block) const;

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
        class BlockPos const&,
        class BlockPos const& pos,
        int                   charge,
        int,
        class Random&        random,
        class SculkSpreader& spreader,
        bool                 spreadVeins
    ) const;

    // vIndex: 5
    virtual void
    onDischarged(class IBlockWorldGenAPI& target, class BlockSource* region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _attemptPlaceSculk(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    pos,
        class SculkSpreader&     spreader,
        class Random&            random
    );

    MCAPI static void _cleanUpVeinsWithSculkSubstrate(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    pos
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool
    attemptSpreadVeins$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Block const& block, int, class SculkSpreader&)
        const;

    MCAPI int attemptUseCharge$(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&,
        class BlockPos const& pos,
        int                   charge,
        int,
        class Random&        random,
        class SculkSpreader& spreader,
        bool                 spreadVeins
    ) const;

    MCAPI bool canChangeBlockOnSpread$() const;

    MCAPI void
    onDischarged$(class IBlockWorldGenAPI& target, class BlockSource* region, class BlockPos const& pos) const;

    MCAPI int updateDecayDelay$(int) const;

    MCAPI int updateFacingData$(int, class Block const& block) const;

    // NOLINTEND
};
