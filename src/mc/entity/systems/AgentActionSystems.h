#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class CommandCooldown; }
namespace AgentComponents { struct ActionDetails; }
namespace AgentComponents { struct AnimationShrugFlag; }
namespace AgentComponents { struct ExecutingFlag; }
// clang-format on

namespace AgentActionSystems {
// NOLINTBEGIN
MCAPI void tickActionFailed(
    class StrictEntityContext& entity,
    class ActorOwnerComponent& actorOwner,
    class EntityModifier<
        struct AgentComponents::ActionDetails,
        class FlagComponent<struct AgentComponents::AnimationShrugFlag>,
        class AgentComponents::CommandCooldown,
        class FlagComponent<struct AgentComponents::ExecutingFlag>>& modifier
);
// NOLINTEND

}; // namespace AgentActionSystems
