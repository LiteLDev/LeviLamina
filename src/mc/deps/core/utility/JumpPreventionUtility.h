#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JumpPreventionUtility {
// NOLINTBEGIN
MCAPI float getJumpMultiplier(bool);

MCAPI struct JumpPreventionResult
getJumpPrevention(bool isOnGround, class AABB const& aabb, class BlockPos pos, class IConstBlockSource const& region);
// NOLINTEND

}; // namespace JumpPreventionUtility
