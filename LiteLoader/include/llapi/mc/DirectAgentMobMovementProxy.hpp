/**
 * @file  DirectAgentMobMovementProxy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectAgentMobMovementProxy.
 *
 */
class DirectAgentMobMovementProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTAGENTMOBMOVEMENTPROXY
public:
    class DirectAgentMobMovementProxy& operator=(class DirectAgentMobMovementProxy const &) = delete;
    DirectAgentMobMovementProxy(class DirectAgentMobMovementProxy const &) = delete;
    DirectAgentMobMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTAGENTMOBMOVEMENTPROXY
    /**
     * @symbol ?getSlideOffset@DirectAgentMobMovementProxy@@UEBA?AVVec2@@XZ
     * @hash   801293972
     */
    MCVAPI class Vec2 getSlideOffset() const;
    /**
     * @symbol ?isFlying@DirectAgentMobMovementProxy@@UEBA_NXZ
     * @hash   -270700570
     */
    MCVAPI bool isFlying() const;
    /**
     * @symbol ?setIsFlying@DirectAgentMobMovementProxy@@UEAAX_N@Z
     * @hash   772092501
     */
    MCVAPI void setIsFlying(bool);
    /**
     * @symbol ?setSlideOffset@DirectAgentMobMovementProxy@@UEAAXAEBVVec2@@@Z
     * @hash   -2132136347
     */
    MCVAPI void setSlideOffset(class Vec2 const &);
#endif

};