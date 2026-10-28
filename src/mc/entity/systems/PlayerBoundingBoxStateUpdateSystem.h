#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/GetCollisionShapeViews.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct BaseGameVersionComponent;
struct CamelFlagComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct PlayerInputRequestComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

class PlayerBoundingBoxStateUpdateSystem
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::CanStandOnPowderSnowComponent,
          ::CanStandOnPowderSnowFromEquipmentComponent,
          ::HorseFlagComponent,
          ::MobFlagComponent,
          ::ParrotFlagComponent,
          ::VehicleComponent,
          ::CamelFlagComponent,
          ::PlayerComponent>,
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
          ::DimensionTypeComponent>,
      ::Write<::PlayerInputRequestComponent>,
      ::AddRemove<>,
      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // PlayerBoundingBoxStateUpdateSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // PlayerBoundingBoxStateUpdateSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<::StrictEntityContext, ::AABBShapeComponent const, ::PlayerInputRequestComponent>>
                                                                                     mView;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::BaseGameVersionComponent const>> mVersion;
        ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs>                     mBlockSource;
        ::ll::TypedStorage<8, 728, ::GetCollisionShapeViews>                         mCollisionViews;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::CanStandOnPowderSnowComponent,
            ::CanStandOnPowderSnowFromEquipmentComponent,
            ::HorseFlagComponent,
            ::MobFlagComponent,
            ::ParrotFlagComponent,
            ::VehicleComponent,
            ::CamelFlagComponent,
            ::PlayerComponent>,
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
            ::DimensionTypeComponent>,
        ::Write<::PlayerInputRequestComponent>,
        ::AddRemove<>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerBoundingBoxStateUpdateSystem::Views>> mViews;
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
                ::PlayerComponent>,
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
                ::DimensionTypeComponent>,
            ::Write<::PlayerInputRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    ) /*override*/;

    virtual ~PlayerBoundingBoxStateUpdateSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickPlayerBoundingBoxStateUpdateSystem(
        ::StrictEntityContext const&    context,
        ::AABBShapeComponent const&     aabb,
        ::PlayerInputRequestComponent&  request,
        float                           sneakHeight,
        ::GetCollisionShapeViews const& collisionViews,
        ::IConstBlockSource const&      region
    );
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
                ::PlayerComponent>,
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
                ::DimensionTypeComponent>,
            ::Write<::PlayerInputRequestComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
