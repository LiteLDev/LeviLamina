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

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededFlag;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerComponentFlag;
struct MobBodyRotationComponent;
struct MobFlag;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace PlayerMoveSystemsImpl {

struct LocalPlayerFilterAutoJumpInternal {
public:
    // prevent constructor by default
    LocalPlayerFilterAutoJumpInternal& operator=(LocalPlayerFilterAutoJumpInternal const&);
    LocalPlayerFilterAutoJumpInternal(LocalPlayerFilterAutoJumpInternal const&);
    LocalPlayerFilterAutoJumpInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@UEAA@XZ
    virtual ~LocalPlayerFilterAutoJumpInternal() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UMovementAttributesComponent@@UDimensionTypeComponent@@UOnGroundFlagComponent@@UStateVectorComponent@@@@U?$Write@UMoveInputComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                          class FlagComponent<struct LocalPlayerComponentFlag>>,
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
                          struct MovementAttributesComponent,
                          struct DimensionTypeComponent,
                          struct OnGroundFlagComponent,
                          struct StateVectorComponent>,
                      struct Write<struct MoveInputComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UMovementAttributesComponent@@UDimensionTypeComponent@@UOnGroundFlagComponent@@UStateVectorComponent@@@@U?$Write@UMoveInputComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct MovementAttributesComponent, struct DimensionTypeComponent, struct OnGroundFlagComponent, struct StateVectorComponent>, struct Write<struct MoveInputComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol:
    // ?commonTick@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@QEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UMovementAttributesComponent@@UDimensionTypeComponent@@UOnGroundFlagComponent@@UStateVectorComponent@@@@U?$Write@UMoveInputComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@PEAVStrictEntityContext@@@Z
    MCAPI void commonTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct MovementAttributesComponent, struct DimensionTypeComponent, struct OnGroundFlagComponent, struct StateVectorComponent>, struct Write<struct MoveInputComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext*);

    // symbol:
    // ?_setJumpingIfPlayerCanAutoJump@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@SAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@AEBUMovementAttributesComponent@@AEBUStateVectorComponent@@AEBUActorDataFlagComponent@@AEAUMoveInputComponent@@V?$Optional@$$CBUOnGroundFlagComponent@@@@V?$Optional@$$CBUPassengerComponent@@@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UMovementAttributesComponent@@UDimensionTypeComponent@@UOnGroundFlagComponent@@UStateVectorComponent@@@@U?$Write@UMoveInputComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void
    _setJumpingIfPlayerCanAutoJump(class StrictEntityContext const&, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct MovementAttributesComponent const&, struct StateVectorComponent const&, struct ActorDataFlagComponent const&, struct MoveInputComponent&, class Optional<struct OnGroundFlagComponent const>, class Optional<struct PassengerComponent const>, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct MovementAttributesComponent, struct DimensionTypeComponent, struct OnGroundFlagComponent, struct StateVectorComponent>, struct Write<struct MoveInputComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class IConstBlockSource const&);

    // NOLINTEND
};

}; // namespace PlayerMoveSystemsImpl
