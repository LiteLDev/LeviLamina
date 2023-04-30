/**
 * @file  LiquidSplashSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidSplashSystem.
 *
 */
class LiquidSplashSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDSPLASHSYSTEM
public:
    class LiquidSplashSystem& operator=(class LiquidSplashSystem const &) = delete;
    LiquidSplashSystem(class LiquidSplashSystem const &) = delete;
    LiquidSplashSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@LiquidSplashSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tickLiquidSplash\@LiquidSplashSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UWaterSplashEffectRequestFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPostSplashGameEventRequestFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickLiquidSplash(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct WaterSplashEffectRequestFlag>>, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>, class ActorOwnerComponent>);

private:

};
