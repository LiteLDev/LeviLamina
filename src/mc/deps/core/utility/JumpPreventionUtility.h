#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JumpPreventionUtility {
/**
 * @symbol ?getJumpMultiplier\@JumpPreventionUtility\@\@YAM_N\@Z
 */
MCAPI float getJumpMultiplier(bool); // NOLINT
/**
 * @symbol
 * ?getJumpPrevention\@JumpPreventionUtility\@\@YA?AUJumpPreventionResult\@\@_NAEBVAABB\@\@VBlockPos\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI struct JumpPreventionResult
getJumpPrevention(bool, class AABB const&, class BlockPos, class IConstBlockSource const&); // NOLINT

}; // namespace JumpPreventionUtility
