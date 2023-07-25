#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirectAgentMobMovementProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTAGENTMOBMOVEMENTPROXY
public:
    DirectAgentMobMovementProxy& operator=(DirectAgentMobMovementProxy const&) = delete;
    DirectAgentMobMovementProxy(DirectAgentMobMovementProxy const&)            = delete;
    DirectAgentMobMovementProxy()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTAGENTMOBMOVEMENTPROXY
    /**
     * @symbol ?isFlying\@DirectAgentMobMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
#endif
};
