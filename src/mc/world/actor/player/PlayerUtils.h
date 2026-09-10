#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockSource;
class ItemStack;
class Player;
class Vec3;
// clang-format on

namespace PlayerUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI bool areMonstersNearby(::BlockSource& region, ::Vec3 const& position);
#endif

MCAPI bool canUseItemToIgnite(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

#ifdef LL_PLAT_S
MCAPI void onAttackAwardAchievements(::Player& player, float damage);
#endif
// NOLINTEND

} // namespace PlayerUtils
