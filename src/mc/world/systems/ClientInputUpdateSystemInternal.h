#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct ClientInputUpdateSystemInternal {
public:
    // prevent constructor by default
    ClientInputUpdateSystemInternal& operator=(ClientInputUpdateSystemInternal const&);
    ClientInputUpdateSystemInternal(ClientInputUpdateSystemInternal const&);
    ClientInputUpdateSystemInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClientInputUpdateSystemInternal@@UEAA@XZ
    virtual ~ClientInputUpdateSystemInternal() = default;

    // symbol:
    // ?tick@ClientInputUpdateSystemInternal@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UPlayerInputRequestComponent@@@@U?$Read@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@USynchedActorDataComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UAABBShapeComponent@@UAbilitiesComponent@@UActorRotationComponent@@UAttributesComponent@@V?$FlagComponent@UCanStandOnSnowFlag@@@@UDimensionTypeComponent@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UImmuneToLavaDragFlag@@@@UMobEffectsComponent@@UPassengerComponent@@USneakingComponent@@UStateVectorComponent@@USubBBsComponent@@V?$FlagComponent@UInWaterFlag@@@@@@U?$Write@VActorOwnerComponent@@UClientInputLockComponent@@UMoveInputComponent@@URawMoveInputComponent@@USynchedActorDataComponent@@UVanillaClientGameplayComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    MCVAPI void tick(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct CanStandOnSnowFlag>,
                         class FlagComponent<struct HasLightweightFamilyFlag>,
                         class FlagComponent<struct HorseFlag>,
                         class FlagComponent<struct MobFlag>,
                         class FlagComponent<struct ParrotFlag>,
                         struct VehicleComponent,
                         class FlagComponent<struct CamelFlag>,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct LocalPlayerComponentFlag>,
                         struct PlayerInputRequestComponent>,
                     struct Read<
                         struct ActorTypeComponent,
                         struct FallDistanceComponent,
                         struct ActorGameTypeComponent,
                         struct VehicleComponent,
                         struct MobBodyRotationComponent,
                         struct RenderRotationComponent,
                         struct StandAnimationComponent,
                         struct SynchedActorDataComponent,
                         struct OffsetsComponent,
                         struct VanillaOffsetComponent,
                         struct PassengerRenderingRidingOffsetComponent,
                         struct AABBShapeComponent,
                         struct AbilitiesComponent,
                         struct ActorRotationComponent,
                         struct AttributesComponent,
                         class FlagComponent<struct CanStandOnSnowFlag>,
                         struct DimensionTypeComponent,
                         class FlagComponent<struct HasLightweightFamilyFlag>,
                         class FlagComponent<struct ImmuneToLavaDragFlag>,
                         struct MobEffectsComponent,
                         struct PassengerComponent,
                         struct SneakingComponent,
                         struct StateVectorComponent,
                         struct SubBBsComponent,
                         class FlagComponent<struct InWaterFlag>>,
                     struct Write<
                         class ActorOwnerComponent,
                         struct ClientInputLockComponent,
                         struct MoveInputComponent,
                         struct RawMoveInputComponent,
                         struct SynchedActorDataComponent,
                         struct VanillaClientGameplayComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>&);

    // NOLINTEND
};
