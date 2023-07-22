/**
 * @file  SneakMovementSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct SneakMovementSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKMOVEMENTSYSTEM
public:
    struct SneakMovementSystem& operator=(struct SneakMovementSystem const &) = delete;
    SneakMovementSystem(struct SneakMovementSystem const &) = delete;
    SneakMovementSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SneakMovementSystem();
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
     * @symbol  ?tick\@SneakMovementSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct FallingBlockFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct DimensionTypeComponent, struct MaxAutoStepComponent, class FlagComponent<struct OnGroundFlag>, struct SynchedActorDataComponent>, struct Write<struct MoveRequestComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?containsSneakCollisionShapes\@SneakMovementSystem\@\@SA_NAEBVStrictEntityContext\@\@AEAVLocalSpatialEntityFetcher\@\@AEBVAABB\@\@2V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@AEBVIConstBlockSource\@\@_NAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    MCAPI static bool containsSneakCollisionShapes(class StrictEntityContext const &, class LocalSpatialEntityFetcher &, class AABB const &, class AABB const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class IConstBlockSource const &, bool, std::vector<class AABB> &, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct FallingBlockFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct DimensionTypeComponent, struct MaxAutoStepComponent, class FlagComponent<struct OnGroundFlag>, struct SynchedActorDataComponent>, struct Write<struct MoveRequestComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?create\@SneakMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol  ?createSideBySide\@SneakMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySide();
    /**
     * @symbol  ?tickSneakMovementSystem\@SneakMovementSystem\@\@SAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEBUAABBShapeComponent\@\@AEBUDimensionTypeComponent\@\@AEBUMaxAutoStepComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UIsWorldBuilderFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@AEBULocalSpatialEntityFetcherFactoryComponent\@\@AEAVLocalSpatialEntityFetcher\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tickSneakMovementSystem(class StrictEntityContext const &, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, struct AABBShapeComponent const &, struct DimensionTypeComponent const &, struct MaxAutoStepComponent const &, struct SynchedActorDataComponent const &, struct MoveRequestComponent &, struct StateVectorComponent &, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct FallingBlockFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct DimensionTypeComponent, struct MaxAutoStepComponent, class FlagComponent<struct OnGroundFlag>, struct SynchedActorDataComponent>, struct Write<struct MoveRequestComponent, struct StateVectorComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, struct LocalSpatialEntityFetcherFactoryComponent const &, class LocalSpatialEntityFetcher &, class IConstBlockSource const &);

};