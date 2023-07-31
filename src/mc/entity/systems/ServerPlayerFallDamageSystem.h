#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class ServerPlayerFallDamageSystem {

public:
    // prevent constructor by default
    ServerPlayerFallDamageSystem& operator=(ServerPlayerFallDamageSystem const&) = delete;
    ServerPlayerFallDamageSystem(ServerPlayerFallDamageSystem const&)            = delete;
    ServerPlayerFallDamageSystem()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doServerPlayerFallDamageSystem\@ServerPlayerFallDamageSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAbilitiesComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UHasTeleportedFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UHasTeleportedFlag\@\@\@\@V?$FlagComponent\@USendPlayerOnGroundRequestFlag\@\@\@\@UCheckFallDamageRequestComponent\@\@V?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _doServerPlayerFallDamageSystem(class StrictEntityContext const&, struct AbilitiesComponent const&, struct SynchedActorDataComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&, class Optional<class FlagComponent<struct WasOnGroundFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct HasTeleportedFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct HasTeleportedFlag>, class FlagComponent<struct SendPlayerOnGroundRequestFlag>, struct CheckFallDamageRequestComponent, class FlagComponent<struct WasOnGroundFlag>>);
    /**
     * @symbol ?createSystem\@ServerPlayerFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
