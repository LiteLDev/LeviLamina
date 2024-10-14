#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnUseTriggerItemComponentData {
public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponentData& operator=(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~LegacyOnUseTriggerItemComponentData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
