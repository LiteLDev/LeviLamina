#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace PlayerUtils {
/**
 * @symbol ?addItem\@PlayerUtils\@\@YAXAEAVPlayer\@\@AEAVItemStack\@\@\@Z
 */
MCAPI void addItem(class Player&, class ItemStack&);
/**
 * @symbol ?getPlayerColor\@PlayerUtils\@\@YA?AVColor\@mce\@\@AEBVPlayer\@\@\@Z
 */
MCAPI class mce::Color getPlayerColor(class Player const&);
/**
 * @symbol ?replaceCurrentItem\@PlayerUtils\@\@YAXAEAVPlayer\@\@AEAVItemStack\@\@\@Z
 */
MCAPI void replaceCurrentItem(class Player&, class ItemStack&);

}; // namespace PlayerUtils
