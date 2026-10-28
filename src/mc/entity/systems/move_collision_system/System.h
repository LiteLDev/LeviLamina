#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/LocalConstBlockSource.h"
#include "mc/entity/components/LocalSpatialEntityFetcher.h"
#include "mc/entity/utilities/GetCollisionShapeViews.h"

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
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct CollidableMobFlagComponent;
struct CollidableMobNearFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FallingBlockFlagComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MaxAutoStepComponent;
struct MinecartFlagComponent;
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
                        ::CanStandOnPowderSnowComponent,
                        ::CanStandOnPowderSnowFromEquipmentComponent,
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
                        ::CollidableMobNearFlagComponent,
                        ::MinecartFlagComponent>,
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
    struct Views;
    // clang-format on

    // System inner types define
    struct SpatialQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 392, ::LocalSpatialEntityFetcher> mFetcher;
        ::ll::TypedStorage<8, 392, ::LocalConstBlockSource>     mBlockSource;
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

    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            72,
            ::ViewT<
                ::StrictEntityContext,
                ::DimensionTypeComponent const,
                ::AABBShapeComponent const,
                ::MaxAutoStepComponent const,
                ::Optional<::CollidableMobNearFlagComponent const>,
                ::MoveRequestComponent,
                ::Optional<::MinecartFlagComponent const>>>
            mMainView;
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<::StrictEntityContext, ::Include<::CollidableMobFlagComponent>, ::AABBShapeComponent const>>
            mCollidableMobs;
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<::StrictEntityContext, ::AABBShapeComponent const, ::ActorDataFlagComponent const>>
            mStackable;
        ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::FallingBlockFlagComponent>>>
                                                                                                mFallingBlocks;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent>>     mBlockSourceFactory;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent>> mFetcherFactory;
        ::ll::TypedStorage<8, 728, ::GetCollisionShapeViews>                                    mCollisionViews;
        // NOLINTEND

    public:
        // prevent constructor by default
        Views();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Views(
            ::StrictExecutionContext<
                ::Filter<
                    ::CanStandOnPowderSnowComponent,
                    ::CanStandOnPowderSnowFromEquipmentComponent,
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
                    ::CollidableMobNearFlagComponent,
                    ::MinecartFlagComponent>,
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
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::StrictExecutionContext<
                ::Filter<
                    ::CanStandOnPowderSnowComponent,
                    ::CanStandOnPowderSnowFromEquipmentComponent,
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
                    ::CollidableMobNearFlagComponent,
                    ::MinecartFlagComponent>,
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
    };

    using CollisionShapeVec = ::std::vector<::BlockSourceVisitor::CollisionShape>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceVisitor::CollisionShape>>    mScratchTempCollisionShapes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceVisitor::CollisionShape>>    mScratchTempCollisionShapes2;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                                  mScratchTempShapes;
    ::ll::TypedStorage<8, 960, ::std::optional<::MoveCollisionSystem::System::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnPowderSnowComponent,
                ::CanStandOnPowderSnowFromEquipmentComponent,
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
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
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
                ::CanStandOnPowderSnowComponent,
                ::CanStandOnPowderSnowFromEquipmentComponent,
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
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnPowderSnowComponent,
                ::CanStandOnPowderSnowFromEquipmentComponent,
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
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
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
                ::CanStandOnPowderSnowComponent,
                ::CanStandOnPowderSnowFromEquipmentComponent,
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
                ::CollidableMobNearFlagComponent,
                ::MinecartFlagComponent>,
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
