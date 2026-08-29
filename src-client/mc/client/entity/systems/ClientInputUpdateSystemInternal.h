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
class ActorOwnerComponent;
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct ClientInputLockComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct ImmuneToLavaDragComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerComponent;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct PlayerInputRequestComponent;
struct RawMoveInputComponent;
struct RenderRotationComponent;
struct SneakingComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct VanillaClientGameplayComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
// clang-format on

struct ClientInputUpdateSystemInternal
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
          ::LocalPlayerComponent,
          ::PlayerInputRequestComponent>,
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
          ::ImmuneToLavaDragComponent,
          ::MobEffectsComponent,
          ::SneakingComponent,
          ::StateVectorComponent,
          ::SubBBsComponent,
          ::WasInWaterFlagComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::ClientInputLockComponent,
          ::MoveInputComponent,
          ::RawMoveInputComponent,
          ::ActorDataFlagComponent,
          ::ActorDataDirtyFlagsComponent,
          ::VanillaClientGameplayComponent>,
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
                ::LocalPlayerComponent,
                ::PlayerInputRequestComponent>,
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
                ::ImmuneToLavaDragComponent,
                ::MobEffectsComponent,
                ::SneakingComponent,
                ::StateVectorComponent,
                ::SubBBsComponent,
                ::WasInWaterFlagComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ClientInputLockComponent,
                ::MoveInputComponent,
                ::RawMoveInputComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::VanillaClientGameplayComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickUpdateClientInputView(
        ::StrictEntityContext const&                  entity,
        ::AABBShapeComponent const&                   aabbShape,
        ::MovementAbilitiesComponent const&           abilities,
        ::ActorRotationComponent const&               actorRotation,
        ::MovementAttributesComponent const&          attributes,
        ::StateVectorComponent const&                 stateVector,
        ::SubBBsComponent const&                      subBBs,
        ::ClientInputLockComponent&                   clientInputLock,
        ::MoveInputComponent&                         moveInput,
        ::RawMoveInputComponent&                      rawMoveInput,
        ::ActorDataFlagComponent&                     synchedActorData,
        ::Optional<::ImmuneToLavaDragComponent const> isImmuneToLava,
        ::Optional<::PassengerComponent const>        isRiding,
        ::Optional<::SneakingComponent const>         sneaking,
        ::Optional<::WasInWaterFlagComponent const>   isInWater,
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
                ::LocalPlayerComponent,
                ::PlayerInputRequestComponent>,
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
                ::ImmuneToLavaDragComponent,
                ::MobEffectsComponent,
                ::SneakingComponent,
                ::StateVectorComponent,
                ::SubBBsComponent,
                ::WasInWaterFlagComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ClientInputLockComponent,
                ::MoveInputComponent,
                ::RawMoveInputComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::VanillaClientGameplayComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&                        executionContext,
        ::OptionalGlobal<::ExternalDataComponent const> externalData,
        ::IConstBlockSource const&                      region
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
                ::LocalPlayerComponent,
                ::PlayerInputRequestComponent>,
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
                ::ImmuneToLavaDragComponent,
                ::MobEffectsComponent,
                ::SneakingComponent,
                ::StateVectorComponent,
                ::SubBBsComponent,
                ::WasInWaterFlagComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ClientInputLockComponent,
                ::MoveInputComponent,
                ::RawMoveInputComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::VanillaClientGameplayComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
