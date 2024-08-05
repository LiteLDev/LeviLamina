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
    // vIndex: 0
    virtual ~LocalPlayerFilterAutoJumpInternal() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
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

    // vIndex: 6
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct MovementAttributesComponent, struct DimensionTypeComponent, struct OnGroundFlagComponent, struct StateVectorComponent>, struct Write<struct MoveInputComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    MCAPI void commonTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct MovementAttributesComponent, struct DimensionTypeComponent, struct OnGroundFlagComponent, struct StateVectorComponent>, struct Write<struct MoveInputComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext*);

    MCAPI static void
    _setJumpingIfPlayerCanAutoJump(class StrictEntityContext const&, struct AABBShapeComponent const&, struct ActorRotationComponent const&, struct MovementAttributesComponent const&, struct StateVectorComponent const&, struct ActorDataFlagComponent const&, struct MoveInputComponent&, class Optional<struct OnGroundFlagComponent const>, class Optional<struct PassengerComponent const>, class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct PassengerComponent, struct ActorGameTypeComponent, struct ActorDataFlagComponent, struct VehicleComponent, struct ActorRotationComponent, struct MobBodyRotationComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct OffsetsComponent, struct VanillaOffsetComponent, struct PassengerRenderingRidingOffsetComponent, struct MovementAttributesComponent, struct DimensionTypeComponent, struct OnGroundFlagComponent, struct StateVectorComponent>, struct Write<struct MoveInputComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class IConstBlockSource const&);

    // NOLINTEND
};

}; // namespace PlayerMoveSystemsImpl
