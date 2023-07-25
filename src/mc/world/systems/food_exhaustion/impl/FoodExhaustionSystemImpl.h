#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

namespace FoodExhaustionSystemImpl {

struct FoodExhaustionSystemImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODEXHAUSTIONSYSTEMIMPL_FOODEXHAUSTIONSYSTEMIMPL
public:
    FoodExhaustionSystemImpl& operator=(FoodExhaustionSystemImpl const&) = delete;
    FoodExhaustionSystemImpl(FoodExhaustionSystemImpl const&)            = delete;
    FoodExhaustionSystemImpl()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?tick\@FoodExhaustionSystemImpl\@1\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPassengerComponent\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UDimensionTypeComponent\@\@VExhaustionComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@UActorGameTypeComponent\@\@UServerPlayerCurrentMovementComponent\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@\@\@U?$Write\@UAttributesComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@UExternalDataComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
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
                          class Optional<struct VanillaOffsetComponent>,
                          class Optional<struct PassengerRenderingRidingOffsetComponent>>,
                      struct Write<struct AttributesComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct ExternalDataComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
};

}; // namespace FoodExhaustionSystemImpl
