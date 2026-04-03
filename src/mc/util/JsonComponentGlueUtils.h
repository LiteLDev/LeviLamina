#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DropItemForGoal;
class EntityContext;
class ExperienceRewardComponent;
class LayEggGoal;
class LookAtPlayerGoal;
class LookAtTargetGoal;
class LookAtTradingPlayerGoal;
class MeleeAttackBaseGoal;
class Mob;
class PlayDeadGoal;
class PlayGoal;
class RaiderCelebrationGoal;
class RamAttackGoal;
class RandomSearchAndDigGoal;
class SwimUpForBreathGoal;
class SwimWithEntityGoal;
class TakeFlowerGoal;
class TargetGoal;
class TimerActorFlagBaseGoal;
class TransportItemsGoal;
class VillagerCelebrationGoal;
class WorkGoal;
struct AddRiderComponent;
namespace SharedTypes { struct TargetGoalDefinition; }
namespace SharedTypes { struct TimerActorFlagBaseGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct MeleeAttackBaseGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
namespace SharedTypes::v1_26_0 { struct ExperienceRewardComponentDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtPlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtTargetGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct LookAtTradingPlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct NearestAttackableTargetGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct DropItemForGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayDeadGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaiderCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RamAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RandomSearchAndDigGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct SwimWithEntityGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TakeFlowerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct VillagerCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct WorkGoalDefinition; }
// clang-format on

namespace JsonComponentGlueUtils {
// functions
// NOLINTBEGIN
MCNAPI void initialize(
    ::EntityContext&,
    ::AddRiderComponent&                                         component,
    ::SharedTypes::v1_21_130::AddRiderComponentDefinition const& loadedData
);

MCNAPI void initialize(
    ::EntityContext&,
    ::DropItemForGoal&                                        goal,
    ::SharedTypes::v1_26_10::DropItemForGoalDefinition const& definition
);

MCNAPI void
initialize(::EntityContext&, ::LayEggGoal& goal, ::SharedTypes::v1_26_10::LayEggGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::PlayDeadGoal& goal, ::SharedTypes::v1_26_10::PlayDeadGoalDefinition const& definition);

MCNAPI void
initialize(::EntityContext&, ::PlayGoal& goal, ::SharedTypes::v1_26_10::PlayGoalDefinition const& definition);

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
    ::SwimUpForBreathGoal&                                  goal,
    ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimWithEntityGoal&                                        goal,
    ::SharedTypes::v1_26_10::SwimWithEntityGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TakeFlowerGoal&                                        goal,
    ::SharedTypes::v1_26_10::TakeFlowerGoalDefinition const& definition
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
    ::ExperienceRewardComponent&                                       runtimeComponent,
    ::SharedTypes::v1_26_0::ExperienceRewardComponentDefinition const& loadedData
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

MCNAPI bool validate(::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition const& definition, ::Mob const& mob);
// NOLINTEND

} // namespace JsonComponentGlueUtils
