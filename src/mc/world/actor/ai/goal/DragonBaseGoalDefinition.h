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
    // vIndex: 0, symbol: __gen_??1DragonBaseGoalDefinition@@UEAA@XZ
    virtual ~DragonBaseGoalDefinition() = default;

    // vIndex: 1, symbol: ?validateMobType@DragonBaseGoalDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validateMobType(class Mob& mob) const;

    // NOLINTEND
};
