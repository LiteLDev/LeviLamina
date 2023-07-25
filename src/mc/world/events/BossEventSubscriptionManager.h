#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BossEventSubscriptionManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSEVENTSUBSCRIPTIONMANAGER
public:
    BossEventSubscriptionManager& operator=(BossEventSubscriptionManager const&) = delete;
    BossEventSubscriptionManager(BossEventSubscriptionManager const&)            = delete;
    BossEventSubscriptionManager()                                               = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTSUBSCRIPTIONMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BossEventSubscriptionManager();
#endif
};
