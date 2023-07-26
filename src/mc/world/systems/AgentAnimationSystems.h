#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Animating; }
namespace AgentComponents { struct AnimationCompleteFlag; }
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
// clang-format on

namespace AgentAnimationSystems {
/**
 * @symbol
 * ?animationTick\@AgentAnimationSystems\@\@YAXAEAVStrictEntityContext\@\@AEAVAnimating\@AgentComponents\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAnimationCompleteFlag\@AgentComponents\@\@\@\@\@\@\@Z
 */
MCAPI void
animationTick(class StrictEntityContext&, class AgentComponents::Animating&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AgentComponents::AnimationCompleteFlag>>&); // NOLINT

}; // namespace AgentAnimationSystems
