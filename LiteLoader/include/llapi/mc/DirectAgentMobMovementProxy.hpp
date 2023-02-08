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
     * @symbol  ?getSlideOffset\@DirectAgentMobMovementProxy\@\@UEBA?AVVec2\@\@XZ
     */
    MCVAPI class Vec2 getSlideOffset() const;
    /**
     * @symbol  ?isFlying\@DirectAgentMobMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
    /**
     * @symbol  ?setIsFlying\@DirectAgentMobMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setIsFlying(bool);
    /**
     * @symbol  ?setSlideOffset\@DirectAgentMobMovementProxy\@\@UEAAXAEBVVec2\@\@\@Z
     */
    MCVAPI void setSlideOffset(class Vec2 const &);
#endif

};