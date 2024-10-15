#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SkeletonHorseTrapGoal : public ::Goal {
public:
    // prevent constructor by default
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkeletonHorseTrapGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& debugInfo) const;

    MCAPI SkeletonHorseTrapGoal(class Horse& mob, int trapLifeTicks, float triggerDistance);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Horse* _createHorse(::Difficulty const& difficulty);

    MCAPI class Skeleton* _createSkeleton(::Difficulty const& difficulty, class Horse const& otherHorse);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Horse& mob, int trapLifeTicks, float triggerDistance);

    MCAPI void appendDebugInfo$(std::string& debugInfo) const;

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void tick$();

    // NOLINTEND
};
