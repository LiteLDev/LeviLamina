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
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct ClientInputLockComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct GetCollisionShapeViews;
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
          ::CanStandOnPowderSnowComponent,
          ::CanStandOnPowderSnowFromEquipmentComponent,
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
    // ClientInputUpdateSystemInternal inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ClientInputUpdateSystemInternal inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 96>  mUnk70eb4e;
        ::ll::UntypedStorage<8, 88>  mUnk942181;
        ::ll::UntypedStorage<8, 96>  mUnk30704f;
        ::ll::UntypedStorage<8, 8>   mUnk39e9c0;
        ::ll::UntypedStorage<8, 8>   mUnke944d9;
        ::ll::UntypedStorage<8, 136> mUnk422d18;
        ::ll::UntypedStorage<8, 32>  mUnk38ab99;
        ::ll::UntypedStorage<8, 728> mUnk47ca77;
        // NOLINTEND

    public:
        // prevent constructor by default
        Views& operator=(Views const&);
        Views(Views const&);
        Views();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1200, ::std::optional<::ClientInputUpdateSystemInternal::Views>> mViews;
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
        ::StrictEntityContext const&                           entity,
        ::AABBShapeComponent const&                            aabbShape,
        ::MovementAbilitiesComponent const&                    abilities,
        ::ActorRotationComponent const&                        actorRotation,
        ::MovementAttributesComponent const&                   attributes,
        ::StateVectorComponent const&                          stateVector,
        ::SubBBsComponent const&                               subBBs,
        ::ClientInputLockComponent&                            clientInputLock,
        ::MoveInputComponent&                                  moveInput,
        ::RawMoveInputComponent&                               rawMoveInput,
        ::ActorDataFlagComponent&                              synchedActorData,
        ::Optional<::ImmuneToLavaDragComponent const>          isImmuneToLava,
        ::Optional<::PassengerComponent const>                 isRiding,
        ::Optional<::SneakingComponent const>                  sneaking,
        ::Optional<::WasInWaterFlagComponent const>            isInWater,
        ::OptionalGlobal<::ExternalDataComponent const> const& externalData,
        ::GetCollisionShapeViews const&                        collisionViews,
        ::IConstBlockSource const&                             region
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
