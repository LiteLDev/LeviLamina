#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BossEventSubscriptionManager {
public:
    // prevent constructor by default
    BossEventSubscriptionManager& operator=(BossEventSubscriptionManager const&);
    BossEventSubscriptionManager(BossEventSubscriptionManager const&);
    BossEventSubscriptionManager();

public:
    // NOLINTBEGIN
    MCVAPI ~BossEventSubscriptionManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
