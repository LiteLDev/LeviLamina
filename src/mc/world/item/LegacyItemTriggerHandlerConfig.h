#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyItemTriggerHandlerConfig {
public:
    // prevent constructor by default
    LegacyItemTriggerHandlerConfig& operator=(LegacyItemTriggerHandlerConfig const&);

public:
    // NOLINTBEGIN
    MCAPI LegacyItemTriggerHandlerConfig();

    MCAPI LegacyItemTriggerHandlerConfig(struct LegacyItemTriggerHandlerConfig const&);

    MCAPI ~LegacyItemTriggerHandlerConfig();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct LegacyItemTriggerHandlerConfig const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
