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
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct AttributeRequestComponent;
struct CamelFlagComponent;
struct DimensionTypeComponent;
struct ExhaustionComponent;
struct ExternalDataComponent;
struct HorseFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct ServerPlayerCurrentMovementComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace FoodExhaustionSystemImpl {

struct FoodExhaustionSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                      ::Filter<
                                          ::ActorMovementTickNeededComponent,
                                          ::PassengerComponent,
                                          ::PlayerComponent,
                                          ::HorseFlagComponent,
                                          ::MobFlagComponent,
                                          ::ParrotFlagComponent,
                                          ::VehicleComponent,
                                          ::CamelFlagComponent>,
                                      ::Read<
                                          ::DimensionTypeComponent,
                                          ::ExhaustionComponent,
                                          ::OnGroundFlagComponent,
                                          ::ActorGameTypeComponent,
                                          ::ServerPlayerCurrentMovementComponent,
                                          ::StateVectorComponent,
                                          ::ActorDataFlagComponent,
                                          ::WasInWaterFlagComponent,
                                          ::ActorRotationComponent,
                                          ::MobBodyRotationComponent,
                                          ::PassengerComponent,
                                          ::RenderRotationComponent,
                                          ::StandAnimationComponent,
                                          ::AABBShapeComponent,
                                          ::OffsetsComponent,
                                          ::VanillaOffsetComponent,
                                          ::PassengerRenderingRidingOffsetComponent>,
                                      ::Write<>,
                                      ::AddRemove<::AttributeRequestComponent>,
                                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
                                      ::GlobalWrite<>,
                                      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<
                          ::ActorMovementTickNeededComponent,
                          ::PassengerComponent,
                          ::PlayerComponent,
                          ::HorseFlagComponent,
                          ::MobFlagComponent,
                          ::ParrotFlagComponent,
                          ::VehicleComponent,
                          ::CamelFlagComponent>,
                      ::Read<
                          ::DimensionTypeComponent,
                          ::ExhaustionComponent,
                          ::OnGroundFlagComponent,
                          ::ActorGameTypeComponent,
                          ::ServerPlayerCurrentMovementComponent,
                          ::StateVectorComponent,
                          ::ActorDataFlagComponent,
                          ::WasInWaterFlagComponent,
                          ::ActorRotationComponent,
                          ::MobBodyRotationComponent,
                          ::PassengerComponent,
                          ::RenderRotationComponent,
                          ::StandAnimationComponent,
                          ::AABBShapeComponent,
                          ::OffsetsComponent,
                          ::VanillaOffsetComponent,
                          ::PassengerRenderingRidingOffsetComponent>,
                      ::Write<>,
                      ::AddRemove<::AttributeRequestComponent>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~FoodExhaustionSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::StrictExecutionContext<
                      ::Filter<
                          ::ActorMovementTickNeededComponent,
                          ::PassengerComponent,
                          ::PlayerComponent,
                          ::HorseFlagComponent,
                          ::MobFlagComponent,
                          ::ParrotFlagComponent,
                          ::VehicleComponent,
                          ::CamelFlagComponent>,
                      ::Read<
                          ::DimensionTypeComponent,
                          ::ExhaustionComponent,
                          ::OnGroundFlagComponent,
                          ::ActorGameTypeComponent,
                          ::ServerPlayerCurrentMovementComponent,
                          ::StateVectorComponent,
                          ::ActorDataFlagComponent,
                          ::WasInWaterFlagComponent,
                          ::ActorRotationComponent,
                          ::MobBodyRotationComponent,
                          ::PassengerComponent,
                          ::RenderRotationComponent,
                          ::StandAnimationComponent,
                          ::AABBShapeComponent,
                          ::OffsetsComponent,
                          ::VanillaOffsetComponent,
                          ::PassengerRenderingRidingOffsetComponent>,
                      ::Write<>,
                      ::AddRemove<::AttributeRequestComponent>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent, ::ExternalDataComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FoodExhaustionSystemImpl
