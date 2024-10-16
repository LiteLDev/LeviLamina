#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

class DragonBaseGoalDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    DragonBaseGoalDefinition& operator=(DragonBaseGoalDefinition const&);
    DragonBaseGoalDefinition(DragonBaseGoalDefinition const&);
    DragonBaseGoalDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonBaseGoalDefinition() = default;

    // vIndex: 1
    virtual bool validateMobType(class Mob& mob) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool validateMobType$(class Mob& mob) const;

    // NOLINTEND
};
