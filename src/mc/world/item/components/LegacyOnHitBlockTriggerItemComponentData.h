#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHitBlockTriggerItemComponentData {
public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponentData& operator=(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~LegacyOnHitBlockTriggerItemComponentData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
