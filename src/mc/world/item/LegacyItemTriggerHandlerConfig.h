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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
