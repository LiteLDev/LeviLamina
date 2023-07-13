/**
 * @file  DirectAgentMobMovementProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct DirectAgentMobMovementProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTAGENTMOBMOVEMENTPROXY
public:
    struct DirectAgentMobMovementProxy& operator=(struct DirectAgentMobMovementProxy const &) = delete;
    DirectAgentMobMovementProxy(struct DirectAgentMobMovementProxy const &) = delete;
    DirectAgentMobMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTAGENTMOBMOVEMENTPROXY
    /**
     * @symbol ?isFlying\@DirectAgentMobMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
#endif

};