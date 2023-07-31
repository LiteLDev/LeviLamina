#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class ClientInputUpdateSystem {

public:
    // prevent constructor by default
    ClientInputUpdateSystem& operator=(ClientInputUpdateSystem const&) = delete;
    ClientInputUpdateSystem(ClientInputUpdateSystem const&)            = delete;
    ClientInputUpdateSystem()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_calculateLookDelta\@ClientInputUpdateSystem\@\@SA?AVVec2\@\@EM\@Z
     */
    MCAPI static class Vec2 _calculateLookDelta(unsigned char, float);
    /**
     * @symbol ?create\@ClientInputUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@ClientInputUpdateSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@UPlayerInputRequestComponent\@\@\@\@VActorMovementProxyComponent\@\@UMoveInputComponent\@\@URawMoveInputComponent\@\@UClientInputLockComponent\@\@USynchedActorDataComponent\@\@$$CBUAbilitiesComponent\@\@UVanillaClientGameplayComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBUSneakingComponent\@\@\@\@\@\@V?$OptionalGlobalT\@$$CBUExternalDataComponent\@\@VEntityRegistryBase\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldStopEmotingRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, struct PlayerInputRequestComponent>, class ActorMovementProxyComponent, struct MoveInputComponent, struct RawMoveInputComponent, struct ClientInputLockComponent, struct SynchedActorDataComponent, struct AbilitiesComponent const, struct VanillaClientGameplayComponent, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct SneakingComponent const>>, class OptionalGlobalT<struct ExternalDataComponent const, class EntityRegistryBase>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldStopEmotingRequestComponent>);
    /**
     * @symbol ?tickBaseInput\@ClientInputUpdateSystem\@\@SAXAEAUMoveInputComponent\@\@AEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void tickBaseInput(struct MoveInputComponent&, struct IPlayerMovementProxy&);
    /**
     * @symbol
     * ?updateClientInput\@ClientInputUpdateSystem\@\@SAXAEAUIPlayerMovementProxy\@\@AEBURawMoveInputComponent\@\@AEBUClientInputLockComponent\@\@AEAUIClientInstanceProxy\@\@AEAUMoveInputComponent\@\@M\@Z
     */
    MCAPI static void updateClientInput(
        struct IPlayerMovementProxy&,
        struct RawMoveInputComponent const&,
        struct ClientInputLockComponent const&,
        struct IClientInstanceProxy&,
        struct MoveInputComponent&,
        float
    );
    // NOLINTEND
};
