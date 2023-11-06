#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

class AutoStepSystem {
public:
    // prevent constructor by default
    AutoStepSystem& operator=(AutoStepSystem const&);
    AutoStepSystem(AutoStepSystem const&);
    AutoStepSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AutoStepSystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@AutoStepSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoStepRequestFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@USynchedActorDataComponent@@V?$FlagComponent@UCollidableMobFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UStateVectorComponent@@USynchedActorDataComponent@@UAABBShapeComponent@@UActorRotationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UMaxAutoStepComponent@@@@U?$Write@UAABBShapeComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@UMoveRequestComponent@@USlideOffsetComponent@@USubBBsComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@ULocalSpatialEntityFetcherFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                          class FlagComponent<struct AutoStepRequestFlag>,
                          class FlagComponent<struct FallingBlockFlag>,
                          struct SynchedActorDataComponent,
                          class FlagComponent<struct CollidableMobFlag>,
                          class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                          struct SynchedActorDataComponent,
                          struct AABBShapeComponent,
                          struct ActorRotationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent,
                          struct DimensionTypeComponent,
                          struct MaxAutoStepComponent>,
                      struct Write<
                          struct AABBShapeComponent,
                          class FlagComponent<struct CollidableMobNearFlag>,
                          struct MoveRequestComponent,
                          struct SlideOffsetComponent,
                          struct SubBBsComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<
                          struct ExternalDataComponent,
                          struct LocalConstBlockSourceFactoryComponent,
                          struct LocalSpatialEntityFetcherFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@AutoStepSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoStepRequestFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@USynchedActorDataComponent@@V?$FlagComponent@UCollidableMobFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UStateVectorComponent@@USynchedActorDataComponent@@UAABBShapeComponent@@UActorRotationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UMaxAutoStepComponent@@@@U?$Write@UAABBShapeComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@UMoveRequestComponent@@USlideOffsetComponent@@USubBBsComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@ULocalSpatialEntityFetcherFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoStepRequestFlag>, class FlagComponent<struct FallingBlockFlag>, struct SynchedActorDataComponent, class FlagComponent<struct CollidableMobFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct DimensionTypeComponent, struct MaxAutoStepComponent>, struct Write<struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct MoveRequestComponent, struct SlideOffsetComponent, struct SubBBsComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol: ?createSystem@AutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
