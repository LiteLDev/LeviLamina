/**
 * @file  RaidTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RaidTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERSYSTEM
public:
    class RaidTriggerSystem& operator=(class RaidTriggerSystem const &) = delete;
    RaidTriggerSystem(class RaidTriggerSystem const &) = delete;
    RaidTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@RaidTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doRaidTriggerSystem\@RaidTriggerSystem\@\@CAXAEBUDimensionTypeComponent\@\@AEBUStateVectorComponent\@\@AEAVActorOwnerComponent\@\@AEBUVillageManagerComponent\@\@\@Z
     */
    MCAPI static void _doRaidTriggerSystem(struct DimensionTypeComponent const &, struct StateVectorComponent const &, class ActorOwnerComponent &, struct VillageManagerComponent const &);

private:

};