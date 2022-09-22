/**
 * @file  JumpPreventionUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -638770706
     * @symbol ?getJumpPrevention@JumpPreventionUtility@@YA?AUJumpPreventionResult@@AEBVAABB@@VBlockPos@@AEBVIConstBlockSource@@@Z
     */
    MCAPI struct JumpPreventionResult getJumpPrevention(class AABB const &, class BlockPos, class IConstBlockSource const &);

};