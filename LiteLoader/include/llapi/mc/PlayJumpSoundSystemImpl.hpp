/**
 * @file  PlayJumpSoundSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PlayJumpSoundSystem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct PlayJumpSoundSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYJUMPSOUNDSYSTEMIMPL
public:
    struct PlayJumpSoundSystemImpl& operator=(struct PlayJumpSoundSystemImpl const &) = delete;
    PlayJumpSoundSystemImpl(struct PlayJumpSoundSystemImpl const &) = delete;
    PlayJumpSoundSystemImpl() = delete;
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
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?tick\@PlayJumpSoundSystemImpl\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@UTriggerJumpRequestComponent\@\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UActorDefinitionIdentifierComponent\@\@UDimensionTypeComponent\@\@USoundEventPlayerComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@UVanillaOffsetComponent\@\@UPassengerRenderingRidingOffsetComponent\@\@\@\@U?$Write\@$$V\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<struct TriggerJumpRequestComponent, class FlagComponent<struct LavaSlimeFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorDefinitionIdentifierComponent, struct DimensionTypeComponent, struct SoundEventPlayerComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent>, struct Write<>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 6
     * @symbol ?singleTick\@PlayJumpSoundSystemImpl\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@UTriggerJumpRequestComponent\@\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UActorDefinitionIdentifierComponent\@\@UDimensionTypeComponent\@\@USoundEventPlayerComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@UVanillaOffsetComponent\@\@UPassengerRenderingRidingOffsetComponent\@\@\@\@U?$Write\@$$V\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<struct TriggerJumpRequestComponent, class FlagComponent<struct LavaSlimeFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct ActorDefinitionIdentifierComponent, struct DimensionTypeComponent, struct SoundEventPlayerComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent>, struct Write<>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?doPlayJumpSoundSystem\@PlayJumpSoundSystemImpl\@\@SAXAEBVStrictEntityContext\@\@AEBUActorDefinitionIdentifierComponent\@\@AEBUSoundEventPlayerComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUStateVectorComponent\@\@AEBUAABBShapeComponent\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@USoundEventRequestQueueComponent\@\@\@\@AEBUGetAttachPositionViews\@\@W4SoundType\@PlayJumpSoundSystem\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void doPlayJumpSoundSystem(class StrictEntityContext const &, struct ActorDefinitionIdentifierComponent const &, struct SoundEventPlayerComponent const &, struct SynchedActorDataComponent const &, struct StateVectorComponent const &, struct AABBShapeComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SoundEventRequestQueueComponent> const &, struct GetAttachPositionViews const &, enum class PlayJumpSoundSystem::SoundType, class IConstBlockSource const &);
    /**
     * @symbol ?sendSoundRequest\@PlayJumpSoundSystemImpl\@\@SAXAEBVIConstBlockSource\@\@AEBUSynchedActorDataComponent\@\@AEBUActorDefinitionIdentifierComponent\@\@AEBVVec3\@\@V?$OptionalComponentWrapper\@VStrictEntityContext\@\@USoundEventRequestQueueComponent\@\@\@\@H\@Z
     */
    MCAPI static void sendSoundRequest(class IConstBlockSource const &, struct SynchedActorDataComponent const &, struct ActorDefinitionIdentifierComponent const &, class Vec3 const &, class OptionalComponentWrapper<class StrictEntityContext, struct SoundEventRequestQueueComponent>, int);

};