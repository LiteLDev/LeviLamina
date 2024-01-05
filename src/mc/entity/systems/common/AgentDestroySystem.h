#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Destroy; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

namespace AgentDestroySystem {
// NOLINTBEGIN
// symbol:
// ?initialize@AgentDestroySystem@@YAXAEAVEntityContext@@AEBUStateVectorComponent@@AEBUMobBodyRotationComponent@@AEBUActionDetails@AgentComponents@@AEBVDestroy@6@@Z
MCAPI void
initialize(class EntityContext& entity, struct StateVectorComponent const&, struct MobBodyRotationComponent const&, struct AgentComponents::ActionDetails const& details, class AgentComponents::Destroy const&);

// symbol:
// ?tick@AgentDestroySystem@@YAXAEAVEntityContext@@AEBUStateVectorComponent@@AEBUMobBodyRotationComponent@@AEBUActionDetails@AgentComponents@@AEBVDestroy@6@@Z
MCAPI void
tick(class EntityContext& entity, struct StateVectorComponent const&, struct MobBodyRotationComponent const&, struct AgentComponents::ActionDetails const& details, class AgentComponents::Destroy const&);
// NOLINTEND

}; // namespace AgentDestroySystem
