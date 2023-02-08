/**
 * @file  UseItemGoalUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace UseItemGoalUtility.
 *
 */
namespace UseItemGoalUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   1181678052
     * @symbol  ?finishUsingItem\@UseItemGoalUtility\@\@YAXAEAVMob\@\@AEAUTick\@\@\@Z
     */
    MCAPI void finishUsingItem(class Mob &, struct Tick &);
    /**
     * @hash   1712867340
     * @symbol  ?isUsingItem\@UseItemGoalUtility\@\@YA_NAEBVMob\@\@\@Z
     */
    MCAPI bool isUsingItem(class Mob const &);
    /**
     * @hash   558879586
     * @symbol  ?setUsingItem\@UseItemGoalUtility\@\@YAXAEAVMob\@\@_N\@Z
     */
    MCAPI void setUsingItem(class Mob &, bool);
    /**
     * @hash   -2014126430
     * @symbol  ?startUsingItem\@UseItemGoalUtility\@\@YA_NAEAVMob\@\@AEBVItemStack\@\@AEAUTick\@\@\@Z
     */
    MCAPI bool startUsingItem(class Mob &, class ItemStack const &, struct Tick &);

};