#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnConsumeTriggerItemComponentData {
public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponentData& operator=(LegacyOnConsumeTriggerItemComponentData const&);
    LegacyOnConsumeTriggerItemComponentData(LegacyOnConsumeTriggerItemComponentData const&);
    LegacyOnConsumeTriggerItemComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~LegacyOnConsumeTriggerItemComponentData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
