#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

namespace ActorBlockDelegate {
// functions
// NOLINTBEGIN
MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos);

MCAPI void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1);
// NOLINTEND

} // namespace ActorBlockDelegate
