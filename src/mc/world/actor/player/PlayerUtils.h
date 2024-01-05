#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace PlayerUtils {
// NOLINTBEGIN
// symbol: ?addItem@PlayerUtils@@YAXAEAVPlayer@@AEAVItemStack@@@Z
MCAPI void addItem(class Player& player, class ItemStack& itemToAdd);

// symbol: ?getPlayerColor@PlayerUtils@@YA?AVColor@mce@@AEBVPlayer@@@Z
MCAPI class mce::Color getPlayerColor(class Player const& player);

// symbol: ?replaceCurrentItem@PlayerUtils@@YAXAEAVPlayer@@AEAVItemStack@@@Z
MCAPI void replaceCurrentItem(class Player& player, class ItemStack& newItem);
// NOLINTEND

}; // namespace PlayerUtils
