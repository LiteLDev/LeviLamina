#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class DropItemForGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    DropItemForGoal& operator=(DropItemForGoal const&);
    DropItemForGoal(DropItemForGoal const&);
    DropItemForGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropItemForGoal() = default;

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

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 17
    virtual bool findTargetBlock();

    MCAPI explicit DropItemForGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class LootTable* _getLootTable();

    // NOLINTEND
};
