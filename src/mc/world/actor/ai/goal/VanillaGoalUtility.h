#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorGoalFactory;
class ActorMigratedDefinitionFactory;
class Experiments;
// clang-format on

namespace VanillaGoalUtility {
// functions
// NOLINTBEGIN
MCAPI void registerGoalsToFactories(
    ::ActorGoalFactory&               factory,
    ::ActorMigratedDefinitionFactory& migratedFactory,
    ::Experiments const&              experiments
);

MCAPI void registerGoalsToMigratedFactory(::ActorMigratedDefinitionFactory& migratedFactory, nullptr_t);
// NOLINTEND

} // namespace VanillaGoalUtility
