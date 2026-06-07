#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/trap_door_utils/TrapDoorDir.h"

namespace TrapDoorUtils {
// functions
// NOLINTBEGIN
MCAPI ::Direction::Type getDirection(::TrapDoorUtils::TrapDoorDir trapDoorDirection);

MCAPI ::TrapDoorUtils::TrapDoorDir getTrapDoorDirection(::Direction::Type direction);
// NOLINTEND

} // namespace TrapDoorUtils
