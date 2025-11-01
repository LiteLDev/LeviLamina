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
MCNAPI bool canAttackActor(::Player const& player, ::Actor const& actor);

MCNAPI bool canUseItemToIgnite(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

MCNAPI void onAttackAwardAchievements(::Player& player, float damage);
// NOLINTEND

}
