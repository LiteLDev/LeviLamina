#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TeleportAnalysis.h"

namespace TeleportCommandHelpers {
// NOLINTBEGIN
MCAPI ::TeleportAnalysis
actorToLocationTeleportAnalysis(class BlockSource const& region, class Actor const& actor, class Vec3 destination);

MCAPI class AABB getSafetyAABB(class Actor const& actor, class Vec3 destination);
// NOLINTEND

}; // namespace TeleportCommandHelpers
