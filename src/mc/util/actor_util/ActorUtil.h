#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/actor_util/CanBeKilledResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ActorUtil {
// functions
// NOLINTBEGIN
MCAPI ::ActorUtil::CanBeKilledResult const canActorBeKilled(::Actor const& actor, bool isWorldBuilder);

MCAPI void startFizzEffect(::Actor& actor);
// NOLINTEND

} // namespace ActorUtil
