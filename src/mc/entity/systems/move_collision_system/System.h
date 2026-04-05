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
#include "mc/entity/components/LocalConstBlockSource.h"
#include "mc/entity/components/LocalSpatialEntityFetcher.h"

// auto generated forward declare list
// clang-format off
class AABB;
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
namespace BlockSourceVisitor { struct CollisionShape; }
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
    struct SpatialQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 280, ::LocalSpatialEntityFetcher> mFetcher;
        ::ll::TypedStorage<8, 280, ::LocalConstBlockSource>     mBlockSource;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SpatialQueries();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SpatialQueryFactories {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::LocalConstBlockSourceFactoryComponent*>     mBlockSourceFactory;
        ::ll::TypedStorage<8, 8, ::LocalSpatialEntityFetcherFactoryComponent*> mFetcherFactory;
        // NOLINTEND
    };

    using CollisionShapeVec = ::std::vector<::BlockSourceVisitor::CollisionShape>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes2;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                               mScratchTempShapes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
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

    virtual ~System() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::MoveCollisionSystem::System::SpatialQueryFactories> createSpatialQueryFactories(
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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

    MCAPI void $singleTick(
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
