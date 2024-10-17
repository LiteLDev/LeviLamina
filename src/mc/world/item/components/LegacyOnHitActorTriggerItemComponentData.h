#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHitActorTriggerItemComponentData {
public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponentData& operator=(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~LegacyOnHitActorTriggerItemComponentData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
