#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace Heightmap {
// functions
// NOLINTBEGIN
MCNAPI bool motionBlocking(::Block const& state);

MCNAPI bool motionBlockingNoLeaves(::Block const& state);

MCNAPI bool oceanFloor(::Block const& state);

MCNAPI bool worldSurface(::Block const& state);
// NOLINTEND

}
