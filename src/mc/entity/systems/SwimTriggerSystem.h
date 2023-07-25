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

class SwimTriggerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMTRIGGERSYSTEM
public:
    SwimTriggerSystem& operator=(SwimTriggerSystem const&) = delete;
    SwimTriggerSystem(SwimTriggerSystem const&)            = delete;
    SwimTriggerSystem()                                    = delete;
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
     * ?tick\@SwimTriggerSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@V?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@UActorRotationComponent\@\@UDimensionTypeComponent\@\@UMoveInputComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Write\@UPlayerActionComponent\@\@UPlayerInputRequestComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct CanStandOnSnowFlag>,
                          class FlagComponent<struct HasLightweightFamilyFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct ActorGameTypeComponent,
                          struct VehicleComponent,
                          struct MobBodyRotationComponent,
                          struct PassengerComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct OffsetsComponent,
                          class Optional<struct VanillaOffsetComponent>,
                          class Optional<struct PassengerRenderingRidingOffsetComponent>,
                          struct AABBShapeComponent,
                          struct AbilitiesComponent,
                          class FlagComponent<struct ActorHeadInWaterFlag>,
                          struct ActorRotationComponent,
                          struct DimensionTypeComponent,
                          struct MoveInputComponent,
                          struct StateVectorComponent,
                          struct SynchedActorDataComponent,
                          class FlagComponent<struct InWaterFlag>>,
                      struct Write<struct PlayerActionComponent, struct PlayerInputRequestComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
    /**
     * @symbol ?create\@SwimTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tickSwimTriggerSystem\@SwimTriggerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUAbilitiesComponent\@\@AEBUActorRotationComponent\@\@AEBUMoveInputComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@UPlayerActionComponent\@\@\@\@AEAUPlayerInputRequestComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@V?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@UActorRotationComponent\@\@UDimensionTypeComponent\@\@UMoveInputComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Write\@UPlayerActionComponent\@\@UPlayerInputRequestComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    tickSwimTriggerSystem(class StrictEntityContext const&, struct AABBShapeComponent const&, struct AbilitiesComponent const&, struct ActorRotationComponent const&, struct MoveInputComponent const&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct PlayerActionComponent>, struct PlayerInputRequestComponent&, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, class Optional<struct VanillaOffsetComponent>, class Optional<struct PassengerRenderingRidingOffsetComponent>, struct AABBShapeComponent, struct AbilitiesComponent, class FlagComponent<struct ActorHeadInWaterFlag>, struct ActorRotationComponent, struct DimensionTypeComponent, struct MoveInputComponent, struct StateVectorComponent, struct SynchedActorDataComponent, class FlagComponent<struct InWaterFlag>>, struct Write<struct PlayerActionComponent, struct PlayerInputRequestComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class IConstBlockSource const&);
};
