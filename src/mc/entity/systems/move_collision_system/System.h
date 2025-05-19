#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct CollidableMobFlagComponent;
struct CollidableMobNearFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FallingBlockFlagComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MaxAutoStepComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MoveCollisionSystem {

struct System : public ::IStrictTickingSystem<::StrictExecutionContext<
                    ::Filter<
                        ::CanStandOnSnowFlagComponent,
                        ::HasLightweightFamilyFlagComponent,
                        ::HorseFlagComponent,
                        ::MobFlagComponent,
                        ::ParrotFlagComponent,
                        ::VehicleComponent,
                        ::CamelFlagComponent,
                        ::PlayerComponent,
                        ::CollidableMobFlagComponent,
                        ::FallingBlockFlagComponent>,
                    ::Read<
                        ::AABBShapeComponent,
                        ::MovementAbilitiesComponent,
                        ::ActorTypeComponent,
                        ::FallDistanceComponent,
                        ::PassengerComponent,
                        ::ActorGameTypeComponent,
                        ::ActorDataFlagComponent,
                        ::VehicleComponent,
                        ::ActorRotationComponent,
                        ::MobBodyRotationComponent,
                        ::RenderRotationComponent,
                        ::StandAnimationComponent,
                        ::OffsetsComponent,
                        ::VanillaOffsetComponent,
                        ::PassengerRenderingRidingOffsetComponent,
                        ::DimensionTypeComponent,
                        ::MaxAutoStepComponent,
                        ::CollidableMobNearFlagComponent>,
                    ::Write<::MoveRequestComponent>,
                    ::AddRemove<>,
                    ::GlobalRead<
                        ::ExternalDataComponent,
                        ::LocalConstBlockSourceFactoryComponent,
                        ::LocalSpatialEntityFetcherFactoryComponent>,
                    ::GlobalWrite<>,
                    ::EntityFactoryT<>>> {
public:
    // System inner types declare
    // clang-format off
    struct SpatialQueries;
    struct SpatialQueryFactories;
    // clang-format on

    // System inner types define
    struct SpatialQueryFactories {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd29fef;
        ::ll::UntypedStorage<8, 8> mUnkb8d19a;
        // NOLINTEND

    public:
        // prevent constructor by default
        SpatialQueryFactories& operator=(SpatialQueryFactories const&);
        SpatialQueryFactories(SpatialQueryFactories const&);
        SpatialQueryFactories();
    };

    struct SpatialQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 288> mUnkc11b11;
        ::ll::UntypedStorage<8, 288> mUnk3c19d0;
        // NOLINTEND

    public:
        // prevent constructor by default
        SpatialQueries& operator=(SpatialQueries const&);
        SpatialQueries(SpatialQueries const&);
        SpatialQueries();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SpatialQueries();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 0
    virtual ~System() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static auto createViews(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::CollidableMobFlagComponent,
                ::FallingBlockFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::DimensionTypeComponent,
                ::MaxAutoStepComponent,
                ::CollidableMobNearFlagComponent>,
            ::Write<::MoveRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<
                ::ExternalDataComponent,
                ::LocalConstBlockSourceFactoryComponent,
                ::LocalSpatialEntityFetcherFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace MoveCollisionSystem
