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

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct CollidableMobFlag;
struct CollidableMobNearFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FallingBlockFlag;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MaxAutoStepComponent;
struct MobBodyRotationComponent;
struct MobFlag;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MoveCollisionSystem {

struct System {
public:
    // System inner types declare
    // clang-format off
    class SpatialQueries;
    // clang-format on

    // System inner types define
    class SpatialQueries {
    public:
        // prevent constructor by default
        SpatialQueries& operator=(SpatialQueries const&);
        SpatialQueries(SpatialQueries const&);
        SpatialQueries();

    public:
        // NOLINTBEGIN
        // symbol: ??1SpatialQueries@System@MoveCollisionSystem@@QEAA@XZ
        MCAPI ~SpatialQueries();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    System& operator=(System const&);
    System(System const&);
    System();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1System@MoveCollisionSystem@@UEAA@XZ
    virtual ~System() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@System@MoveCollisionSystem@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UCollidableMobFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UMaxAutoStepComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@@@U?$Write@UMoveRequestComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@ULocalSpatialEntityFetcherFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                          class FlagComponent<struct CollidableMobFlag>,
                          class FlagComponent<struct FallingBlockFlag>>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct MovementAbilitiesComponent,
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct PassengerComponent,
                          struct ActorGameTypeComponent,
                          struct ActorDataFlagComponent,
                          struct VehicleComponent,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent,
                          struct DimensionTypeComponent,
                          struct MaxAutoStepComponent,
                          class FlagComponent<struct CollidableMobNearFlag>>,
                      struct Write<struct MoveRequestComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<
                          struct ExternalDataComponent,
                          struct LocalConstBlockSourceFactoryComponent,
                          struct LocalSpatialEntityFetcherFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@System@MoveCollisionSystem@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UCollidableMobFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UMaxAutoStepComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@@@U?$Write@UMoveRequestComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@ULocalSpatialEntityFetcherFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct CollidableMobFlag>, class FlagComponent<struct FallingBlockFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct DimensionTypeComponent, struct MaxAutoStepComponent, class FlagComponent<struct CollidableMobNearFlag>>, struct Write<struct MoveRequestComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol:
    // ?createViews@System@MoveCollisionSystem@@SA@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UCollidableMobFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UDimensionTypeComponent@@UMaxAutoStepComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@@@U?$Write@UMoveRequestComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@ULocalSpatialEntityFetcherFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    MCAPI static auto createViews(class StrictExecutionContext<
                                  struct Filter<
                                      class FlagComponent<struct CanStandOnSnowFlag>,
                                      class FlagComponent<struct HasLightweightFamilyFlag>,
                                      class FlagComponent<struct HorseFlag>,
                                      class FlagComponent<struct MobFlag>,
                                      class FlagComponent<struct ParrotFlag>,
                                      struct VehicleComponent,
                                      class FlagComponent<struct CamelFlag>,
                                      class FlagComponent<struct PlayerComponentFlag>,
                                      class FlagComponent<struct CollidableMobFlag>,
                                      class FlagComponent<struct FallingBlockFlag>>,
                                  struct Read<
                                      struct AABBShapeComponent,
                                      struct MovementAbilitiesComponent,
                                      struct ActorTypeComponent,
                                      struct FallDistanceComponent,
                                      struct PassengerComponent,
                                      struct ActorGameTypeComponent,
                                      struct ActorDataFlagComponent,
                                      struct VehicleComponent,
                                      struct ActorRotationComponent,
                                      struct MobBodyRotationComponent,
                                      struct RenderRotationComponent,
                                      struct StandAnimationComponent,
                                      struct OffsetsComponent,
                                      struct VanillaOffsetComponent,
                                      struct PassengerRenderingRidingOffsetComponent,
                                      struct DimensionTypeComponent,
                                      struct MaxAutoStepComponent,
                                      class FlagComponent<struct CollidableMobNearFlag>>,
                                  struct Write<struct MoveRequestComponent>,
                                  struct AddRemove<>,
                                  struct GlobalRead<
                                      struct ExternalDataComponent,
                                      struct LocalConstBlockSourceFactoryComponent,
                                      struct LocalSpatialEntityFetcherFactoryComponent>,
                                  struct GlobalWrite<>,
                                  struct EntityFactoryT<>>&);

    // NOLINTEND
};

}; // namespace MoveCollisionSystem
