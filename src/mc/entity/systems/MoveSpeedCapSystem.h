#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class MoveSpeedCapSystem {

public:
    // prevent constructor by default
    MoveSpeedCapSystem& operator=(MoveSpeedCapSystem const&) = delete;
    MoveSpeedCapSystem(MoveSpeedCapSystem const&)            = delete;
    MoveSpeedCapSystem()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?create\@MoveSpeedCapSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@MoveSpeedCapSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UMoveRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsImmobileFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUAttributesComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsKnockedBackOnDeathFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@U?$Include\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MoveRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct HorseFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>);
    // NOLINTEND
};
