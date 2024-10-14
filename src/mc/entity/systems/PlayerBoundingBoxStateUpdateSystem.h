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

class PlayerBoundingBoxStateUpdateSystem {
public:
    // prevent constructor by default
    PlayerBoundingBoxStateUpdateSystem& operator=(PlayerBoundingBoxStateUpdateSystem const&);
    PlayerBoundingBoxStateUpdateSystem(PlayerBoundingBoxStateUpdateSystem const&);
    PlayerBoundingBoxStateUpdateSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerBoundingBoxStateUpdateSystem() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct CanStandOnSnowFlag>,
                          class FlagComponent<struct HasLightweightFamilyFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>>,
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
                          struct DimensionTypeComponent>,
                      struct Write<struct PlayerInputRequestComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& strictContext);

    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickPlayerBoundingBoxStateUpdateSystem(
        class StrictEntityContext const&    context,
        struct AABBShapeComponent const&    aabb,
        struct PlayerInputRequestComponent& request,
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct CanStandOnSnowFlag>,
                class FlagComponent<struct HasLightweightFamilyFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct MobFlag>,
                class FlagComponent<struct ParrotFlag>,
                struct VehicleComponent,
                class FlagComponent<struct CamelFlag>,
                class FlagComponent<struct PlayerComponentFlag>>,
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
                struct DimensionTypeComponent>,
            struct Write<struct PlayerInputRequestComponent>,
            struct AddRemove<>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>&        executionContext,
        float                                sneakHeight,
        struct GetAttachPositionViews const& views,
        class IConstBlockSource const&       region
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct CanStandOnSnowFlag>,
                         class FlagComponent<struct HasLightweightFamilyFlag>,
                         class FlagComponent<struct HorseFlag>,
                         class FlagComponent<struct MobFlag>,
                         class FlagComponent<struct ParrotFlag>,
                         struct VehicleComponent,
                         class FlagComponent<struct CamelFlag>,
                         class FlagComponent<struct PlayerComponentFlag>>,
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
                         struct DimensionTypeComponent>,
                     struct Write<struct PlayerInputRequestComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& strictContext);

    // NOLINTEND
};
