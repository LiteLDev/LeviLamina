/**
 * @file  HorsePostTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class HorsePostTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEPOSTTRAVELSYSTEM
public:
    class HorsePostTravelSystem& operator=(class HorsePostTravelSystem const &) = delete;
    HorsePostTravelSystem(class HorsePostTravelSystem const &) = delete;
    HorsePostTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@HorsePostTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tick\@HorsePostTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasOnGroundPreTravelFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct HorseFlag>>, class Optional<class FlagComponent<struct WasOnGroundPreTravelFlag> const>, class ActorOwnerComponent>);

//private:
    /**
     * @symbol ?_doHorsePostTravelSystem\@HorsePostTravelSystem\@\@CAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasOnGroundPreTravelFlag\@\@\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doHorsePostTravelSystem(class StrictEntityContext const &, class Optional<class FlagComponent<struct WasOnGroundPreTravelFlag> const>, class ActorOwnerComponent &);

private:

};
