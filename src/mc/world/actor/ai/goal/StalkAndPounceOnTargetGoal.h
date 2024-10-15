#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class StalkAndPounceOnTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    StalkAndPounceOnTargetGoal& operator=(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StalkAndPounceOnTargetGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 3
    virtual bool canBeInterrupted();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI StalkAndPounceOnTargetGoal(
        class Mob&                    mob,
        class ActorFilterGroup const& stuckBlocks,
        float                         stalkSpeed,
        float                         stalkGiveUpDist,
        float                         leapHeight,
        float                         leapDist,
        float                         maxPounceDist,
        float                         strikeDistance,
        float                         interestedTime,
        float                         stuckTime,
        bool                          setPersistent
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isStuckBlock(class BlockPos blockPos) const;

    MCAPI void _preparePounce(class Vec3 const& mobPos, class Vec3 const& targetPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Mob&                    mob,
        class ActorFilterGroup const& stuckBlocks,
        float                         stalkSpeed,
        float                         stalkGiveUpDist,
        float                         leapHeight,
        float                         leapDist,
        float                         maxPounceDist,
        float                         strikeDistance,
        float                         interestedTime,
        float                         stuckTime,
        bool                          setPersistent
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canBeInterrupted$();

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
