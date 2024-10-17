#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSpawnRuleData {
public:
    // prevent constructor by default
    ActorSpawnRuleData& operator=(ActorSpawnRuleData const&);

public:
    // NOLINTBEGIN
    MCAPI ActorSpawnRuleData();

    MCAPI ActorSpawnRuleData(struct ActorSpawnRuleData&&);

    MCAPI ActorSpawnRuleData(struct ActorSpawnRuleData const&);

    MCAPI struct ActorSpawnRuleData& operator=(struct ActorSpawnRuleData&&);

    MCAPI ~ActorSpawnRuleData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ActorSpawnRuleData const&);

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ActorSpawnRuleData&&);

    MCAPI void dtor$();

    // NOLINTEND
};
