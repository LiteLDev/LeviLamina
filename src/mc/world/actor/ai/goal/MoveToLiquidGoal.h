#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    MoveToLiquidGoal& operator=(MoveToLiquidGoal const&);
    MoveToLiquidGoal(MoveToLiquidGoal const&);
    MoveToLiquidGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToLiquidGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 17
    virtual bool findTargetBlock();

    MCAPI MoveToLiquidGoal(
        class Mob&     mob,
        float          speedModifier,
        int            searchRange,
        int            searchHeight,
        int            searchCount,
        ::MaterialType materialType,
        float          goalRadius
    );

    // NOLINTEND
};
