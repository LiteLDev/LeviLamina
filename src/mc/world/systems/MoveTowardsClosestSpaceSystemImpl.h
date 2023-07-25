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

struct MoveTowardsClosestSpaceSystemImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSCLOSESTSPACESYSTEMIMPL
public:
    MoveTowardsClosestSpaceSystemImpl& operator=(MoveTowardsClosestSpaceSystemImpl const&) = delete;
    MoveTowardsClosestSpaceSystemImpl(MoveTowardsClosestSpaceSystemImpl const&)            = delete;
    MoveTowardsClosestSpaceSystemImpl()                                                    = delete;
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
     * ?tick\@MoveTowardsClosestSpaceSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPassengerComponent\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@USynchedActorDataComponent\@\@UAABBShapeComponent\@\@UOnewayPhysicsBlocksComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UMoveTowardsClosestSpaceFlag\@\@\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
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
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          struct PassengerComponent>,
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
                          struct SynchedActorDataComponent,
                          struct AABBShapeComponent,
                          struct OnewayPhysicsBlocksComponent,
                          struct DimensionTypeComponent>,
                      struct Write<struct StateVectorComponent>,
                      struct AddRemove<class FlagComponent<struct MoveTowardsClosestSpaceFlag>>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
    /**
     * @symbol
     * ?doTick\@MoveTowardsClosestSpaceSystemImpl\@\@SAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@AEBUAABBShapeComponent\@\@AEBUOnewayPhysicsBlocksComponent\@\@AEAUStateVectorComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPassengerComponent\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@USynchedActorDataComponent\@\@UAABBShapeComponent\@\@UOnewayPhysicsBlocksComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UMoveTowardsClosestSpaceFlag\@\@\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    doTick(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct AABBShapeComponent const&, struct OnewayPhysicsBlocksComponent const&, struct StateVectorComponent&, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, struct PassengerComponent>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct ActorRotationComponent, struct OffsetsComponent, class Optional<struct VanillaOffsetComponent>, class Optional<struct PassengerRenderingRidingOffsetComponent>, struct SynchedActorDataComponent, struct AABBShapeComponent, struct OnewayPhysicsBlocksComponent, struct DimensionTypeComponent>, struct Write<struct StateVectorComponent>, struct AddRemove<class FlagComponent<struct MoveTowardsClosestSpaceFlag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class IConstBlockSource const&);
};
