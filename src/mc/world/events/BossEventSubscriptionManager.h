#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BossEventSubscriptionManager {

public:
    // prevent constructor by default
    BossEventSubscriptionManager& operator=(BossEventSubscriptionManager const&) = delete;
    BossEventSubscriptionManager(BossEventSubscriptionManager const&)            = delete;
    BossEventSubscriptionManager()                                               = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTSUBSCRIPTIONMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BossEventSubscriptionManager();
#endif
    // NOLINTEND
};
