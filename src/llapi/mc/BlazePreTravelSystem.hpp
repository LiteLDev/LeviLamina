/**
 * @file  BlazePreTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlazePreTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLAZEPRETRAVELSYSTEM
public:
    class BlazePreTravelSystem& operator=(class BlazePreTravelSystem const &) = delete;
    BlazePreTravelSystem(class BlazePreTravelSystem const &) = delete;
    BlazePreTravelSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@BlazePreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doBlazePreTravelSystem\@BlazePreTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doBlazePreTravelSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};