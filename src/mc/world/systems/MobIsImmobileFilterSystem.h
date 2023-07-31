#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MobIsImmobileFilterSystem {

public:
    // prevent constructor by default
    MobIsImmobileFilterSystem& operator=(MobIsImmobileFilterSystem const&) = delete;
    MobIsImmobileFilterSystem(MobIsImmobileFilterSystem const&)            = delete;
    MobIsImmobileFilterSystem()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@MobIsImmobileFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?tickImmobileFilter\@MobIsImmobileFilterSystem\@\@CAXU?$type_list\@U?$Include\@$$CBV?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsImmobileFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsKnockedBackOnDeathFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsImmobileFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    tickImmobileFilter(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag> const, class FlagComponent<struct MobFlag> const>>, class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsImmobileFlag>>);
    // NOLINTEND
};
