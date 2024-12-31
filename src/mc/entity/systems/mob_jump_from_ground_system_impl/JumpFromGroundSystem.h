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
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
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

struct JumpFromGroundSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                  ::Filter<
                                      ::CanStandOnSnowFlagComponent,
                                      ::HasLightweightFamilyFlagComponent,
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
                                  ::EntityFactoryT<>>> {
public:
    // prevent constructor by default
    JumpFromGroundSystem& operator=(JumpFromGroundSystem const&);
    JumpFromGroundSystem(JumpFromGroundSystem const&);
    JumpFromGroundSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<
                          ::CanStandOnSnowFlagComponent,
                          ::HasLightweightFamilyFlagComponent,
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
                      ::EntityFactoryT<>>& context) /*override*/;

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
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entity
    ) /*override*/;

    // vIndex: 0
    virtual ~JumpFromGroundSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static auto createViews(::StrictExecutionContext<
                                  ::Filter<
                                      ::CanStandOnSnowFlagComponent,
                                      ::HasLightweightFamilyFlagComponent,
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
                                  ::EntityFactoryT<>>& context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<
                         ::CanStandOnSnowFlagComponent,
                         ::HasLightweightFamilyFlagComponent,
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
                     ::EntityFactoryT<>>& context);

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

} // namespace MobJumpFromGroundSystemImpl
