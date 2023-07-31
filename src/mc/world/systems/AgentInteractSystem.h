#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Interact; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentInteractSystem {
// NOLINTBEGIN
/**
 * @symbol
 * ?initialize\@AgentInteractSystem\@\@YAXAEAVEntityContext\@\@AEBUStateVectorComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUActionDetails\@AgentComponents\@\@AEBVInteract\@6\@\@Z
 */
MCAPI void
initialize(class EntityContext&, struct StateVectorComponent const&, struct MobBodyRotationComponent const&, struct AgentComponents::ActionDetails const&, class AgentComponents::Interact const&);
/**
 * @symbol
 * ?tick\@AgentInteractSystem\@\@YAXAEAVEntityContext\@\@AEBUStateVectorComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUActionDetails\@AgentComponents\@\@AEBVInteract\@6\@\@Z
 */
MCAPI void
tick(class EntityContext&, struct StateVectorComponent const&, struct MobBodyRotationComponent const&, struct AgentComponents::ActionDetails const&, class AgentComponents::Interact const&);
// NOLINTEND

}; // namespace AgentInteractSystem
