#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct BlockPosTrackerComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace BlockPosTrackerSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickBlockPosTrackerComponent(::Actor& actor, ::BlockPosTrackerComponent& blockPosTrackerComponent);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace BlockPosTrackerSystem
