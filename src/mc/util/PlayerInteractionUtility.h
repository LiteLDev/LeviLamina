#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemStack;
class Player;
// clang-format on

namespace PlayerInteractionUtility {
// functions
// NOLINTBEGIN
MCNAPI void feedActorWithItem(
    ::Player&                                player,
    ::Actor&                                 actorToFeed,
    ::ItemStack                              item,
    ::std::optional<::ItemDescriptor> const& resultItem
);
// NOLINTEND

} // namespace PlayerInteractionUtility
