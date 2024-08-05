#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TargetSelectionMethod.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveToBlockGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&);
    MoveToBlockGoal(MoveToBlockGoal const&);
    MoveToBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToBlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI MoveToBlockGoal(class Mob& mob, float speedModifier, int searchRange, int searchHeight, int tickInterval, int stayDurationTicks, float goalRadius, class Vec3 targetPositionOffset, float chanceToStart, ::TargetSelectionMethod targetSelectionMethod, std::vector<class ActorDefinitionTrigger> onReachTriggers, std::vector<class ActorDefinitionTrigger> onStayCompletedTriggers, std::vector<class ItemDescriptor> targetBlocks, class ActorFilterGroup const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkIfStuck();

    MCAPI bool _isValidTarget(class Block const& candidateBlock) const;

    MCAPI void _moveToBlock();

    MCAPI bool _pathIsValid(class Path const* path);

    // NOLINTEND
};
