/**
 * @file  PlayerPostTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace PlayerPostTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?createCommonPostTravelSystem\@PlayerPostTravelSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createCommonPostTravelSystem();
    /**
     * @symbol ?createServerSystem\@PlayerPostTravelSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createServerSystem();
    /**
     * @symbol ?doServerPlayerPostTravel\@PlayerPostTravelSystem\@\@YAXAEBUSynchedActorDataComponent\@\@AEBUElytraFlightTimeTicksComponent\@\@AEBUStateVectorComponent\@\@AEAVActorOwnerComponent\@\@AEBUCurrentTickComponent\@\@\@Z
     */
    MCAPI void doServerPlayerPostTravel(struct SynchedActorDataComponent const &, struct ElytraFlightTimeTicksComponent const &, struct StateVectorComponent const &, class ActorOwnerComponent &, struct CurrentTickComponent const &);

};