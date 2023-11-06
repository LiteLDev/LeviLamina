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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DragonBaseGoalDefinition();

    // vIndex: 1, symbol: ?validateMobType@DragonBaseGoalDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validateMobType(class Mob&) const;

    // NOLINTEND
};
