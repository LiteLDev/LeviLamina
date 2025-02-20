#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
namespace AgentComponents { class Animating; }
namespace AgentComponents { struct AnimationComplete; }
// clang-format on

namespace AgentAnimationSystems {
// functions
// NOLINTBEGIN
MCAPI void animationTick(
    ::StrictEntityContext&                                  entity,
    ::AgentComponents::Animating&                           anim,
    ::EntityModifier<::AgentComponents::AnimationComplete>& modifier
);
// NOLINTEND

} // namespace AgentAnimationSystems
