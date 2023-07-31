#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JumpPreventionUtility {
// NOLINTBEGIN
/**
 * @symbol ?getJumpMultiplier\@JumpPreventionUtility\@\@YAM_N\@Z
 */
MCAPI float getJumpMultiplier(bool);
/**
 * @symbol
 * ?getJumpPrevention\@JumpPreventionUtility\@\@YA?AUJumpPreventionResult\@\@_NAEBVAABB\@\@VBlockPos\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI struct JumpPreventionResult
getJumpPrevention(bool, class AABB const&, class BlockPos, class IConstBlockSource const&);
// NOLINTEND

}; // namespace JumpPreventionUtility
