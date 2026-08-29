#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PassengerComponent;
struct RawMoveInputComponent;
struct ShouldStopEmotingRequestComponent;
struct SneakingComponent;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

class ClientInputUpdateSystem {
public:
    // ClientInputUpdateSystem inner types define
    enum class LookDirection : schar {
        Up    = 1,
        Down  = 0,
        Left  = 4,
        Right = 5,
        Count = 4,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void extractRawHIDInput(
        ::MovementAbilitiesComponent const&         abilities,
        ::MoveInputComponent const&                 moveInput,
        ::ActorDataFlagComponent const&             synchedActorData,
        ::RawMoveInputComponent&                    rawMoveInput,
        ::Optional<::SneakingComponent const>       sneaking,
        ::Optional<::WasInWaterFlagComponent const> isInWater
    );

    MCAPI static void inputHandlerUpdatePlayerState(
        ::MovementAbilitiesComponent const&         abilities,
        ::MobEffectsComponent const&                mobEffects,
        ::ActorDataFlagComponent const&             synchedActorData,
        ::ActorOwnerComponent&                      actorOwner,
        ::MoveInputComponent&                       moveInput,
        ::Optional<::PassengerComponent const>      isRiding,
        ::Optional<::WasInWaterFlagComponent const> isInWater
    );

    MCAPI static void updateStopEmotingRequest(
        ::StrictEntityContext const&                           entity,
        ::RawMoveInputComponent const&                         rawMoveInput,
        ::ActorDataFlagComponent&                              actorDataFlag,
        ::ActorDataDirtyFlagsComponent&                        actorDataDirtyFlags,
        ::ClientInputLockComponent&                            clientInputLock,
        ::VanillaClientGameplayComponent&                      vanillaClientGameplay,
        ::EntityModifier<::ShouldStopEmotingRequestComponent>& modifier
    );
    // NOLINTEND
};
