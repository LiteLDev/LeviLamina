#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/components/ActorFlagComponent.h"
#include "mc/world/components/FlagComponent.h"

class RaidTriggerSystem {

public:
    // prevent constructor by default
    RaidTriggerSystem& operator=(RaidTriggerSystem const&) = delete;
    RaidTriggerSystem(RaidTriggerSystem const&)            = delete;
    RaidTriggerSystem()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@RaidTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doRaidTriggerSystem\@RaidTriggerSystem\@\@CAXAEBUDimensionTypeComponent\@\@AEBUStateVectorComponent\@\@AEAVActorOwnerComponent\@\@AEBUVillageManagerComponent\@\@\@Z
     */
    MCAPI static void
    _doRaidTriggerSystem(struct DimensionTypeComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct VillageManagerComponent const&);
    /**
     * @symbol
     * ?_tickRaidTriggerSystem\@RaidTriggerSystem\@\@CAXV?$OptionalGlobalT\@$$CBUVillageManagerComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UActorTickedFlag\@\@\@\@$$CBV?$ActorFlagComponent\@URaidTriggerFlag\@\@\@\@\@\@$$CBUDimensionTypeComponent\@\@$$CBUStateVectorComponent\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _tickRaidTriggerSystem(class OptionalGlobalT<struct VillageManagerComponent const, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorTickedFlag> const, class ActorFlagComponent<struct RaidTriggerFlag> const>, struct DimensionTypeComponent const, struct StateVectorComponent const, class ActorOwnerComponent>);
    // NOLINTEND
};
