#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToVillageGoal.h"

class StrollTowardsVillageGoal : public ::MoveToVillageGoal {
public:
    // prevent constructor by default
    StrollTowardsVillageGoal& operator=(StrollTowardsVillageGoal const&);
    StrollTowardsVillageGoal(StrollTowardsVillageGoal const&);
    StrollTowardsVillageGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StrollTowardsVillageGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 17
    virtual class BlockPos _selectRandomPosInVillage();

    MCAPI StrollTowardsVillageGoal(
        class Mob& mob,
        float      speedModifier,
        float      goalRadius,
        float      cooldown,
        int        searchRange,
        float      startChance
    );

    // NOLINTEND
};
