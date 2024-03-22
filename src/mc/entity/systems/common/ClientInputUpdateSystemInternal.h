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

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 6, symbol:
    // ?tick@ClientInputUpdateSystemInternal@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UPlayerInputRequestComponent@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UMovementAttributesComponent@@V?$FlagComponent@UCanStandOnSnowFlag@@@@UDimensionTypeComponent@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UImmuneToLavaDragFlag@@@@UMobEffectsComponent@@USneakingComponent@@UStateVectorComponent@@USubBBsComponent@@V?$FlagComponent@UInWaterFlag@@@@@@U?$Write@VActorOwnerComponent@@UClientInputLockComponent@@UMoveInputComponent@@URawMoveInputComponent@@UActorDataFlagComponent@@UActorDataDirtyFlagsComponent@@UVanillaClientGameplayComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
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
                          struct AABBShapeComponent,
                          struct MovementAbilitiesComponent,
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct PassengerComponent,
                          struct ActorGameTypeComponent,
                          struct ActorDataFlagComponent,
                          struct VehicleComponent,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent,
                          struct MovementAttributesComponent,
                          class FlagComponent<struct CanStandOnSnowFlag>,
                          struct DimensionTypeComponent,
                          class FlagComponent<struct HasLightweightFamilyFlag>,
                          class FlagComponent<struct ImmuneToLavaDragFlag>,
                          struct MobEffectsComponent,
                          struct SneakingComponent,
                          struct StateVectorComponent,
                          struct SubBBsComponent,
                          class FlagComponent<struct InWaterFlag>>,
                      struct Write<
                          class ActorOwnerComponent,
                          struct ClientInputLockComponent,
                          struct MoveInputComponent,
                          struct RawMoveInputComponent,
                          struct ActorDataFlagComponent,
                          struct ActorDataDirtyFlagsComponent,
                          struct VanillaClientGameplayComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // NOLINTEND
};
