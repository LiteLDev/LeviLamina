#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CelebrateHuntSystemInternal {
// NOLINTBEGIN
MCAPI void _stopCelebrating(class Actor& actor, class CelebrateHuntComponent& component);

MCAPI void _tickCelebrateHuntComponent(
    class ActorOwnerComponent&    actorOwnerComponent,
    class CelebrateHuntComponent& celebrateHuntComponent
);
// NOLINTEND

}; // namespace CelebrateHuntSystemInternal
