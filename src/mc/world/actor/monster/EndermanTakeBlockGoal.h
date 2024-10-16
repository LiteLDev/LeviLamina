#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EndermanTakeBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    EndermanTakeBlockGoal& operator=(EndermanTakeBlockGoal const&);
    EndermanTakeBlockGoal(EndermanTakeBlockGoal const&);
    EndermanTakeBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndermanTakeBlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10
    virtual class BlockPos getRandomNearbyBlockPos(class Vec3 const& centerPos) const;

    MCAPI explicit EndermanTakeBlockGoal(class EnderMan& enderman);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class EnderMan& enderman);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    MCAPI class BlockPos getRandomNearbyBlockPos$(class Vec3 const& centerPos) const;

    MCAPI void tick$();

    // NOLINTEND
};
