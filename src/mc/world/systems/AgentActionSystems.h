#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class CommandCooldown; }
namespace AgentComponents { struct ActionDetails; }
namespace AgentComponents { struct AnimationShrugFlag; }
namespace AgentComponents { struct ExecutingFlag; }
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
// clang-format on

namespace AgentActionSystems {
// NOLINTBEGIN
/**
 * @symbol
 * ?tickActionFailed\@AgentActionSystems\@\@YAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActionDetails\@AgentComponents\@\@V?$FlagComponent\@UAnimationShrugFlag\@AgentComponents\@\@\@\@VCommandCooldown\@4\@V?$FlagComponent\@UExecutingFlag\@AgentComponents\@\@\@\@\@\@\@Z
 */
MCAPI void tickActionFailed(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::AnimationShrugFlag>, class AgentComponents::CommandCooldown, class FlagComponent<struct AgentComponents::ExecutingFlag>>&);
// NOLINTEND

}; // namespace AgentActionSystems
