#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct SneakMovementSystem {

public:
    // prevent constructor by default
    SneakMovementSystem& operator=(SneakMovementSystem const&) = delete;
    SneakMovementSystem(SneakMovementSystem const&)            = delete;
    SneakMovementSystem()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?tick\@SneakMovementSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@UMoveInputComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
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
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct FallingBlockFlag>,
                          class FlagComponent<struct CollidableMobFlag>>,
                      struct Read<
                          struct AbilitiesComponent,
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct ActorGameTypeComponent,
                          struct VehicleComponent,
                          struct MobBodyRotationComponent,
                          struct PassengerComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct StateVectorComponent,
                          struct ActorRotationComponent,
                          struct OffsetsComponent,
                          class Optional<struct VanillaOffsetComponent>,
                          class Optional<struct PassengerRenderingRidingOffsetComponent>,
                          struct AABBShapeComponent,
                          class FlagComponent<struct CollidableMobNearFlag>,
                          struct DimensionTypeComponent,
                          struct MaxAutoStepComponent,
                          struct MoveInputComponent,
                          class FlagComponent<struct OnGroundFlag>,
                          struct SynchedActorDataComponent>,
                      struct Write<struct MoveRequestComponent, struct StateVectorComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<
                          struct ExternalDataComponent,
                          struct LocalConstBlockSourceFactoryComponent,
                          struct LocalSpatialEntityFetcherFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?singleTick\@SneakMovementSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@UMoveInputComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct FallingBlockFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, class Optional<struct VanillaOffsetComponent>, class Optional<struct PassengerRenderingRidingOffsetComponent>, struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct DimensionTypeComponent, struct MaxAutoStepComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct SynchedActorDataComponent>, struct Write<struct MoveRequestComponent, struct StateVectorComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&); // NOLINT
    /**
     * @symbol
     * ?containsSneakCollisionShapes\@SneakMovementSystem\@\@SA_NAEBVStrictEntityContext\@\@AEAVLocalSpatialEntityFetcher\@\@AEBVAABB\@\@2V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@AEBVIConstBlockSource\@\@_NAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@UMoveInputComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    MCAPI static bool
    containsSneakCollisionShapes(class StrictEntityContext const&, class LocalSpatialEntityFetcher&, class AABB const&, class AABB const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class IConstBlockSource const&, bool, std::vector<class AABB>&, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct FallingBlockFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, class Optional<struct VanillaOffsetComponent>, class Optional<struct PassengerRenderingRidingOffsetComponent>, struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct DimensionTypeComponent, struct MaxAutoStepComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct SynchedActorDataComponent>, struct Write<struct MoveRequestComponent, struct StateVectorComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&); // NOLINT
    /**
     * @symbol ?create\@SneakMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol
     * ?tickSneakMovementSystem\@SneakMovementSystem\@\@SAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBV?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUMoveInputComponent\@\@\@\@AEBUAABBShapeComponent\@\@AEBUDimensionTypeComponent\@\@AEBUMaxAutoStepComponent\@\@AEBUSynchedActorDataComponent\@\@AEAUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@UMoveInputComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@AEBULocalSpatialEntityFetcherFactoryComponent\@\@AEAVLocalSpatialEntityFetcher\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tickSneakMovementSystem(class StrictEntityContext const&, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct MoveInputComponent const>, struct AABBShapeComponent const&, struct DimensionTypeComponent const&, struct MaxAutoStepComponent const&, struct SynchedActorDataComponent const&, struct MoveRequestComponent&, struct StateVectorComponent&, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct FallingBlockFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, class Optional<struct VanillaOffsetComponent>, class Optional<struct PassengerRenderingRidingOffsetComponent>, struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct DimensionTypeComponent, struct MaxAutoStepComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct SynchedActorDataComponent>, struct Write<struct MoveRequestComponent, struct StateVectorComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, struct LocalSpatialEntityFetcherFactoryComponent const&, class LocalSpatialEntityFetcher&, class IConstBlockSource const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_createViews\@SneakMovementSystem\@\@AEAA\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@UMoveInputComponent\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@USynchedActorDataComponent\@\@\@\@U?$Write\@UMoveRequestComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    MCAPI _createViews(class StrictExecutionContext<
                       struct Filter<
                           class FlagComponent<struct CanStandOnSnowFlag>,
                           class FlagComponent<struct HasLightweightFamilyFlag>,
                           class FlagComponent<struct HorseFlag>,
                           class FlagComponent<struct MobFlag>,
                           class FlagComponent<struct ParrotFlag>,
                           struct VehicleComponent,
                           class FlagComponent<struct CamelFlag>,
                           class FlagComponent<struct PlayerComponentFlag>,
                           class FlagComponent<struct FallingBlockFlag>,
                           class FlagComponent<struct CollidableMobFlag>>,
                       struct Read<
                           struct AbilitiesComponent,
                           struct ActorTypeComponent,
                           struct FallDistanceComponent,
                           struct ActorGameTypeComponent,
                           struct VehicleComponent,
                           struct MobBodyRotationComponent,
                           struct PassengerComponent,
                           struct RenderRotationComponent,
                           struct StandAnimationComponent,
                           struct StateVectorComponent,
                           struct ActorRotationComponent,
                           struct OffsetsComponent,
                           class Optional<struct VanillaOffsetComponent>,
                           class Optional<struct PassengerRenderingRidingOffsetComponent>,
                           struct AABBShapeComponent,
                           class FlagComponent<struct CollidableMobNearFlag>,
                           struct DimensionTypeComponent,
                           struct MaxAutoStepComponent,
                           struct MoveInputComponent,
                           class FlagComponent<struct OnGroundFlag>,
                           struct SynchedActorDataComponent>,
                       struct Write<struct MoveRequestComponent, struct StateVectorComponent>,
                       struct AddRemove<>,
                       struct GlobalRead<
                           struct ExternalDataComponent,
                           struct LocalConstBlockSourceFactoryComponent,
                           struct LocalSpatialEntityFetcherFactoryComponent>,
                       struct GlobalWrite<>,
                       struct EntityFactoryT<>>&); // NOLINT
};
