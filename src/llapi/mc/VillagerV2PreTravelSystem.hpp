/**
 * @file  VillagerV2PreTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VillagerV2PreTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERV2PRETRAVELSYSTEM
public:
    class VillagerV2PreTravelSystem& operator=(class VillagerV2PreTravelSystem const &) = delete;
    VillagerV2PreTravelSystem(class VillagerV2PreTravelSystem const &) = delete;
    VillagerV2PreTravelSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@VillagerV2PreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doVillagerV2PreTravel\@VillagerV2PreTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USkipMobTravelFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _doVillagerV2PreTravel(class StrictEntityContext const &, struct SynchedActorDataComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SkipMobTravelFlag>>);

private:

};