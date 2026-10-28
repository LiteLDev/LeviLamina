#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/utilities/GetCollisionShapeViews.h"
#include "mc/entity/utilities/ViewEachWithBlockSourceArgs.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnPowderSnowComponent;
struct CanStandOnPowderSnowFromEquipmentComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HorseFlagComponent;
struct LavaSlimeJumpRequestComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerJumpRequestComponent;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MobJumpComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct OtherJumpRequestComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerActionComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct SquidJumpRequestComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TriggerJumpRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MobJumpFromGroundSystemImpl {

struct JumpViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        96,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::OtherJumpRequestComponent>,
            ::Optional<::JumpControlComponent const>,
            ::AABBShapeComponent const,
            ::ActorDataFlagComponent const,
            ::ActorRotationComponent const,
            ::MobEffectsComponent const,
            ::MobJumpComponent,
            ::StateVectorComponent>>
        mMainView;
    ::ll::TypedStorage<
        8,
        96,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::SquidJumpRequestComponent>,
            ::Optional<::JumpControlComponent const>,
            ::AABBShapeComponent const,
            ::ActorDataFlagComponent const,
            ::ActorRotationComponent const,
            ::MobEffectsComponent const,
            ::MobJumpComponent,
            ::StateVectorComponent>>
        mSquidView;
    ::ll::TypedStorage<
        8,
        80,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::LavaSlimeJumpRequestComponent>,
            ::AABBShapeComponent const,
            ::SynchedActorDataComponent const,
            ::StateVectorComponent,
            ::MobEffectsComponent const>>
        mLavaSlimeView;
    ::ll::TypedStorage<
        8,
        104,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::LocalPlayerJumpRequestComponent>,
            ::Optional<::JumpControlComponent const>,
            ::AABBShapeComponent const,
            ::ActorDataFlagComponent const,
            ::ActorRotationComponent const,
            ::MobEffectsComponent const,
            ::MobJumpComponent,
            ::StateVectorComponent,
            ::PlayerActionComponent>>
                                                                              mLocalPlayerView;
    ::ll::TypedStorage<8, 8, ::EntityModifier<::TriggerJumpRequestComponent>> mModifier;
    ::ll::TypedStorage<8, 32, ::ViewEachWithBlockSourceArgs>                  mBlockSource;
    ::ll::TypedStorage<8, 728, ::GetCollisionShapeViews>                      mCollisionViews;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpViews();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JumpViews(
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
                ::LocalPlayerJumpRequestComponent,
                ::LavaSlimeJumpRequestComponent,
                ::SquidJumpRequestComponent,
                ::OtherJumpRequestComponent>,
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
                ::MobEffectsComponent,
                ::SynchedActorDataComponent,
                ::JumpControlComponent,
                ::DimensionTypeComponent>,
            ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
            ::AddRemove<::TriggerJumpRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
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
                ::LocalPlayerJumpRequestComponent,
                ::LavaSlimeJumpRequestComponent,
                ::SquidJumpRequestComponent,
                ::OtherJumpRequestComponent>,
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
                ::MobEffectsComponent,
                ::SynchedActorDataComponent,
                ::JumpControlComponent,
                ::DimensionTypeComponent>,
            ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
            ::AddRemove<::TriggerJumpRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND
};

} // namespace MobJumpFromGroundSystemImpl
