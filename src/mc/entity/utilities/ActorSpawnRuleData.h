#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSpawnRuleData {
public:
    // prevent constructor by default
    ActorSpawnRuleData& operator=(ActorSpawnRuleData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActorSpawnRuleData@@QEAA@XZ
    MCAPI ActorSpawnRuleData();

    // symbol: ??0ActorSpawnRuleData@@QEAA@$$QEAU0@@Z
    MCAPI ActorSpawnRuleData(struct ActorSpawnRuleData&&);

    // symbol: ??0ActorSpawnRuleData@@QEAA@AEBU0@@Z
    MCAPI ActorSpawnRuleData(struct ActorSpawnRuleData const&);

    // symbol: ??4ActorSpawnRuleData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ActorSpawnRuleData& operator=(struct ActorSpawnRuleData&&);

    // symbol: ??1ActorSpawnRuleData@@QEAA@XZ
    MCAPI ~ActorSpawnRuleData();

    // NOLINTEND
};
