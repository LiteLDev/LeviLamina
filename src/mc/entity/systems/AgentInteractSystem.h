#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Interact; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentInteractSystem {
// NOLINTBEGIN
MCAPI void initialize(
    class EntityContext&                         entity,
    struct StateVectorComponent const&           posState,
    struct MobBodyRotationComponent const&       rotState,
    struct AgentComponents::ActionDetails const& details,
    class AgentComponents::Interact const&       interactInfo
);

MCAPI void tick(
    class EntityContext&                         entity,
    struct StateVectorComponent const&           posState,
    struct MobBodyRotationComponent const&       rotState,
    struct AgentComponents::ActionDetails const& details,
    class AgentComponents::Interact const&       interactInfo
);
// NOLINTEND

}; // namespace AgentInteractSystem
