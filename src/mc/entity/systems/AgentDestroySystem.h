#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct MobBodyRotationComponent;
struct StateVectorComponent;
namespace AgentComponents { class Destroy; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentDestroySystem {
// functions
// NOLINTBEGIN
MCAPI void initialize(
    ::EntityContext&                        entity,
    ::StateVectorComponent const&           posState,
    ::MobBodyRotationComponent const&       rotState,
    ::AgentComponents::ActionDetails const& details,
    ::AgentComponents::Destroy const&       destroyInfo
);

MCAPI void tick(
    ::EntityContext&                        entity,
    ::StateVectorComponent const&           posState,
    ::MobBodyRotationComponent const&       rotState,
    ::AgentComponents::ActionDetails const& details,
    ::AgentComponents::Destroy const&       destroyInfo
);
// NOLINTEND

} // namespace AgentDestroySystem
