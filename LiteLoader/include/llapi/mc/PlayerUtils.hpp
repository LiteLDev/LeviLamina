/**
 * @file  PlayerUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace PlayerUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?addItem\@PlayerUtils\@\@YAXAEAVPlayer\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI void addItem(class Player &, class ItemStack &);
    /**
     * @symbol ?getPlayerColor\@PlayerUtils\@\@YA?AVColor\@mce\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI class mce::Color getPlayerColor(class Player const &);
    /**
     * @symbol ?replaceCurrentItem\@PlayerUtils\@\@YAXAEAVPlayer\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI void replaceCurrentItem(class Player &, class ItemStack &);

};