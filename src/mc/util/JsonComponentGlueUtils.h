#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ExperienceRewardComponent;
class SwimUpForBreathGoal;
class TransportItemsGoal;
struct AddRiderComponent;
namespace SharedTypes::v1_21_100 { struct TransportItemsGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct ExperienceRewardDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct AddRiderDefinition; }
// clang-format on

namespace JsonComponentGlueUtils {
// functions
// NOLINTBEGIN
MCNAPI void initialize(
    ::EntityContext&,
    ::AddRiderComponent&                                component,
    ::SharedTypes::v1_21_130::AddRiderDefinition const& loadedData
);

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

} // namespace JsonComponentGlueUtils
