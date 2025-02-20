#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BreathableComponent;
class BuoyancyComponent;
class CollisionBoxComponent;
class DimensionStateComponent;
class FreezingComponent;
class HitboxComponent;
class JumpControlComponent;
class LoadingStateComponent;
class NavigationComponent;
class WaterMovementComponent;
struct AABBShapeComponent;
struct ActionOrStopComponent;
struct ActorAddedFlagComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorGameTypeComponent;
struct ActorHeadRotationComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct ActorUniqueIDComponent;
struct AirSpeedComponent;
struct ArmorFlyEnabledFlagComponent;
struct AttributesComponent;
struct BlockClimberComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct BoatFlagComponent;
struct BoatMovementComponent;
struct BoatPaddleComponent;
struct CanStandOnSnowFlagComponent;
struct ChunkPositionComponent;
struct ClientInputLockComponent;
struct CollidableMobFlagComponent;
struct CollidableMobNearFlagComponent;
struct CollisionFlagComponent;
struct CurrentLocalMoveVelocityComponent;
struct DamageNearbyMobsComponent;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct FallDistanceComponent;
struct FallFlyTicksComponent;
struct FreezeImmuneFlagComponent;
struct FrictionModifierComponent;
struct HasTeleportedFlagComponent;
struct HorizontalCollisionFlagComponent;
struct HorseFlagComponent;
struct HorseStandCounterComponent;
struct InsideBlockComponent;
struct IsDeadFlagComponent;
struct JumpPendingScaleComponent;
struct JumpRidingScaleComponent;
struct JumpTicksComponent;
struct LocalMoveVelocityComponent;
struct LocalPlayerComponent;
struct MaxAutoStepComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MobHurtTimeComponent;
struct MobIsJumpingFlagComponent;
struct MobJumpComponent;
struct MobRotationComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct MovementEffectsComponent;
struct MovementInterpolatorComponent;
struct MovementSpeedComponent;
struct NeedSetPreviousPositionFlagComponent;
struct OffsetsComponent;
struct OnFireComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct PassengerYRotLimitComponent;
struct PassengersChangedFlagComponent;
struct PhysicsComponent;
struct PlayerComponent;
struct PlayerInputModeComponent;
struct PlayerIsSleepingFlagComponent;
struct PlayerLastPosComponent;
struct PlayerPositionModeComponent;
struct PrevPosRotSetThisTickFlagComponent;
struct PushedByComponent;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct RuntimeIDComponent;
struct ScanForDolphinTimerComponent;
struct SetMovingFlagRequestComponent;
struct SneakingComponent;
struct SoulSpeedEnchantFlagComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SwimAmountComponent;
struct SwimSpeedMultiplierComponent;
struct VRMoveAdjustAngleComponent;
struct VanillaClientGameplayComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
struct VerticalCollisionFlagComponent;
struct WalkDistComponent;
struct WasInLavaFlagComponent;
struct WasInWaterFlagComponent;
struct WasOnGroundFlagComponent;
struct WaterWalkSpeedEnchantComponent;
namespace MovementDataExtractionUtility { struct ImmutableMovementComponentsSnapshot; }
namespace MovementDataExtractionUtility { struct MovementSnapshotComponent; }
// clang-format on

namespace MovementDataExtractionUtility {

struct StorageStorage {
public:
    // StorageStorage inner types declare
    // clang-format off
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84, typename T85, typename T86, typename T87, typename T88, typename T89, typename T90, typename T91, typename T92, typename T93, typename T94, typename T95, typename T96, typename T97, typename T98, typename T99, typename T100, typename T101, typename T102, typename T103, typename T104, typename T105, typename T106, typename T107, typename T108, typename T109, typename T110> struct StorageTupleT;
    // clang-format on

    // StorageStorage inner types define
    template <
        typename T0,
        typename T1,
        typename T2,
        typename T3,
        typename T4,
        typename T5,
        typename T6,
        typename T7,
        typename T8,
        typename T9,
        typename T10,
        typename T11,
        typename T12,
        typename T13,
        typename T14,
        typename T15,
        typename T16,
        typename T17,
        typename T18,
        typename T19,
        typename T20,
        typename T21,
        typename T22,
        typename T23,
        typename T24,
        typename T25,
        typename T26,
        typename T27,
        typename T28,
        typename T29,
        typename T30,
        typename T31,
        typename T32,
        typename T33,
        typename T34,
        typename T35,
        typename T36,
        typename T37,
        typename T38,
        typename T39,
        typename T40,
        typename T41,
        typename T42,
        typename T43,
        typename T44,
        typename T45,
        typename T46,
        typename T47,
        typename T48,
        typename T49,
        typename T50,
        typename T51,
        typename T52,
        typename T53,
        typename T54,
        typename T55,
        typename T56,
        typename T57,
        typename T58,
        typename T59,
        typename T60,
        typename T61,
        typename T62,
        typename T63,
        typename T64,
        typename T65,
        typename T66,
        typename T67,
        typename T68,
        typename T69,
        typename T70,
        typename T71,
        typename T72,
        typename T73,
        typename T74,
        typename T75,
        typename T76,
        typename T77,
        typename T78,
        typename T79,
        typename T80,
        typename T81,
        typename T82,
        typename T83,
        typename T84,
        typename T85,
        typename T86,
        typename T87,
        typename T88,
        typename T89,
        typename T90,
        typename T91,
        typename T92,
        typename T93,
        typename T94,
        typename T95,
        typename T96,
        typename T97,
        typename T98,
        typename T99,
        typename T100,
        typename T101,
        typename T102,
        typename T103,
        typename T104,
        typename T105,
        typename T106,
        typename T107,
        typename T108,
        typename T109,
        typename T110>
    struct StorageTupleT {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 904> mUnk69c800;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageStorage& operator=(StorageStorage const&);
    StorageStorage(StorageStorage const&);
    StorageStorage();
};

} // namespace MovementDataExtractionUtility
