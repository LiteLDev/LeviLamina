/**
 * @file  MC/UseItemGoalUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2025805076
     * @symbol ?finishUsingItem@UseItemGoalUtility@@YAXAEAVMob@@AEAUTick@@@Z
     */
    MCAPI void finishUsingItem(class Mob &, struct Tick &);
    /**
     * @hash   -1737988308
     * @symbol ?isUsingItem@UseItemGoalUtility@@YA_NAEBVMob@@@Z
     */
    MCAPI bool isUsingItem(class Mob const &);
    /**
     * @hash   1402975858
     * @symbol ?setUsingItem@UseItemGoalUtility@@YAXAEAVMob@@_N@Z
     */
    MCAPI void setUsingItem(class Mob &, bool);
    /**
     * @hash   -1170045534
     * @symbol ?startUsingItem@UseItemGoalUtility@@YA_NAEAVMob@@AEBVItemStack@@AEAUTick@@@Z
     */
    MCAPI bool startUsingItem(class Mob &, class ItemStack const &, struct Tick &);

};