#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace Heightmap {
// functions
// NOLINTBEGIN
MCAPI bool motionBlocking(::Block const& state);

MCAPI bool motionBlockingNoLeaves(::Block const& state);

MCAPI bool oceanFloor(::Block const& state);

MCAPI bool worldSurface(::Block const& state);
// NOLINTEND

} // namespace Heightmap
