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
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct AbilitiesComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlag;
struct CanStandOnSnowFlag;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlag;
struct HorseFlag;
struct LavaSlimeJumpRequestFlag;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerJumpRequestFlag;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlag;
struct MobJumpComponent;
struct OffsetsComponent;
struct OtherJumpRequestFlag;
struct ParrotFlag;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerActionComponent;
struct PlayerComponentFlag;
struct RenderRotationComponent;
struct SquidJumpRequestFlag;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TriggerJumpRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

namespace MobJumpFromGroundSystemImpl {

struct JumpFromGroundSystem {

public:
    // prevent constructor by default
    JumpFromGroundSystem& operator=(JumpFromGroundSystem const&) = delete;
    JumpFromGroundSystem(JumpFromGroundSystem const&)            = delete;
    JumpFromGroundSystem()                                       = delete;

public:
    // NOLINTBEGIN
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
     * ?tick\@JumpFromGroundSystem\@MobJumpFromGroundSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerJumpRequestFlag\@\@\@\@V?$FlagComponent\@ULavaSlimeJumpRequestFlag\@\@\@\@V?$FlagComponent\@USquidJumpRequestFlag\@\@\@\@V?$FlagComponent\@UOtherJumpRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UMobEffectsComponent\@\@USynchedActorDataComponent\@\@VJumpControlComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UMobJumpComponent\@\@UStateVectorComponent\@\@UPlayerActionComponent\@\@\@\@U?$AddRemove\@UTriggerJumpRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
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
                          class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                          class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                          class FlagComponent<struct SquidJumpRequestFlag>,
                          class FlagComponent<struct OtherJumpRequestFlag>>,
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
                          struct OffsetsComponent,
                          class Optional<struct VanillaOffsetComponent>,
                          class Optional<struct PassengerRenderingRidingOffsetComponent>,
                          struct AABBShapeComponent,
                          struct ActorRotationComponent,
                          struct MobEffectsComponent,
                          struct SynchedActorDataComponent,
                          class JumpControlComponent,
                          struct DimensionTypeComponent>,
                      struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>,
                      struct AddRemove<struct TriggerJumpRequestComponent>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
    /**
     * @vftbl 5
     * @symbol
     * ?singleTick\@JumpFromGroundSystem\@MobJumpFromGroundSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerJumpRequestFlag\@\@\@\@V?$FlagComponent\@ULavaSlimeJumpRequestFlag\@\@\@\@V?$FlagComponent\@USquidJumpRequestFlag\@\@\@\@V?$FlagComponent\@UOtherJumpRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UMobEffectsComponent\@\@USynchedActorDataComponent\@\@VJumpControlComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UMobJumpComponent\@\@UStateVectorComponent\@\@UPlayerActionComponent\@\@\@\@U?$AddRemove\@UTriggerJumpRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct LocalPlayerJumpRequestFlag>, class FlagComponent<struct LavaSlimeJumpRequestFlag>, class FlagComponent<struct SquidJumpRequestFlag>, class FlagComponent<struct OtherJumpRequestFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct OffsetsComponent, class Optional<struct VanillaOffsetComponent>, class Optional<struct PassengerRenderingRidingOffsetComponent>, struct AABBShapeComponent, struct ActorRotationComponent, struct MobEffectsComponent, struct SynchedActorDataComponent, class JumpControlComponent, struct DimensionTypeComponent>, struct Write<struct MobJumpComponent, struct StateVectorComponent, struct PlayerActionComponent>, struct AddRemove<struct TriggerJumpRequestComponent>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);
    /**
     * @symbol
     * ?createViews\@JumpFromGroundSystem\@MobJumpFromGroundSystemImpl\@\@SA\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerJumpRequestFlag\@\@\@\@V?$FlagComponent\@ULavaSlimeJumpRequestFlag\@\@\@\@V?$FlagComponent\@USquidJumpRequestFlag\@\@\@\@V?$FlagComponent\@UOtherJumpRequestFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UOffsetsComponent\@\@V?$Optional\@UVanillaOffsetComponent\@\@\@\@V?$Optional\@UPassengerRenderingRidingOffsetComponent\@\@\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UMobEffectsComponent\@\@USynchedActorDataComponent\@\@VJumpControlComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UMobJumpComponent\@\@UStateVectorComponent\@\@UPlayerActionComponent\@\@\@\@U?$AddRemove\@UTriggerJumpRequestComponent\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    MCAPI static createViews(class StrictExecutionContext<
                             struct Filter<
                                 class FlagComponent<struct CanStandOnSnowFlag>,
                                 class FlagComponent<struct HasLightweightFamilyFlag>,
                                 class FlagComponent<struct HorseFlag>,
                                 class FlagComponent<struct MobFlag>,
                                 class FlagComponent<struct ParrotFlag>,
                                 struct VehicleComponent,
                                 class FlagComponent<struct CamelFlag>,
                                 class FlagComponent<struct PlayerComponentFlag>,
                                 class FlagComponent<struct LocalPlayerJumpRequestFlag>,
                                 class FlagComponent<struct LavaSlimeJumpRequestFlag>,
                                 class FlagComponent<struct SquidJumpRequestFlag>,
                                 class FlagComponent<struct OtherJumpRequestFlag>>,
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
                                 struct OffsetsComponent,
                                 class Optional<struct VanillaOffsetComponent>,
                                 class Optional<struct PassengerRenderingRidingOffsetComponent>,
                                 struct AABBShapeComponent,
                                 struct ActorRotationComponent,
                                 struct MobEffectsComponent,
                                 struct SynchedActorDataComponent,
                                 class JumpControlComponent,
                                 struct DimensionTypeComponent>,
                             struct Write<
                                 struct MobJumpComponent,
                                 struct StateVectorComponent,
                                 struct PlayerActionComponent>,
                             struct AddRemove<struct TriggerJumpRequestComponent>,
                             struct GlobalRead<
                                 struct ExternalDataComponent,
                                 struct LocalConstBlockSourceFactoryComponent>,
                             struct GlobalWrite<>,
                             struct EntityFactoryT<>>&);
    // NOLINTEND
};

}; // namespace MobJumpFromGroundSystemImpl
