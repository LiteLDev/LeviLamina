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
#include "mc/entity/utilities/GetCollisionShapeViews.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

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
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct ClientInputLockComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
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
          ::CanStandOnPowderSnowComponent,
          ::CanStandOnPowderSnowFromEquipmentComponent,
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
          ::StateVectorComponent,
          ::ClientInputLockComponent>,
      ::Write<::MoveInputComponent>,
      ::AddRemove<>,
      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // LocalPlayerFilterAutoJumpInternal inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // LocalPlayerFilterAutoJumpInternal inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::ExternalDataComponent const>> mExternalData;
        ::ll::TypedStorage<
            8,
            112,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::LocalPlayerComponent, ::ActorMovementTickNeededComponent>,
                ::AABBShapeComponent const,
                ::ActorRotationComponent const,
                ::MovementAttributesComponent const,
                ::StateVectorComponent const,
                ::ActorDataFlagComponent const,
                ::ClientInputLockComponent const,
                ::MoveInputComponent,
                ::Optional<::OnGroundFlagComponent const>,
                ::Optional<::PassengerComponent const>>>
                                                                 mView;
        ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs> mBlockSource;
        ::ll::TypedStorage<8, 728, ::GetCollisionShapeViews>     mCollisionViews;
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
                    ::StateVectorComponent,
                    ::ClientInputLockComponent>,
                ::Write<::MoveInputComponent>,
                ::AddRemove<>,
                ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                ::GlobalWrite<>,
                ::EntityFactoryT<>>& c
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
                    ::StateVectorComponent,
                    ::ClientInputLockComponent>,
                ::Write<::MoveInputComponent>,
                ::AddRemove<>,
                ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                ::GlobalWrite<>,
                ::EntityFactoryT<>>& c
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 888, ::std::optional<::PlayerMoveSystemsImpl::LocalPlayerFilterAutoJumpInternal::Views>>
        mViews;
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
                ::StateVectorComponent,
                ::ClientInputLockComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
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
                ::StateVectorComponent,
                ::ClientInputLockComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entity
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isAutoJumpEnabledGlobally(::OptionalGlobal<::ExternalDataComponent const> const& data);

    MCAPI static void _setJumpingIfPlayerCanAutoJump(
        ::StrictEntityContext const&              entity,
        ::AABBShapeComponent const&               aabbShape,
        ::ActorRotationComponent const&           actorRotation,
        ::MovementAttributesComponent const&      attributes,
        ::StateVectorComponent const&             stateVector,
        ::ActorDataFlagComponent const&           synchedActorData,
        ::ClientInputLockComponent const&         inputLock,
        ::MoveInputComponent&                     moveInput,
        ::Optional<::OnGroundFlagComponent const> isOnGround,
        ::Optional<::PassengerComponent const>    isRiding,
        ::GetCollisionShapeViews const&           collisionViews,
        ::IConstBlockSource const&                region
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
                ::StateVectorComponent,
                ::ClientInputLockComponent>,
            ::Write<::MoveInputComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
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
                ::StateVectorComponent,
                ::ClientInputLockComponent>,
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
