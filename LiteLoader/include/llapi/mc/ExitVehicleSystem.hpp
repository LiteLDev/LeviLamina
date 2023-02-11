/**
 * @file  ExitVehicleSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ExitVehicleSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITVEHICLESYSTEM
public:
    struct ExitVehicleSystem& operator=(struct ExitVehicleSystem const &) = delete;
    ExitVehicleSystem(struct ExitVehicleSystem const &) = delete;
    ExitVehicleSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExitVehicleSystem();
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
     * @symbol  ?tick\@ExitVehicleSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UMobBodyRotationComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UPassengerComponent\@\@UVehicleComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UActorMoveToRequestComponent\@\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct PassengerComponent, struct VehicleComponent>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct ActorMoveToRequestComponent, struct ActorSetPositionRequestComponent>, struct GlobalRead<struct BaseGameVersionComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?_tickExitVehicle\@ExitVehicleSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAUAABBShapeComponent\@\@AEAUActorRotationComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@AEBVBaseGameVersion\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUStateVectorComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorMoveToRequestComponent\@\@UActorSetPositionRequestComponent\@\@\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UMobBodyRotationComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UPassengerComponent\@\@UVehicleComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UActorMoveToRequestComponent\@\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _tickExitVehicle(class StrictEntityContext const &, struct PassengerComponent const &, struct AABBShapeComponent &, struct ActorRotationComponent &, struct StateVectorComponent &, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class BaseGameVersion const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct StateVectorComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorMoveToRequestComponent, struct ActorSetPositionRequestComponent> &, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct PassengerComponent, struct VehicleComponent>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct ActorMoveToRequestComponent, struct ActorSetPositionRequestComponent>, struct GlobalRead<struct BaseGameVersionComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class IConstBlockSource const &);
    /**
     * @symbol  ?createSystem\@ExitVehicleSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};