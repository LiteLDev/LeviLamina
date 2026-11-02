#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class Player;
// clang-format on

namespace PlayerInteractionUtility {
// functions
// NOLINTBEGIN
MCNAPI void feedActorWithItem(
    ::Player&                                player,
    ::Actor&                                 actorToFeed,
    ::HandSlot                               handSlot,
    ::std::optional<::ItemDescriptor> const& resultItem
);
// NOLINTEND

} // namespace PlayerInteractionUtility
