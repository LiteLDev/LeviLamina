#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/TeleportAnalysis.h"

namespace TeleportCommandHelpers {
// NOLINTBEGIN
// symbol:
// ?actorToLocationTeleportAnalysis@TeleportCommandHelpers@@YA?AW4TeleportAnalysis@@AEBVBlockSource@@AEBVActor@@VVec3@@@Z
MCAPI ::TeleportAnalysis
actorToLocationTeleportAnalysis(class BlockSource const& region, class Actor const& actor, class Vec3 destination);

// symbol: ?getSafetyAABB@TeleportCommandHelpers@@YA?AVAABB@@AEBVActor@@VVec3@@@Z
MCAPI class AABB getSafetyAABB(class Actor const& actor, class Vec3 destination);
// NOLINTEND

}; // namespace TeleportCommandHelpers
