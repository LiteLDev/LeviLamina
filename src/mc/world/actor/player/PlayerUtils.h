#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace PlayerUtils {
// NOLINTBEGIN
MCAPI void addItem(class Player& player, class ItemStack& itemToAdd);

MCAPI class mce::Color getPlayerColor(class Player const& player);

MCAPI void replaceCurrentItem(class Player& player, class ItemStack& newItem);
// NOLINTEND

}; // namespace PlayerUtils
