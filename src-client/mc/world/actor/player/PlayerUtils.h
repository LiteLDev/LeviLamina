#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class ItemStack;
class Player;
// clang-format on

namespace PlayerUtils {
// functions
// NOLINTBEGIN
MCAPI bool canAttackActor(::Player const& player, ::Actor const& actor);

MCAPI bool canUseItemToIgnite(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

MCAPI void onAttackAwardAchievements(::Player& player, float damage);
// NOLINTEND

} // namespace PlayerUtils
