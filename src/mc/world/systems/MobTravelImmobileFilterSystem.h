#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelImmobileFilterSystem {

public:
    // prevent constructor by default
    MobTravelImmobileFilterSystem& operator=(MobTravelImmobileFilterSystem const&) = delete;
    MobTravelImmobileFilterSystem(MobTravelImmobileFilterSystem const&)            = delete;
    MobTravelImmobileFilterSystem()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?create\@MobTravelImmobileFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@MobTravelImmobileFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UMobTravelComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsImmobileFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsKnockedBackOnDeathFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct MobTravelComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobTravelComponent>);
    // NOLINTEND
};
