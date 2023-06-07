/**
 * @file  ClientInputUpdateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientInputUpdateSystem.
 *
 */
class ClientInputUpdateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTINPUTUPDATESYSTEM
public:
    class ClientInputUpdateSystem& operator=(class ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem(class ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem() = delete;
#endif

public:
    /**
     * @symbol ?_calculateLookDelta\@ClientInputUpdateSystem\@\@SA?AVVec2\@\@EM\@Z
     */
    MCAPI static class Vec2 _calculateLookDelta(unsigned char, float);
    /**
     * @symbol ?create\@ClientInputUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?tick\@ClientInputUpdateSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@UPlayerInputRequestComponent\@\@\@\@VActorMovementProxyComponent\@\@UMoveInputComponent\@\@URawMoveInputComponent\@\@UClientInputLockComponent\@\@USynchedActorDataComponent\@\@$$CBUAbilitiesComponent\@\@UVanillaClientGameplayComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBUSneakingComponent\@\@\@\@\@\@V?$OptionalGlobalT\@$$CBUExternalDataComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldStopEmotingRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, struct PlayerInputRequestComponent>, class ActorMovementProxyComponent, struct MoveInputComponent, struct RawMoveInputComponent, struct ClientInputLockComponent, struct SynchedActorDataComponent, struct AbilitiesComponent const, struct VanillaClientGameplayComponent, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct SneakingComponent const>>, class OptionalGlobalT<struct ExternalDataComponent const, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldStopEmotingRequestComponent>);
    /**
     * @symbol ?tickBaseInput\@ClientInputUpdateSystem\@\@SAXAEAUMoveInputComponent\@\@AEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void tickBaseInput(struct MoveInputComponent &, struct IPlayerMovementProxy &);
    /**
     * @symbol ?updateClientInput\@ClientInputUpdateSystem\@\@SAXAEAUIPlayerMovementProxy\@\@AEBURawMoveInputComponent\@\@AEBUClientInputLockComponent\@\@AEAUIClientInstanceProxy\@\@AEAUMoveInputComponent\@\@M\@Z
     */
    MCAPI static void updateClientInput(struct IPlayerMovementProxy &, struct RawMoveInputComponent const &, struct ClientInputLockComponent const &, struct IClientInstanceProxy &, struct MoveInputComponent &, float);

};
