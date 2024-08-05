#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLandGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    MoveToLandGoal& operator=(MoveToLandGoal const&);
    MoveToLandGoal(MoveToLandGoal const&);
    MoveToLandGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToLandGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock();

    MCAPI MoveToLandGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius
    );

    // NOLINTEND
};
