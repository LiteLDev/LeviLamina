/**
 * @file  ExitVehicleSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ExitVehicleSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITVEHICLESYSTEMIMPL
public:
    struct ExitVehicleSystemImpl& operator=(struct ExitVehicleSystemImpl const &) = delete;
    ExitVehicleSystemImpl(struct ExitVehicleSystemImpl const &) = delete;
    ExitVehicleSystemImpl() = delete;
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
     * @symbol ?tick\@ExitVehicleSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UMobBodyRotationComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UPassengerComponent\@\@UVehicleComponent\@\@UOffsetsComponent\@\@V?$FlagComponent\@UEjectedByActivatorRailFlag\@\@\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct PassengerComponent, struct VehicleComponent, struct OffsetsComponent, class FlagComponent<struct EjectedByActivatorRailFlag>>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct ActorSetPositionRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 5
     * @symbol ?singleTick\@ExitVehicleSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UMobBodyRotationComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UPassengerComponent\@\@UVehicleComponent\@\@UOffsetsComponent\@\@V?$FlagComponent\@UEjectedByActivatorRailFlag\@\@\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct PassengerComponent, struct VehicleComponent, struct OffsetsComponent, class FlagComponent<struct EjectedByActivatorRailFlag>>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct ActorSetPositionRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?_tickExitVehicle\@ExitVehicleSystemImpl\@\@SAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEBUOffsetsComponent\@\@AEAUActorRotationComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UEjectedByActivatorRailFlag\@\@\@\@\@\@AEBVBaseGameVersion\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUStateVectorComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UMobBodyRotationComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UPassengerComponent\@\@UVehicleComponent\@\@UOffsetsComponent\@\@V?$FlagComponent\@UEjectedByActivatorRailFlag\@\@\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _tickExitVehicle(class StrictEntityContext const &, struct PassengerComponent const &, struct AABBShapeComponent const &, struct StateVectorComponent const &, struct OffsetsComponent const &, struct ActorRotationComponent &, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct EjectedByActivatorRailFlag> const>, class BaseGameVersion const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct StateVectorComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent> &, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct PassengerComponent, struct VehicleComponent, struct OffsetsComponent, class FlagComponent<struct EjectedByActivatorRailFlag>>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct ActorSetPositionRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class IConstBlockSource const &);
    /**
     * @symbol ?createViews\@ExitVehicleSystemImpl\@\@SA\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UMobBodyRotationComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UPassengerComponent\@\@UVehicleComponent\@\@UOffsetsComponent\@\@V?$FlagComponent\@UEjectedByActivatorRailFlag\@\@\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    MCAPI static createViews(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct PassengerComponent, struct VehicleComponent, struct OffsetsComponent, class FlagComponent<struct EjectedByActivatorRailFlag>>, struct Write<struct AABBShapeComponent, struct ActorRotationComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct ActorSetPositionRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);

};