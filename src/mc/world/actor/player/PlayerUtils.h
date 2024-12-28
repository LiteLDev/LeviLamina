#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
namespace mce { class Color; }
// clang-format on

namespace PlayerUtils {
// functions
// NOLINTBEGIN
MCAPI void addItem(::Player& player, ::ItemStack& itemToAdd);

MCAPI ::mce::Color getPlayerColor(::Player const& player);

MCAPI void replaceCurrentItem(::Player& player, ::ItemStack& newItem);

MCAPI bool willPlayerPushLoadingScreenForDimensionTransfer(::Player const& player);
// NOLINTEND

} // namespace PlayerUtils
