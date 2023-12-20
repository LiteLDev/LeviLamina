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
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct AbilitiesComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct AttributesComponent;
struct AutoJumpingFlag;
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
struct MoveRequestComponent;
struct OffsetsComponent;
struct OnGroundFlag;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
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

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoJumpingFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UMoveRequestComponent@@@@U?$Read@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UAABBShapeComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UActorRotationComponent@@UAttributesComponent@@UDimensionTypeComponent@@UMoveInputComponent@@V?$FlagComponent@UOnGroundFlag@@@@UStateVectorComponent@@USynchedActorDataComponent@@UPassengerComponent@@@@U?$Write@$$V@@U?$AddRemove@V?$FlagComponent@UAutoJumpingFlag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                          class FlagComponent<struct AutoJumpingFlag>,
                          class FlagComponent<struct LocalPlayerComponentFlag>,
                          struct MoveRequestComponent>,
                      struct Read<
                          struct AbilitiesComponent,
                          struct ActorTypeComponent,
                          struct FallDistanceComponent,
                          struct ActorGameTypeComponent,
                          struct VehicleComponent,
                          struct MobBodyRotationComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct AABBShapeComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent,
                          struct ActorRotationComponent,
                          struct AttributesComponent,
                          struct DimensionTypeComponent,
                          struct MoveInputComponent,
                          class FlagComponent<struct OnGroundFlag>,
                          struct StateVectorComponent,
                          struct SynchedActorDataComponent,
                          struct PassengerComponent>,
                      struct Write<>,
                      struct AddRemove<class FlagComponent<struct AutoJumpingFlag>>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoJumpingFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UMoveRequestComponent@@@@U?$Read@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UAABBShapeComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UActorRotationComponent@@UAttributesComponent@@UDimensionTypeComponent@@UMoveInputComponent@@V?$FlagComponent@UOnGroundFlag@@@@UStateVectorComponent@@USynchedActorDataComponent@@UPassengerComponent@@@@U?$Write@$$V@@U?$AddRemove@V?$FlagComponent@UAutoJumpingFlag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoJumpingFlag>, class FlagComponent<struct LocalPlayerComponentFlag>, struct MoveRequestComponent>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct AABBShapeComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct ActorRotationComponent, struct AttributesComponent, struct DimensionTypeComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct StateVectorComponent, struct SynchedActorDataComponent, struct PassengerComponent>, struct Write<>, struct AddRemove<class FlagComponent<struct AutoJumpingFlag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol:
    // ?commonTick@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@QEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoJumpingFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UMoveRequestComponent@@@@U?$Read@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UAABBShapeComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UActorRotationComponent@@UAttributesComponent@@UDimensionTypeComponent@@UMoveInputComponent@@V?$FlagComponent@UOnGroundFlag@@@@UStateVectorComponent@@USynchedActorDataComponent@@UPassengerComponent@@@@U?$Write@$$V@@U?$AddRemove@V?$FlagComponent@UAutoJumpingFlag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@PEAVStrictEntityContext@@@Z
    MCAPI void commonTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoJumpingFlag>, class FlagComponent<struct LocalPlayerComponentFlag>, struct MoveRequestComponent>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct AABBShapeComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct ActorRotationComponent, struct AttributesComponent, struct DimensionTypeComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct StateVectorComponent, struct SynchedActorDataComponent, struct PassengerComponent>, struct Write<>, struct AddRemove<class FlagComponent<struct AutoJumpingFlag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext*);

    // symbol:
    // ?_determineIfPlayerCanAutoJump@LocalPlayerFilterAutoJumpInternal@PlayerMoveSystemsImpl@@SAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@AEBUAttributesComponent@@AEBUMoveInputComponent@@AEBUStateVectorComponent@@AEBUSynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUPassengerComponent@@@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UCamelFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoJumpingFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@UMoveRequestComponent@@@@U?$Read@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UActorGameTypeComponent@@UVehicleComponent@@UMobBodyRotationComponent@@URenderRotationComponent@@UStandAnimationComponent@@UAABBShapeComponent@@UOffsetsComponent@@UVanillaOffsetComponent@@UPassengerRenderingRidingOffsetComponent@@UActorRotationComponent@@UAttributesComponent@@UDimensionTypeComponent@@UMoveInputComponent@@V?$FlagComponent@UOnGroundFlag@@@@UStateVectorComponent@@USynchedActorDataComponent@@UPassengerComponent@@@@U?$Write@$$V@@U?$AddRemove@V?$FlagComponent@UAutoJumpingFlag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAV?$EntityModifier@V?$FlagComponent@UAutoJumpingFlag@@@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void _determineIfPlayerCanAutoJump(class StrictEntityContext const&, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct AttributesComponent const&, struct MoveInputComponent const&, struct StateVectorComponent const&, struct SynchedActorDataComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct PassengerComponent const>, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoJumpingFlag>, class FlagComponent<struct LocalPlayerComponentFlag>, struct MoveRequestComponent>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct AABBShapeComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct ActorRotationComponent, struct AttributesComponent, struct DimensionTypeComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct StateVectorComponent, struct SynchedActorDataComponent, struct PassengerComponent>, struct Write<>, struct AddRemove<class FlagComponent<struct AutoJumpingFlag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class EntityModifier<class FlagComponent<struct AutoJumpingFlag>>&, class IConstBlockSource const&);

    // NOLINTEND
};

}; // namespace PlayerMoveSystemsImpl
