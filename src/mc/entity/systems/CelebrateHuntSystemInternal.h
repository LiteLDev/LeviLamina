#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class CelebrateHuntComponent;
// clang-format on

namespace CelebrateHuntSystemInternal {
// functions
// NOLINTBEGIN
MCNAPI void _stopCelebrating(::Actor& actor, ::CelebrateHuntComponent& component);

MCNAPI void _tickCelebrateHuntComponent(
    ::ActorOwnerComponent&    actorOwnerComponent,
    ::CelebrateHuntComponent& celebrateHuntComponent
);
// NOLINTEND

} // namespace CelebrateHuntSystemInternal
