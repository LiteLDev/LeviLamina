#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
namespace AgentComponents { class CommandCooldown; }
namespace AgentComponents { struct ActionDetails; }
namespace AgentComponents { struct AnimationShrug; }
namespace AgentComponents { struct Executing; }
// clang-format on

namespace AgentActionSystems {
// functions
// NOLINTBEGIN
MCAPI void tickActionFailed(
    ::StrictEntityContext& entity,
    ::ActorOwnerComponent& actorOwner,
    ::EntityModifier<
        ::AgentComponents::ActionDetails,
        ::AgentComponents::AnimationShrug,
        ::AgentComponents::CommandCooldown,
        ::AgentComponents::Executing>& modifier
);
// NOLINTEND

} // namespace AgentActionSystems
