/**
 * @file  LiquidSplashRequestSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidSplashRequestSystem.
 *
 */
class LiquidSplashRequestSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDSPLASHREQUESTSYSTEM
public:
    class LiquidSplashRequestSystem& operator=(class LiquidSplashRequestSystem const &) = delete;
    LiquidSplashRequestSystem(class LiquidSplashRequestSystem const &) = delete;
    LiquidSplashRequestSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@LiquidSplashRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_liquidSplashRequest\@LiquidSplashRequestSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUUpdateWaterStateRequestComponent\@\@V?$Optional\@$$CBUPlayerGameTypeComponent\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInLavaFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UPostSplashGameEventRequestFlag\@\@\@\@V?$FlagComponent\@UWaterSplashEffectRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _liquidSplashRequest(class StrictEntityContext &, struct UpdateWaterStateRequestComponent const &, class Optional<struct PlayerGameTypeComponent const>, class Optional<class FlagComponent<struct InLavaFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct PostSplashGameEventRequestFlag>, class FlagComponent<struct WaterSplashEffectRequestFlag>>);

private:

};