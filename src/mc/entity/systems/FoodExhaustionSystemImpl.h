#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class ExhaustionComponent;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededFlag;
struct ActorRotationComponent;
struct AttributeRequestComponent;
struct CamelFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct HorseFlag;
struct InWaterFlag;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlag;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct ServerPlayerCurrentMovementComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace FoodExhaustionSystemImpl {

struct FoodExhaustionSystemImpl {
public:
    // prevent constructor by default
    FoodExhaustionSystemImpl& operator=(FoodExhaustionSystemImpl const&);
    FoodExhaustionSystemImpl(FoodExhaustionSystemImpl const&);
    FoodExhaustionSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FoodExhaustionSystemImpl() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          struct PassengerComponent,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>>,
                      struct Read<
                          struct DimensionTypeComponent,
                          class ExhaustionComponent,
                          struct OnGroundFlagComponent,
                          struct ActorGameTypeComponent,
                          struct ServerPlayerCurrentMovementComponent,
                          struct StateVectorComponent,
                          struct ActorDataFlagComponent,
                          class FlagComponent<struct InWaterFlag>,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct PassengerComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct AABBShapeComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent>,
                      struct Write<>,
                      struct AddRemove<struct AttributeRequestComponent>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct ExternalDataComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                         struct PassengerComponent,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct HorseFlag>,
                         class FlagComponent<struct MobFlag>,
                         class FlagComponent<struct ParrotFlag>,
                         struct VehicleComponent,
                         class FlagComponent<struct CamelFlag>>,
                     struct Read<
                         struct DimensionTypeComponent,
                         class ExhaustionComponent,
                         struct OnGroundFlagComponent,
                         struct ActorGameTypeComponent,
                         struct ServerPlayerCurrentMovementComponent,
                         struct StateVectorComponent,
                         struct ActorDataFlagComponent,
                         class FlagComponent<struct InWaterFlag>,
                         struct ActorRotationComponent,
                         struct MobBodyRotationComponent,
                         struct PassengerComponent,
                         struct RenderRotationComponent,
                         struct StandAnimationComponent,
                         struct AABBShapeComponent,
                         struct OffsetsComponent,
                         struct VanillaOffsetComponent,
                         struct PassengerRenderingRidingOffsetComponent>,
                     struct Write<>,
                     struct AddRemove<struct AttributeRequestComponent>,
                     struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct ExternalDataComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};

}; // namespace FoodExhaustionSystemImpl
