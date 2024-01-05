#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JumpPreventionUtility {
// NOLINTBEGIN
// symbol: ?getJumpMultiplier@JumpPreventionUtility@@YAM_N@Z
MCAPI float getJumpMultiplier(bool);

// symbol:
// ?getJumpPrevention@JumpPreventionUtility@@YA?AUJumpPreventionResult@@_NAEBVAABB@@VBlockPos@@AEBVIConstBlockSource@@@Z
MCAPI struct JumpPreventionResult
getJumpPrevention(bool isOnGround, class AABB const& aabb, class BlockPos pos, class IConstBlockSource const& region);
// NOLINTEND

}; // namespace JumpPreventionUtility
