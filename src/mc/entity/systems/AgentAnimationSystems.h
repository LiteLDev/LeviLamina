#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Animating; }
namespace AgentComponents { struct AnimationCompleteFlag; }
// clang-format on

namespace AgentAnimationSystems {
// NOLINTBEGIN
MCAPI void animationTick(
    class StrictEntityContext&                                                                entity,
    class AgentComponents::Animating&                                                         anim,
    class EntityModifier<class FlagComponent<struct AgentComponents::AnimationCompleteFlag>>& modifier
);
// NOLINTEND

}; // namespace AgentAnimationSystems
