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
namespace mce { class Color; }
// clang-format on

namespace PlayerUtils {
// functions
// NOLINTBEGIN
MCAPI void addItem(::Player& player, ::ItemStack& item);

MCAPI bool areMonstersNearby(::BlockSource& region, ::Vec3 const& position);

MCAPI bool canAttackActor(::Player const& player, ::Actor const& actor);

MCAPI bool canUseItemToIgnite(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

MCAPI ::mce::Color getPlayerColor(::Player const& player);

MCAPI bool willPlayerPushLoadingScreenForDimensionTransfer(::Player const& player);
// NOLINTEND

} // namespace PlayerUtils
