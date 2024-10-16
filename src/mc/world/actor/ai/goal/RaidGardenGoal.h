#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class RaidGardenGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    RaidGardenGoal& operator=(RaidGardenGoal const&);
    RaidGardenGoal(RaidGardenGoal const&);
    RaidGardenGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RaidGardenGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    MCAPI RaidGardenGoal(
        class Mob&                                mob,
        float                                     speedModifier,
        int                                       searchRange,
        int                                       searchHeight,
        int                                       searchCount,
        float                                     goalRadius,
        int                                       maxToEat,
        int                                       hasEatenFillDelay,
        int                                       eatDelay,
        int                                       initialEatDelay,
        std::vector<class BlockDescriptor> const& eatBlocks
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob&                                mob,
        float                                     speedModifier,
        int                                       searchRange,
        int                                       searchHeight,
        int                                       searchCount,
        float                                     goalRadius,
        int                                       maxToEat,
        int                                       hasEatenFillDelay,
        int                                       eatDelay,
        int                                       initialEatDelay,
        std::vector<class BlockDescriptor> const& eatBlocks
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI bool isValidTarget$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void start$();

    MCAPI void tick$();

    // NOLINTEND
};
