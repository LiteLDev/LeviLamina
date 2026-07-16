#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AdmireItemGoal;
class BreedGoal;
class DefendTrustedTargetGoal;
class DigGoal;
class DropItemForGoal;
class EatMobGoal;
class EmergeGoal;
class EntityContext;
class ExperienceRewardComponent;
class FireAtTargetGoal;
class FollowCaravanGoal;
class GoAndGiveItemsToNoteblockGoal;
class GoAndGiveItemsToOwnerGoal;
class GoHomeGoal;
class HoldGroundGoal;
class JumpAroundTargetGoal;
class JumpToBlockGoal;
class LayEggGoal;
class LookAtPlayerGoal;
class LookAtTargetGoal;
class LookAtTradingPlayerGoal;
class MeleeAttackBaseGoal;
class Mob;
class PickupItemsGoal;
class PlaceBlockGoal;
class PlayDeadGoal;
class PlayGoal;
class RaidGardenGoal;
class RaiderCelebrationGoal;
class RamAttackGoal;
class RandomSearchAndDigGoal;
class ShareItemsGoal;
class SneezeGoal;
class SwimUpForBreathGoal;
class SwimWithEntityGoal;
class TakeBlockGoal;
class TakeFlowerGoal;
class TargetGoal;
class TargetWhenPushedGoal;
class TimerActorFlagBaseGoal;
class TransportItemsGoal;
class VillagerCelebrationGoal;
class WorkGoal;
struct AddRiderComponent;
struct ApplyKnockbackRulesComponent;
struct LegacyGoalDefinition;
struct OnEquipmentChangedComponent;
struct OutOfControlComponent;
struct PushableByEntityComponent;
struct SpawnOnDeathComponent;
struct VibrationListenerComponent;
namespace SharedTypes { struct TargetGoalDefinition; }
namespace SharedTypes { struct TimerActorFlagBaseGoalDefinition; }
namespace SharedTypes::Beta { struct ApplyKnockbackRulesComponentDefinition; }
namespace SharedTypes::Legacy { struct ApplyKnockbackRulesComponentDefinition; }
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct MeleeAttackBaseGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
namespace SharedTypes::v1_21_90 { struct BreedGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct ExperienceRewardComponentDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtPlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtTargetGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtTradingPlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct NearestAttackableTargetGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct DropItemForGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayDeadGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaidGardenGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaiderCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RamAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RandomSearchAndDigGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct SwimWithEntityGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TakeFlowerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct VillagerCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct WorkGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct AdmireItemGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoAndGiveItemsToNoteblockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoAndGiveItemsToOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoHomeGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HoldGroundGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct JumpAroundTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct JumpToBlockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct OnEquipmentChangedDefinition; }
namespace SharedTypes::v1_26_20 { struct OutOfControlComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct SpawnOnDeathComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct VibrationListenerComponentDefinition; }
namespace SharedTypes::v1_26_30 { struct DefendTrustedTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct EmergeGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct FireAtTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct FollowCaravanGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct PickupItemsGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct PlaceBlockGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct PushableByEntityComponentDefinition; }
namespace SharedTypes::v1_26_30 { struct ShareItemsGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct SneezeGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct TakeBlockGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct TargetWhenPushedGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct WitherTargetHighestDamageGoalDefinition; }
// clang-format on

namespace JsonComponentGlueUtils {
// functions
// NOLINTBEGIN
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
initialize(::EntityContext&, ::BreedGoal& goal, ::SharedTypes::v1_21_90::BreedGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::DigGoal& goal, ::SharedTypes::v1_21_120::DigGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::DropItemForGoal&                                        goal,
    ::SharedTypes::v1_26_10::DropItemForGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::EatMobGoal& goal, ::SharedTypes::v1_21_100::EatMobGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::EmergeGoal& goal, ::SharedTypes::v1_26_30::EmergeGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::FireAtTargetGoal&                                        goal,
    ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::FollowCaravanGoal&                                        goal,
    ::SharedTypes::v1_26_30::FollowCaravanGoalDefinition const& definition
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
    ::HoldGroundGoal&                                        goal,
    ::SharedTypes::v1_26_20::HoldGroundGoalDefinition const& definition
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
initialize(::EntityContext&, ::LayEggGoal& goal, ::SharedTypes::v1_26_10::LayEggGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::PickupItemsGoal&                                        goal,
    ::SharedTypes::v1_26_30::PickupItemsGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::PlaceBlockGoal&                                        goal,
    ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::PlayDeadGoal& goal, ::SharedTypes::v1_26_10::PlayDeadGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::PlayGoal& goal, ::SharedTypes::v1_26_10::PlayGoalDefinition const& definition);

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
    ::RandomSearchAndDigGoal&                                        goal,
    ::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::ShareItemsGoal&                                        goal,
    ::SharedTypes::v1_26_30::ShareItemsGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::SneezeGoal& goal, ::SharedTypes::v1_26_30::SneezeGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimUpForBreathGoal&                                         goal,
    ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimWithEntityGoal&                                        goal,
    ::SharedTypes::v1_26_10::SwimWithEntityGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::TakeBlockGoal& goal, ::SharedTypes::v1_26_30::TakeBlockGoalDefinition const& definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::TakeFlowerGoal&                                        goal,
    ::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TargetWhenPushedGoal&                                        goal,
    ::SharedTypes::v1_26_30::TargetWhenPushedGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TimerActorFlagBaseGoal&                              goal,
    ::SharedTypes::TimerActorFlagBaseGoalDefinition const& definition
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
    ::OnEquipmentChangedComponent&                               runtimeComponent,
    ::SharedTypes::v1_26_20::OnEquipmentChangedDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::PushableByEntityComponent&                                        runtimeComponent,
    ::SharedTypes::v1_26_30::PushableByEntityComponentDefinition const& loadedData
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
    ::EntityContext&                                                  entity,
    ::DefendTrustedTargetGoal&                                        goal,
    ::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition const& definition
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

MCNAPI void initializeMeleeAttackBaseGoal(
    ::MeleeAttackBaseGoal&                                         goal,
    ::SharedTypes::v1_21_120::MeleeAttackBaseGoalDefinition const& definition
);

MCNAPI void
initializeTargetGoal(::EntityContext&, ::TargetGoal& goal, ::SharedTypes::TargetGoalDefinition const& definition);

MCNAPI void initializeWorkGoal(::WorkGoal& goal, ::SharedTypes::v1_26_10::WorkGoalDefinition const& definition);

MCNAPI void transformToVersionedWitherTargetHighestDamage(
    ::LegacyGoalDefinition&&                                          legacyGoal,
    ::SharedTypes::v1_26_30::WitherTargetHighestDamageGoalDefinition& sharedGoal
);

MCNAPI void uninitialize(
    ::EntityContext& entity,
    ::OutOfControlComponent&,
    ::SharedTypes::v1_26_20::OutOfControlComponentDefinition const&
);

MCNAPI bool validate(::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition const& definition, ::Mob const& mob);
// NOLINTEND

} // namespace JsonComponentGlueUtils
