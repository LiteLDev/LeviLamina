/**
 * @file  MobJumpFromGroundSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobJumpFromGroundSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doFilter\@MobJumpFromGroundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBV?$Optional\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@AEBV?$Optional\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@\@\@AEBV?$Optional\@V?$FlagComponent\@USquidFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@ULocalPlayerJumpRequestFlag\@\@\@\@V?$FlagComponent\@ULavaSlimeJumpRequestFlag\@\@\@\@V?$FlagComponent\@USquidJumpRequestFlag\@\@\@\@V?$FlagComponent\@UOtherJumpRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void doFilter(class StrictEntityContext const &, class Optional<class FlagComponent<struct LocalPlayerComponentFlag>> const &, class Optional<class FlagComponent<struct LavaSlimeFlag>> const &, class Optional<class FlagComponent<struct SquidFlag>> const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct LocalPlayerJumpRequestFlag>, class FlagComponent<struct LavaSlimeJumpRequestFlag>, class FlagComponent<struct SquidJumpRequestFlag>, class FlagComponent<struct OtherJumpRequestFlag>>);
    /**
     * @symbol ?doLavaSlimeJumpFromGround\@MobJumpFromGroundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UTriggerJumpRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doLavaSlimeJumpFromGround(class StrictEntityContext const &, struct AABBShapeComponent const &, struct SynchedActorDataComponent const &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct TriggerJumpRequestComponent> &, class IConstBlockSource const &);
    /**
     * @symbol ?doLocalPlayerJumpFromGround\@MobJumpFromGroundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBV?$Optional\@$$CBVJumpControlComponent\@\@\@\@AEBUAABBShapeComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUActorRotationComponent\@\@AEBUMobEffectsComponent\@\@AEAUMobJumpComponent\@\@AEAUStateVectorComponent\@\@AEAUPlayerActionComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UTriggerJumpRequestComponent\@\@\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerJumpRequestFlag\@\@\@\@V?$FlagComponent\@ULavaSlimeJumpRequestFlag\@\@\@\@V?$FlagComponent\@USquidJumpRequestFlag\@\@\@\@V?$FlagComponent\@UOtherJumpRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UOffsetsComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UMobEffectsComponent\@\@USynchedActorDataComponent\@\@VJumpControlComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UMobJumpComponent\@\@UStateVectorComponent\@\@UPlayerActionComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UTriggerJumpRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doLocalPlayerJumpFromGround(class StrictEntityContext const &, class Optional<class JumpControlComponent const> const &, struct AABBShapeComponent const &, struct SynchedActorDataComponent const &, struct ActorRotationComponent const &, struct MobEffectsComponent const &, struct MobJumpComponent &, struct StateVectorComponent &, struct PlayerActionComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct TriggerJumpRequestComponent> &, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct LocalPlayerJumpRequestFlag>, class FlagComponent<struct LavaSlimeJumpRequestFlag>, class FlagComponent<struct SquidJumpRequestFlag>, class FlagComponent<struct OtherJumpRequestFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct OffsetsComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct MobEffectsComponent, struct SynchedActorDataComponent, class JumpControlComponent, struct DimensionTypeComponent>, struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct TriggerJumpRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class IConstBlockSource const &);
    /**
     * @symbol ?doOtherMobJumpFromGround\@MobJumpFromGroundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBV?$Optional\@$$CBVJumpControlComponent\@\@\@\@AEBUAABBShapeComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUActorRotationComponent\@\@AEBUMobEffectsComponent\@\@AEAUMobJumpComponent\@\@AEAUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UTriggerJumpRequestComponent\@\@\@\@_NAEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void doOtherMobJumpFromGround(class StrictEntityContext const &, class Optional<class JumpControlComponent const> const &, struct AABBShapeComponent const &, struct SynchedActorDataComponent const &, struct ActorRotationComponent const &, struct MobEffectsComponent const &, struct MobJumpComponent &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct TriggerJumpRequestComponent> &, bool, class IConstBlockSource const &);
    /**
     * @symbol ?mobJumpFromGround\@MobJumpFromGroundSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUSynchedActorDataComponent\@\@AEBUActorRotationComponent\@\@AEBUMobEffectsComponent\@\@PEBVJumpControlComponent\@\@AEAUMobJumpComponent\@\@AEAUStateVectorComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UTriggerJumpRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@_N\@Z
     */
    MCAPI void mobJumpFromGround(class StrictEntityContext const &, struct AABBShapeComponent const &, struct SynchedActorDataComponent const &, struct ActorRotationComponent const &, struct MobEffectsComponent const &, class JumpControlComponent const *, struct MobJumpComponent &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct TriggerJumpRequestComponent> &, class IConstBlockSource const &, bool);

};