/**
 * @file  JumpPreventionUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace JumpPreventionUtility.
 *
 */
namespace JumpPreventionUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getJumpMultiplier\@JumpPreventionUtility\@\@YAM_N\@Z
     */
    MCAPI float getJumpMultiplier(bool);
    /**
     * @symbol  ?getJumpPrevention\@JumpPreventionUtility\@\@YA?AUJumpPreventionResult\@\@_NAEBVAABB\@\@VBlockPos\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI struct JumpPreventionResult getJumpPrevention(bool, class AABB const &, class BlockPos, class IConstBlockSource const &);

};