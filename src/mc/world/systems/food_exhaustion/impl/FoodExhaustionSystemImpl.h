#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class ExhaustionComponent;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededFlag;
struct ActorRotationComponent;
struct AttributesComponent;
struct CamelFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct HorseFlag;
struct InWaterFlag;
struct LocalConstBlockSourceFactoryComponent;
struct MobBodyRotationComponent;
struct MobFlag;
struct OffsetsComponent;
struct OnGroundFlag;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct ServerPlayerCurrentMovementComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
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
    // vIndex: 0, symbol: ??1FoodExhaustionSystemImpl@@@UEAA@XZ
    virtual ~FoodExhaustionSystemImpl();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@FoodExhaustionSystemImpl@1@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPassengerComponent@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@@@U?$Read@UDimensionTypeComponent@@VExhaustionComponent@@V?$FlagComponent@UOnGroundFlag@@@@UActorGameTypeComponent@@UServerPlayerCurrentMovementComponent@@V?$FlagComponent@UInWaterFlag@@@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UStateVectorComponent@@USynchedActorDataComponent@@UAABBShapeComponent@@UActorRotationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@@@U?$Write@UAttributesComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@ULocalConstBlockSourceFactoryComponent@@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          struct PassengerComponent,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<
                          struct DimensionTypeComponent,
                          class ExhaustionComponent,
                          class FlagComponent<struct OnGroundFlag>,
                          struct ActorGameTypeComponent,
                          struct ServerPlayerCurrentMovementComponent,
                          class FlagComponent<struct InWaterFlag>,
                          struct MobBodyRotationComponent,
                          struct PassengerComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct StateVectorComponent,
                          struct SynchedActorDataComponent,
                          struct AABBShapeComponent,
                          struct ActorRotationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent>,
                      struct Write<struct AttributesComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct ExternalDataComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // NOLINTEND
};

}; // namespace FoodExhaustionSystemImpl
