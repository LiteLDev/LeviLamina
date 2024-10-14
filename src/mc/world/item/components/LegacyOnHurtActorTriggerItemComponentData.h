#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHurtActorTriggerItemComponentData {
public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponentData& operator=(LegacyOnHurtActorTriggerItemComponentData const&);
    LegacyOnHurtActorTriggerItemComponentData(LegacyOnHurtActorTriggerItemComponentData const&);
    LegacyOnHurtActorTriggerItemComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~LegacyOnHurtActorTriggerItemComponentData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
