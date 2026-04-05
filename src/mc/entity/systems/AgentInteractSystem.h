#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct MobBodyRotationComponent;
struct StateVectorComponent;
namespace AgentComponents { class Interact; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentInteractSystem {
// functions
// NOLINTBEGIN
MCAPI void initialize(
    ::EntityContext&                        entity,
    ::StateVectorComponent const&           posState,
    ::MobBodyRotationComponent const&       rotState,
    ::AgentComponents::ActionDetails const& details,
    ::AgentComponents::Interact const&      interactInfo
);

MCAPI void tick(
    ::EntityContext&                        entity,
    ::StateVectorComponent const&           posState,
    ::MobBodyRotationComponent const&       rotState,
    ::AgentComponents::ActionDetails const& details,
    ::AgentComponents::Interact const&      interactInfo
);
// NOLINTEND

} // namespace AgentInteractSystem
