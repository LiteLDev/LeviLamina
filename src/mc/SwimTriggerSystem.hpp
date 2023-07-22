/**
 * @file  SwimTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimTriggerSystem.
 *
 */
class SwimTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMTRIGGERSYSTEM
public:
    class SwimTriggerSystem& operator=(class SwimTriggerSystem const &) = delete;
    SwimTriggerSystem(class SwimTriggerSystem const &) = delete;
    SwimTriggerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SwimTriggerSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?tick\@SwimTriggerSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UOffsetsComponent\@\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@V?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@UActorRotationComponent\@\@UDimensionTypeComponent\@\@UMoveInputComponent\@\@UPlayerInputRequestComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Write\@UPlayerActionComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct AABBShapeComponent, struct AbilitiesComponent, class FlagComponent<struct ActorHeadInWaterFlag>, struct ActorRotationComponent, struct DimensionTypeComponent, struct MoveInputComponent, struct PlayerInputRequestComponent, struct StateVectorComponent, struct SynchedActorDataComponent, class FlagComponent<struct InWaterFlag>>, struct Write<struct PlayerActionComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?create\@SwimTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol  ?createSideBySide\@SwimTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySide();
    /**
     * @symbol  ?tickSwimTriggerSystem\@SwimTriggerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUAbilitiesComponent\@\@AEBUActorRotationComponent\@\@AEBUMoveInputComponent\@\@AEBUPlayerInputRequestComponent\@\@AEBUStateVectorComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@V?$Optional\@UPlayerActionComponent\@\@\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UOffsetsComponent\@\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@V?$FlagComponent\@UActorHeadInWaterFlag\@\@\@\@UActorRotationComponent\@\@UDimensionTypeComponent\@\@UMoveInputComponent\@\@UPlayerInputRequestComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Write\@UPlayerActionComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tickSwimTriggerSystem(class StrictEntityContext const &, struct AABBShapeComponent const &, struct AbilitiesComponent const &, struct ActorRotationComponent const &, struct MoveInputComponent const &, struct PlayerInputRequestComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct ActorHeadInWaterFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct PlayerActionComponent>, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct AABBShapeComponent, struct AbilitiesComponent, class FlagComponent<struct ActorHeadInWaterFlag>, struct ActorRotationComponent, struct DimensionTypeComponent, struct MoveInputComponent, struct PlayerInputRequestComponent, struct StateVectorComponent, struct SynchedActorDataComponent, class FlagComponent<struct InWaterFlag>>, struct Write<struct PlayerActionComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class IConstBlockSource const &);

};