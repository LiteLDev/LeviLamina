#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

struct ClientInputUpdateSystemInternal {
public:
    // prevent constructor by default
    ClientInputUpdateSystemInternal& operator=(ClientInputUpdateSystemInternal const&);
    ClientInputUpdateSystemInternal(ClientInputUpdateSystemInternal const&);
    ClientInputUpdateSystemInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInputUpdateSystemInternal() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 6
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
                          struct DimensionTypeComponent,
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
                      struct EntityFactoryT<>>& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(class EntityRegistry& registry, class EntityContext& entity);

    MCAPI void tick$(class StrictExecutionContext<
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
                         struct DimensionTypeComponent,
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
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};
