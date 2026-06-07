#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Container;
class ItemStack;
class Mob;
struct TransportItemsGoalSettings;
// clang-format on

namespace TransportItemsUtils {
// functions
// NOLINTBEGIN
MCNAPI bool
canPutItem(::Container const& container, ::ItemStack const& item, ::TransportItemsGoalSettings const& settings);

MCNAPI bool isValidTargetContainer(
    ::Mob const&                        mob,
    ::BlockPos const&                   targetPosition,
    ::TransportItemsGoalSettings const& settings
);

MCNAPI bool tryPutItem(
    ::Mob&                              mob,
    ::BlockPos const&                   targetContainerPosition,
    ::TransportItemsGoalSettings const& settings,
    bool                                dryRun
);

MCNAPI bool tryTakeItem(
    ::Mob&                              mob,
    ::BlockPos const&                   targetContainerPosition,
    ::TransportItemsGoalSettings const& settings,
    bool                                dryRun
);
// NOLINTEND

} // namespace TransportItemsUtils
