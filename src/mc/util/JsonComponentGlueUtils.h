#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/MoveToPOIGoalDefinition.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class AdmireItemGoal;
class BarterGoal;
class BaseMoveToBlockGoal;
class BaseMoveToGoal;
class BreedGoal;
class ChargeAttackGoal;
class CircleAroundAnchorGoal;
class ControlledByPlayerGoal;
class DragonFlamingGoal;
class DropItemForGoal;
class EatCarriedItemGoal;
class EatMobGoal;
class EntityContext;
class ExperienceRewardComponent;
class FindCoverGoal;
class FindMountGoal;
class FindUnderwaterTreasureGoal;
class FleeSunGoal;
class FloatGoal;
class FollowOwnerGoal;
class FollowParentGoal;
class GoAndGiveItemsToNoteblockGoal;
class GoAndGiveItemsToOwnerGoal;
class GoHomeGoal;
class GuardianAttackGoal;
class HarvestFarmBlockGoal;
class HideGoal;
class HoldGroundGoal;
class HopperComponent;
class HoverGoal;
class InspectBookshelfGoal;
class JumpAroundTargetGoal;
class JumpToBlockGoal;
class LayDownGoal;
class LayEggGoal;
class LookAtEntityGoal;
class LookAtPlayerGoal;
class LookAtTargetGoal;
class LookAtTradingPlayerGoal;
class MeleeAttackBaseGoal;
class MeleeAttackGoal;
class MeleeBoxAttackGoal;
class MingleGoal;
class Mob;
class MountPathingGoal;
class MoveAroundTargetGoal;
class MoveIndoorsGoal;
class MoveOutdoorsGoal;
class MoveThroughVillageGoal;
class MoveToLandGoal;
class MoveToLavaGoal;
class MoveToLiquidGoal;
class MoveToPOIGoal;
class MoveToRandomBlockGoal;
class MoveToVillageGoal;
class MoveToWaterGoal;
class MoveTowardsRestrictionGoal;
class MoveTowardsTargetGoal;
class NearestAttackableTargetGoal;
class OcelotAttackGoal;
class OcelotSitOnBlockGoal;
class OfferFlowerGoal;
class PetSleepWithOwnerGoal;
class PickupItemsGoal;
class PlayDeadGoal;
class PlayGoal;
class PlayerVehicleTamedGoal;
class RaidGardenGoal;
class RaiderCelebrationGoal;
class RamAttackGoal;
class RandomHoverGoal;
class RandomSearchAndDigGoal;
class RandomSitGoal;
class RandomStrollGoal;
class RoarGoal;
class SleepGoal;
class SlimeAttackGoal;
class SlimeFloatGoal;
class SlimeKeepOnJumpingGoal;
class SlimeRandomDirectionGoal;
class SniffGoal;
class SonicBoomGoal;
class StayNearNoteblockGoal;
class StompAttackGoal;
class StompEggGoal;
class StrollTowardsVillageGoal;
class SuspectTrackingComponent;
class SwimIdleGoal;
class SwimUpForBreathGoal;
class SwimWanderGoal;
class SwimWithEntityGoal;
class SwoopAttackGoal;
class TakeFlowerGoal;
class TargetGoal;
class TeleportToOwnerGoal;
class TimerActorFlagBaseGoal;
class TradeWithPlayerGoal;
class TransportItemsGoal;
class VillagerCelebrationGoal;
class WorkComposterGoal;
class WorkGoal;
struct AddRiderComponent;
struct ApplyKnockbackRulesComponent;
struct BlockClimberComponent;
struct BurnsInDaylightComponent;
struct CanJoinRaidComponent;
struct DimensionBoundComponent;
struct LegacyGoalDefinition;
struct OnEquipmentChangedComponent;
struct OutOfControlComponent;
struct PushableByEntityComponent;
struct SpawnOnDeathComponent;
struct TransientComponent;
struct VibrationDamperComponent;
struct VibrationListenerComponent;
namespace SharedTypes { struct BaseMoveToBlockGoalDefinition; }
namespace SharedTypes { struct BaseMoveToGoalDefinition; }
namespace SharedTypes { struct TargetGoalDefinition; }
namespace SharedTypes { struct TimerActorFlagBaseGoalDefinition; }
namespace SharedTypes::Beta { struct ApplyKnockbackRulesComponentDefinition; }
namespace SharedTypes::Beta { struct PushableByEntityDefinition; }
namespace SharedTypes::Legacy { struct ApplyKnockbackRulesComponentDefinition; }
namespace SharedTypes::v1_21_100 { struct ChargeAttackGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct CircleAroundAnchorGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct ControlledByPlayerGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct DragonFlamingGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct RoarGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeAttackGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeFloatGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeKeepOnJumpingGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeRandomDirectionGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SniffGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SonicBoomGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct StayNearNoteblockGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimIdleGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimWanderGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwoopAttackGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct MeleeAttackBaseGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
namespace SharedTypes::v1_21_130 { struct BurnsInDaylightComponentDefinition; }
namespace SharedTypes::v1_21_90 { struct BreedGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct ExperienceRewardComponentDefinition; }
namespace SharedTypes::v1_26_0 { struct GuardianAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtEntityGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtPlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtTargetGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtTradingPlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MeleeAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MeleeBoxAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MoveTowardsRestrictionGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct NearestAttackableTargetGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct StompAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct DropItemForGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct HarvestFarmBlockGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct InspectBookshelfGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToLandGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToLavaGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToLiquidGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToWaterGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct OcelotAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct OcelotSitOnBlockGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct OfferFlowerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayDeadGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaidGardenGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaiderCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RamAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RandomSearchAndDigGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct StompEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct SwimWithEntityGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TakeFlowerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TeleportToOwnerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TradeWithPlayerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct VillagerCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct WorkComposterGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct WorkGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct AdmireItemGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct BarterGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct BlockClimberComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct CanJoinRaidComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct DimensionBoundComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct EatCarriedItemGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FindCoverGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FindMountGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FindUnderwaterTreasureGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FleeSunGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FloatGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FollowOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FollowParentGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoAndGiveItemsToNoteblockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoAndGiveItemsToOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoHomeGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HideGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HoldGroundGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HopperComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct HoverGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct JumpAroundTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct JumpToBlockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct LayDownGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MingleGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MountPathingGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveAroundTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveIndoorsGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveOutdoorsGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveThroughVillageGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveToPOIGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveToRandomBlockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveToVillageGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveTowardsTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct OnEquipmentChangedDefinition; }
namespace SharedTypes::v1_26_20 { struct OutOfControlComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct PetSleepWithOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct PickupItemsGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct PlayerVehicleTamedGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct PushableByEntityDefinition; }
namespace SharedTypes::v1_26_20 { struct RandomHoverGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct RandomSitGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct RandomStrollGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct SleepGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct SpawnOnDeathComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct StrollTowardsVillageGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct SuspectTrackingComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct TransientComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct VibrationDamperComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct VibrationListenerComponentDefinition; }
// clang-format on

namespace JsonComponentGlueUtils {
// functions
// NOLINTBEGIN
MCNAPI ::POIType getPOITypeFromSharedType(::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType type);

MCNAPI void
initialize(::EntityContext&, ::BlockClimberComponent&, ::SharedTypes::v1_26_20::BlockClimberComponentDefinition const&);

MCNAPI void
initialize(::EntityContext&, ::CanJoinRaidComponent&, ::SharedTypes::v1_26_20::CanJoinRaidComponentDefinition const&);

MCNAPI void initialize(
    ::EntityContext&,
    ::DimensionBoundComponent&,
    ::SharedTypes::v1_26_20::DimensionBoundComponentDefinition const&
);

MCNAPI void
initialize(::EntityContext&, ::PushableByEntityComponent&, ::SharedTypes::v1_26_20::PushableByEntityDefinition const&);

MCNAPI void
initialize(::EntityContext&, ::TransientComponent&, ::SharedTypes::v1_26_20::TransientComponentDefinition const&);

MCNAPI void initialize(
    ::EntityContext&,
    ::VibrationDamperComponent&,
    ::SharedTypes::v1_26_20::VibrationDamperComponentDefinition const&
);

MCNAPI void initialize(::EntityContext&, ::HopperComponent&, ::SharedTypes::v1_26_20::HopperComponentDefinition const&);

MCNAPI void initialize(
    ::EntityContext&,
    ::SuspectTrackingComponent&,
    ::SharedTypes::v1_26_20::SuspectTrackingComponentDefinition const&
);

MCNAPI void initialize(
    ::EntityContext&,
    ::SpawnOnDeathComponent&                                 component,
    ::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::AddRiderComponent&                                         component,
    ::SharedTypes::v1_21_130::AddRiderComponentDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::AdmireItemGoal&                                        goal,
    ::SharedTypes::v1_26_20::AdmireItemGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::BarterGoal& goal, ::SharedTypes::v1_26_20::BarterGoalDefinition const& definition);

MCNAPI void initialize(::EntityContext&, ::BreedGoal& goal, ::SharedTypes::v1_21_90::BreedGoalDefinition definition);

MCNAPI void
initialize(::EntityContext&, ::ChargeAttackGoal& goal, ::SharedTypes::v1_21_100::ChargeAttackGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::CircleAroundAnchorGoal&                                  goal,
    ::SharedTypes::v1_21_100::CircleAroundAnchorGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::ControlledByPlayerGoal&                                  goal,
    ::SharedTypes::v1_21_100::ControlledByPlayerGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::DragonFlamingGoal&                                  goal,
    ::SharedTypes::v1_21_100::DragonFlamingGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::EatCarriedItemGoal&                                        goal,
    ::SharedTypes::v1_26_20::EatCarriedItemGoalDefinition const& definition
);

MCNAPI void initialize(::EntityContext&, ::EatMobGoal& goal, ::SharedTypes::v1_21_100::EatMobGoalDefinition definition);

MCNAPI void
initialize(::EntityContext&, ::FindCoverGoal& goal, ::SharedTypes::v1_26_20::FindCoverGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::FindMountGoal& goal, ::SharedTypes::v1_26_20::FindMountGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::FindUnderwaterTreasureGoal&                                        goal,
    ::SharedTypes::v1_26_20::FindUnderwaterTreasureGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::FleeSunGoal& goal, ::SharedTypes::v1_26_20::FleeSunGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::FloatGoal& goal, ::SharedTypes::v1_26_20::FloatGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::FollowOwnerGoal&                                        goal,
    ::SharedTypes::v1_26_20::FollowOwnerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::FollowParentGoal&                                        goal,
    ::SharedTypes::v1_26_20::FollowParentGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::GoAndGiveItemsToNoteblockGoal&                                        goal,
    ::SharedTypes::v1_26_20::GoAndGiveItemsToNoteblockGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::GoAndGiveItemsToOwnerGoal&                                        goal,
    ::SharedTypes::v1_26_20::GoAndGiveItemsToOwnerGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::GoHomeGoal& goal, ::SharedTypes::v1_26_20::GoHomeGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::GuardianAttackGoal&                                       goal,
    ::SharedTypes::v1_26_0::GuardianAttackGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::HarvestFarmBlockGoal&                                        goal,
    ::SharedTypes::v1_26_10::HarvestFarmBlockGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::HideGoal& goal, ::SharedTypes::v1_26_20::HideGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::HoldGroundGoal&                                        goal,
    ::SharedTypes::v1_26_20::HoldGroundGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::HoverGoal& goal, ::SharedTypes::v1_26_20::HoverGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::InspectBookshelfGoal&                                        goal,
    ::SharedTypes::v1_26_10::InspectBookshelfGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::JumpAroundTargetGoal&                                        goal,
    ::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::JumpToBlockGoal&                                        goal,
    ::SharedTypes::v1_26_20::JumpToBlockGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::LayDownGoal& goal, ::SharedTypes::v1_26_20::LayDownGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::LayEggGoal& goal, ::SharedTypes::v1_26_10::LayEggGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::MeleeAttackGoal&                                       goal,
    ::SharedTypes::v1_26_0::MeleeAttackGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MeleeBoxAttackGoal&                                       goal,
    ::SharedTypes::v1_26_0::MeleeBoxAttackGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::MingleGoal& goal, ::SharedTypes::v1_26_20::MingleGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::MountPathingGoal&                                        goal,
    ::SharedTypes::v1_26_20::MountPathingGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveAroundTargetGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveAroundTargetGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveIndoorsGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveIndoorsGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveOutdoorsGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveOutdoorsGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveThroughVillageGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveThroughVillageGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveToLandGoal&                                        goal,
    ::SharedTypes::v1_26_10::MoveToLandGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveToLavaGoal&                                        goal,
    ::SharedTypes::v1_26_10::MoveToLavaGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveToLiquidGoal&                                        goal,
    ::SharedTypes::v1_26_10::MoveToLiquidGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::MoveToPOIGoal& goal, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveToRandomBlockGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveToRandomBlockGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveToVillageGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveToVillageGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveToWaterGoal&                                        goal,
    ::SharedTypes::v1_26_10::MoveToWaterGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveTowardsRestrictionGoal&                                       goal,
    ::SharedTypes::v1_26_0::MoveTowardsRestrictionGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::MoveTowardsTargetGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveTowardsTargetGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::OcelotAttackGoal&                                        goal,
    ::SharedTypes::v1_26_10::OcelotAttackGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::OcelotSitOnBlockGoal&                                        goal,
    ::SharedTypes::v1_26_10::OcelotSitOnBlockGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::OfferFlowerGoal&                                        goal,
    ::SharedTypes::v1_26_10::OfferFlowerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::PetSleepWithOwnerGoal&                                        goal,
    ::SharedTypes::v1_26_20::PetSleepWithOwnerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::PickupItemsGoal&                                        goal,
    ::SharedTypes::v1_26_20::PickupItemsGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::PlayDeadGoal& goal, ::SharedTypes::v1_26_10::PlayDeadGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::PlayGoal& goal, ::SharedTypes::v1_26_10::PlayGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::PlayerVehicleTamedGoal&                                        goal,
    ::SharedTypes::v1_26_20::PlayerVehicleTamedGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::RaidGardenGoal&                                        goal,
    ::SharedTypes::v1_26_10::RaidGardenGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::RaiderCelebrationGoal&                                        goal,
    ::SharedTypes::v1_26_10::RaiderCelebrationGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::RamAttackGoal& goal, ::SharedTypes::v1_26_10::RamAttackGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::RandomHoverGoal&                                        goal,
    ::SharedTypes::v1_26_20::RandomHoverGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::RandomSearchAndDigGoal&                                        goal,
    ::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::RandomSitGoal& goal, ::SharedTypes::v1_26_20::RandomSitGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::RandomStrollGoal&                                        goal,
    ::SharedTypes::v1_26_20::RandomStrollGoalDefinition const& definition
);

MCNAPI void initialize(::EntityContext&, ::RoarGoal& goal, ::SharedTypes::v1_21_110::RoarGoalDefinition definition);

MCNAPI void
initialize(::EntityContext&, ::SleepGoal& goal, ::SharedTypes::v1_26_20::SleepGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::SlimeAttackGoal& goal, ::SharedTypes::v1_21_110::SlimeAttackGoalDefinition definition);

MCNAPI void
initialize(::EntityContext&, ::SlimeFloatGoal& goal, ::SharedTypes::v1_21_110::SlimeFloatGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::SlimeKeepOnJumpingGoal&                                  goal,
    ::SharedTypes::v1_21_110::SlimeKeepOnJumpingGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::SlimeRandomDirectionGoal&                                  goal,
    ::SharedTypes::v1_21_110::SlimeRandomDirectionGoalDefinition definition
);

MCNAPI void initialize(::EntityContext&, ::SniffGoal& goal, ::SharedTypes::v1_21_110::SniffGoalDefinition definition);

MCNAPI void
initialize(::EntityContext&, ::SonicBoomGoal& goal, ::SharedTypes::v1_21_110::SonicBoomGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::StayNearNoteblockGoal&                                  goal,
    ::SharedTypes::v1_21_110::StayNearNoteblockGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::StompAttackGoal&                                       goal,
    ::SharedTypes::v1_26_0::StompAttackGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::StompEggGoal& goal, ::SharedTypes::v1_26_10::StompEggGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::StrollTowardsVillageGoal&                                        goal,
    ::SharedTypes::v1_26_20::StrollTowardsVillageGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::SwimIdleGoal& goal, ::SharedTypes::v1_21_110::SwimIdleGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimUpForBreathGoal&                                  goal,
    ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition definition
);

MCNAPI void
initialize(::EntityContext&, ::SwimWanderGoal& goal, ::SharedTypes::v1_21_110::SwimWanderGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimWithEntityGoal&                                        goal,
    ::SharedTypes::v1_26_10::SwimWithEntityGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::SwoopAttackGoal& goal, ::SharedTypes::v1_21_110::SwoopAttackGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::TakeFlowerGoal&                                        goal,
    ::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TeleportToOwnerGoal&                                        goal,
    ::SharedTypes::v1_26_10::TeleportToOwnerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TimerActorFlagBaseGoal&                              goal,
    ::SharedTypes::TimerActorFlagBaseGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TradeWithPlayerGoal&                                        goal,
    ::SharedTypes::v1_26_10::TradeWithPlayerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TransportItemsGoal&                                         goal,
    ::SharedTypes::v1_21_100::TransportItemsGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::VillagerCelebrationGoal&                                        goal,
    ::SharedTypes::v1_26_10::VillagerCelebrationGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::WorkComposterGoal&                                        goal,
    ::SharedTypes::v1_26_10::WorkComposterGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::WorkGoal& goal, ::SharedTypes::v1_26_10::WorkGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::ApplyKnockbackRulesComponent&                                    runtimeComponent,
    ::SharedTypes::Beta::ApplyKnockbackRulesComponentDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::ApplyKnockbackRulesComponent&                                      runtimeComponent,
    ::SharedTypes::Legacy::ApplyKnockbackRulesComponentDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::BurnsInDaylightComponent&                                         runtimeComponent,
    ::SharedTypes::v1_21_130::BurnsInDaylightComponentDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::OnEquipmentChangedComponent&                               runtimeComponent,
    ::SharedTypes::v1_26_20::OnEquipmentChangedDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::PushableByEntityComponent&                           runtimeComponent,
    ::SharedTypes::Beta::PushableByEntityDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::ExperienceRewardComponent&                                       runtimeComponent,
    ::SharedTypes::v1_26_0::ExperienceRewardComponentDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext& entity,
    ::OutOfControlComponent&,
    ::SharedTypes::v1_26_20::OutOfControlComponentDefinition const&
);

MCNAPI void initialize(
    ::EntityContext&              entity,
    ::VibrationListenerComponent& component,
    ::SharedTypes::v1_26_20::VibrationListenerComponentDefinition const&
);

MCNAPI void initialize(
    ::EntityContext&                                          entity,
    ::LookAtEntityGoal&                                       goal,
    ::SharedTypes::v1_26_0::LookAtEntityGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&                                          entity,
    ::LookAtPlayerGoal&                                       goal,
    ::SharedTypes::v1_26_0::LookAtPlayerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&                                          entity,
    ::LookAtTargetGoal&                                       goal,
    ::SharedTypes::v1_26_0::LookAtTargetGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&                                                 entity,
    ::LookAtTradingPlayerGoal&                                       goal,
    ::SharedTypes::v1_26_0::LookAtTradingPlayerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&                                                     entity,
    ::NearestAttackableTargetGoal&                                       goal,
    ::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&   goal,
    ::DropItemForGoal& definition,
    ::SharedTypes::v1_26_10::DropItemForGoalDefinition const&
);

MCNAPI void initializeBaseMoveTo(::BaseMoveToGoal& goal, ::SharedTypes::BaseMoveToGoalDefinition const& definition);

MCNAPI void
initializeBaseMoveToBlock(::BaseMoveToBlockGoal& goal, ::SharedTypes::BaseMoveToBlockGoalDefinition const& definition);

MCNAPI void initializeMeleeAttackBaseGoal(
    ::MeleeAttackBaseGoal&                                         goal,
    ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const& definition
);

MCNAPI void
initializeMeleeAttackGoal(::MeleeAttackGoal& goal, ::SharedTypes::v1_26_0::MeleeAttackGoalDefinition const& definition);

MCNAPI void
initializeMoveToPOI(::MoveToPOIGoal& goal, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition const& definition);

MCNAPI void initializeMoveToVillage(
    ::MoveToVillageGoal&                                        goal,
    ::SharedTypes::v1_26_20::MoveToVillageGoalDefinition const& definition
);

MCNAPI void
initializeTargetGoal(::EntityContext& goal, ::TargetGoal& definition, ::SharedTypes::TargetGoalDefinition const&);

MCNAPI void initializeWorkGoal(::WorkGoal& goal, ::SharedTypes::v1_26_10::WorkGoalDefinition const& definition);

MCNAPI void
transformToVersionedBase(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::BaseMoveToGoalDefinition& sharedGoal);

MCNAPI void transformToVersionedBaseBlock(
    ::LegacyGoalDefinition&&                      legacyGoal,
    ::SharedTypes::BaseMoveToBlockGoalDefinition& sharedGoal
);

MCNAPI void transformToVersionedMoveToPOI(
    ::LegacyGoalDefinition&&                          legacyGoal,
    ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition& sharedGoal
);

MCNAPI void transformToVersionedMoveToVillage(
    ::LegacyGoalDefinition&&                              legacyGoal,
    ::SharedTypes::v1_26_20::MoveToVillageGoalDefinition& sharedGoal
);

MCNAPI void uninitialize(
    ::EntityContext& entity,
    ::OutOfControlComponent&,
    ::SharedTypes::v1_26_20::OutOfControlComponentDefinition const&
);

MCNAPI bool validate(::SharedTypes::v1_26_20::AdmireItemGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::BarterGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::BaseMoveToBlockGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::BaseMoveToGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_90::BreedGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_100::ChargeAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_100::ControlledByPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_100::DragonFlamingGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::EatCarriedItemGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_100::EatMobGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FindCoverGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FindMountGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FindUnderwaterTreasureGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FleeSunGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FloatGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FollowOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::FollowParentGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::GoAndGiveItemsToNoteblockGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::GoAndGiveItemsToOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::GoHomeGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::GuardianAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::HoldGroundGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::HoverGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::JumpToBlockGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::LayDownGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::LookAtEntityGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::LookAtPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::LookAtTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::LookAtTradingPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::MeleeAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::MeleeBoxAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MountPathingGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MoveAroundTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MoveIndoorsGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MoveOutdoorsGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MoveThroughVillageGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MoveToRandomBlockGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::MoveTowardsRestrictionGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::MoveTowardsTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::OcelotAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::OfferFlowerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::PetSleepWithOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::PlayDeadGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::PlayGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::PlayerVehicleTamedGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::RaiderCelebrationGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::RamAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::RandomHoverGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::RandomSitGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_20::RandomStrollGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::RoarGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SlimeAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SlimeFloatGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SlimeKeepOnJumpingGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SlimeRandomDirectionGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SniffGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SonicBoomGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::StayNearNoteblockGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::StompAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SwimIdleGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SwimWanderGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::SwimWithEntityGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_110::SwoopAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::TeleportToOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::TimerActorFlagBaseGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::TradeWithPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::VillagerCelebrationGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::WorkComposterGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_10::WorkGoalDefinition const&, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_100::CircleAroundAnchorGoalDefinition const& definition, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_21_100::TransportItemsGoalDefinition const& definition, ::Mob const&);

MCNAPI bool validate(::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition const& definition, ::Mob const& mob);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::AdmireItemGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::BarterGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::BaseMoveToBlockGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::BaseMoveToGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_90::BreedGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_100::ChargeAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_100::CircleAroundAnchorGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_100::ControlledByPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::EatCarriedItemGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_100::EatMobGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FindCoverGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FindMountGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FindUnderwaterTreasureGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FleeSunGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FloatGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FollowOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::FollowParentGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::GoAndGiveItemsToNoteblockGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::GoAndGiveItemsToOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::GoHomeGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::HoldGroundGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::HoverGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::JumpToBlockGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::LayDownGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::LookAtEntityGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::LookAtPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::LookAtTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::LookAtTradingPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::MeleeAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::MeleeBoxAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MountPathingGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MoveAroundTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MoveIndoorsGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MoveOutdoorsGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MoveThroughVillageGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MoveToRandomBlockGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::MoveTowardsRestrictionGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::MoveTowardsTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::OcelotAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::OfferFlowerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::PetSleepWithOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::PlayDeadGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::PlayGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::PlayerVehicleTamedGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::RaiderCelebrationGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::RamAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::RandomHoverGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::RandomSitGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_20::RandomStrollGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::RoarGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SlimeAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SlimeFloatGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SlimeKeepOnJumpingGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SlimeRandomDirectionGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SniffGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SonicBoomGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::StayNearNoteblockGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::StompAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SwimIdleGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SwimWanderGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::SwimWithEntityGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_110::SwoopAttackGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::TeleportToOwnerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::TimerActorFlagBaseGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::TradeWithPlayerGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::VillagerCelebrationGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::WorkComposterGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_26_10::WorkGoalDefinition const&, ::Mob const&);

MCNAPI bool validateMobType(::SharedTypes::v1_21_100::DragonFlamingGoalDefinition const&, ::Mob const& mob);

MCNAPI bool validateMobType(::SharedTypes::v1_26_0::GuardianAttackGoalDefinition const&, ::Mob const& mob);
// NOLINTEND

} // namespace JsonComponentGlueUtils
