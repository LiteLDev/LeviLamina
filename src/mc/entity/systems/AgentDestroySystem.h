#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Destroy; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentDestroySystem {
// NOLINTBEGIN
MCAPI void initialize(
    class EntityContext&                         entity,
    struct StateVectorComponent const&           posState,
    struct MobBodyRotationComponent const&       rotState,
    struct AgentComponents::ActionDetails const& details,
    class AgentComponents::Destroy const&        destroyInfo
);

MCAPI void tick(
    class EntityContext&                         entity,
    struct StateVectorComponent const&           posState,
    struct MobBodyRotationComponent const&       rotState,
    struct AgentComponents::ActionDetails const& details,
    class AgentComponents::Destroy const&        destroyInfo
);
// NOLINTEND

}; // namespace AgentDestroySystem
