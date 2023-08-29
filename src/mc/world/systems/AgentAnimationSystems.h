#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Animating; }
namespace AgentComponents { struct AnimationCompleteFlag; }
// clang-format on

namespace AgentAnimationSystems {
// NOLINTBEGIN
/**
 * @symbol
 * ?animationTick\@AgentAnimationSystems\@\@YAXAEAVStrictEntityContext\@\@AEAVAnimating\@AgentComponents\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAnimationCompleteFlag\@AgentComponents\@\@\@\@\@\@\@Z
 */
MCAPI void
animationTick(class StrictEntityContext&, class AgentComponents::Animating&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AgentComponents::AnimationCompleteFlag>>&);
// NOLINTEND

}; // namespace AgentAnimationSystems
