#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
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

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace PlayerMoveSystemsImpl {

struct LocalPlayerFilterAutoJumpInternal
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::CanStandOnSnowFlagComponent,
          ::HasLightweightFamilyFlagComponent,
          ::HorseFlagComponent,
          ::MobFlagComponent,
          ::ParrotFlagComponent,
          ::VehicleComponent,
          ::CamelFlagComponent,
          ::PlayerComponent,
          ::ActorMovementTickNeededComponent,
          ::LocalPlayerComponent>,
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
          ::MovementAttributesComponent,
          ::DimensionTypeComponent,
          ::OnGroundFlagComponent,
          ::StateVectorComponent>,
      ::Write<::MoveInputComponent>,
      ::AddRemove<>,
      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
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
                ::ActorMovementTickNeededComponent,
                ::LocalPlayerComponent>,
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
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::OnGroundFlagComponent,
                ::StateVectorComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
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
                ::ActorMovementTickNeededComponent,
                ::LocalPlayerComponent>,
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
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::OnGroundFlagComponent,
                ::StateVectorComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entity
    ) /*override*/;

    virtual ~LocalPlayerFilterAutoJumpInternal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void commonTick(
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
                ::ActorMovementTickNeededComponent,
                ::LocalPlayerComponent>,
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
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::OnGroundFlagComponent,
                ::StateVectorComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext*   entity
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isAutoJumpEnabledGlobally(::OptionalGlobal<::ExternalDataComponent const> data);

    MCAPI static void _setJumpingIfPlayerCanAutoJump(
        ::StrictEntityContext const&              entity,
        ::AABBShapeComponent const&               aabbShape,
        ::ActorRotationComponent const&           actorRotation,
        ::MovementAttributesComponent const&      attributes,
        ::StateVectorComponent const&             stateVector,
        ::ActorDataFlagComponent const&           synchedActorData,
        ::MoveInputComponent&                     moveInput,
        ::Optional<::OnGroundFlagComponent const> isOnGround,
        ::Optional<::PassengerComponent const>    isRiding,
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
                ::ActorMovementTickNeededComponent,
                ::LocalPlayerComponent>,
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
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::OnGroundFlagComponent,
                ::StateVectorComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&   executionContext,
        ::IConstBlockSource const& region
    );
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
                ::ActorMovementTickNeededComponent,
                ::LocalPlayerComponent>,
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
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::OnGroundFlagComponent,
                ::StateVectorComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
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
                ::ActorMovementTickNeededComponent,
                ::LocalPlayerComponent>,
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
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::OnGroundFlagComponent,
                ::StateVectorComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entity
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerMoveSystemsImpl
