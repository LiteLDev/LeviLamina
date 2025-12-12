#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EatMobGoal;
class EntityContext;
class ExperienceRewardComponent;
class SonicBoomGoal;
class SwimUpForBreathGoal;
class TransportItemsGoal;
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct ExperienceRewardDefinition; }
namespace SharedTypes::v1_21_110 { struct SonicBoomGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
// clang-format on

namespace ActorMigratedUtils {
// functions
// NOLINTBEGIN
MCNAPI void
initialize(::EntityContext&, ::SonicBoomGoal& goal, ::SharedTypes::v1_21_110::SonicBoomGoalDefinition definition);

MCNAPI void initialize(::EntityContext&, ::EatMobGoal& goal, ::SharedTypes::v1_21_100::EatMobGoalDefinition definition);

MCNAPI void initialize(
    ::EntityContext&,
    ::SwimUpForBreathGoal&                                  goal,
    ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::TransportItemsGoal&                                         goal,
    ::SharedTypes::v1_21_100::TransportItemsGoalDefinition const& definition
);

MCNAPI void initialize(
    ::EntityContext&,
    ::ExperienceRewardComponent&                                runtimeComponent,
    ::SharedTypes::v1_21_110::ExperienceRewardDefinition const& loadedData
);
// NOLINTEND

} // namespace ActorMigratedUtils
