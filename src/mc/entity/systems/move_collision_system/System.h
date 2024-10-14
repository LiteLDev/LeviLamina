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

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct CollidableMobFlag;
struct CollidableMobNearFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FallingBlockFlag;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MaxAutoStepComponent;
struct MobBodyRotationComponent;
struct MobFlag;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MoveCollisionSystem {

struct System {
public:
    // System inner types declare
    // clang-format off
    class SpatialQueries;
    // clang-format on

    // System inner types define
    class SpatialQueries {
    public:
        // prevent constructor by default
        SpatialQueries& operator=(SpatialQueries const&);
        SpatialQueries(SpatialQueries const&);
        SpatialQueries();

    public:
        // NOLINTBEGIN
        MCAPI ~SpatialQueries();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    System& operator=(System const&);
    System(System const&);
    System();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~System() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

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
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct CollidableMobFlag>,
                          class FlagComponent<struct FallingBlockFlag>>,
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
                          struct DimensionTypeComponent,
                          struct MaxAutoStepComponent,
                          class FlagComponent<struct CollidableMobNearFlag>>,
                      struct Write<struct MoveRequestComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<
                          struct ExternalDataComponent,
                          struct LocalConstBlockSourceFactoryComponent,
                          struct LocalSpatialEntityFetcherFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct CanStandOnSnowFlag>,
                class FlagComponent<struct HasLightweightFamilyFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct MobFlag>,
                class FlagComponent<struct ParrotFlag>,
                struct VehicleComponent,
                class FlagComponent<struct CamelFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct CollidableMobFlag>,
                class FlagComponent<struct FallingBlockFlag>>,
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
                struct DimensionTypeComponent,
                struct MaxAutoStepComponent,
                class FlagComponent<struct CollidableMobNearFlag>>,
            struct Write<struct MoveRequestComponent>,
            struct AddRemove<>,
            struct GlobalRead<
                struct ExternalDataComponent,
                struct LocalConstBlockSourceFactoryComponent,
                struct LocalSpatialEntityFetcherFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI static auto createViews(class StrictExecutionContext<
                                  struct Filter<
                                      class FlagComponent<struct CanStandOnSnowFlag>,
                                      class FlagComponent<struct HasLightweightFamilyFlag>,
                                      class FlagComponent<struct HorseFlag>,
                                      class FlagComponent<struct MobFlag>,
                                      class FlagComponent<struct ParrotFlag>,
                                      struct VehicleComponent,
                                      class FlagComponent<struct CamelFlag>,
                                      class FlagComponent<struct PlayerComponentFlag>,
                                      class FlagComponent<struct CollidableMobFlag>,
                                      class FlagComponent<struct FallingBlockFlag>>,
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
                                      struct DimensionTypeComponent,
                                      struct MaxAutoStepComponent,
                                      class FlagComponent<struct CollidableMobNearFlag>>,
                                  struct Write<struct MoveRequestComponent>,
                                  struct AddRemove<>,
                                  struct GlobalRead<
                                      struct ExternalDataComponent,
                                      struct LocalConstBlockSourceFactoryComponent,
                                      struct LocalSpatialEntityFetcherFactoryComponent>,
                                  struct GlobalWrite<>,
                                  struct EntityFactoryT<>>&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct CanStandOnSnowFlag>,
                class FlagComponent<struct HasLightweightFamilyFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct MobFlag>,
                class FlagComponent<struct ParrotFlag>,
                struct VehicleComponent,
                class FlagComponent<struct CamelFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct CollidableMobFlag>,
                class FlagComponent<struct FallingBlockFlag>>,
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
                struct DimensionTypeComponent,
                struct MaxAutoStepComponent,
                class FlagComponent<struct CollidableMobNearFlag>>,
            struct Write<struct MoveRequestComponent>,
            struct AddRemove<>,
            struct GlobalRead<
                struct ExternalDataComponent,
                struct LocalConstBlockSourceFactoryComponent,
                struct LocalSpatialEntityFetcherFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

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
                         class FlagComponent<struct CollidableMobFlag>,
                         class FlagComponent<struct FallingBlockFlag>>,
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
                         struct DimensionTypeComponent,
                         struct MaxAutoStepComponent,
                         class FlagComponent<struct CollidableMobNearFlag>>,
                     struct Write<struct MoveRequestComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<
                         struct ExternalDataComponent,
                         struct LocalConstBlockSourceFactoryComponent,
                         struct LocalSpatialEntityFetcherFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};

}; // namespace MoveCollisionSystem
