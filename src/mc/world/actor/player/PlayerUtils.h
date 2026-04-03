#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockSource;
class ItemStack;
class Player;
class Vec3;
// clang-format on

namespace PlayerUtils {
// functions
// NOLINTBEGIN
MCAPI_C bool areMonstersNearby(::BlockSource& region, ::Vec3 const& position);

MCAPI bool canAttackActor(::Player const& player, ::Actor const& actor);

MCAPI bool canUseItemToIgnite(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

MCAPI void onAttackAwardAchievements(::Player& player, float damage);
// NOLINTEND

} // namespace PlayerUtils
