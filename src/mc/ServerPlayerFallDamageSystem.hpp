/**
 * @file  ServerPlayerFallDamageSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerFallDamageSystem.
 *
 */
class ServerPlayerFallDamageSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERFALLDAMAGESYSTEM
public:
    class ServerPlayerFallDamageSystem& operator=(class ServerPlayerFallDamageSystem const &) = delete;
    ServerPlayerFallDamageSystem(class ServerPlayerFallDamageSystem const &) = delete;
    ServerPlayerFallDamageSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_doServerPlayerFallDamageSystem\@ServerPlayerFallDamageSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAbilitiesComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UHasTeleportedFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UHasTeleportedFlag\@\@\@\@V?$FlagComponent\@USendPlayerOnGroundRequestFlag\@\@\@\@UCheckFallDamageRequestComponent\@\@V?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _doServerPlayerFallDamageSystem(class StrictEntityContext const &, struct AbilitiesComponent const &, struct SynchedActorDataComponent const &, struct StateVectorComponent const &, struct FallDistanceComponent &, class Optional<class FlagComponent<struct WasOnGroundFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct HasTeleportedFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct HasTeleportedFlag>, class FlagComponent<struct SendPlayerOnGroundRequestFlag>, struct CheckFallDamageRequestComponent, class FlagComponent<struct WasOnGroundFlag>>);
    /**
     * @symbol  ?createSystem\@ServerPlayerFallDamageSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};