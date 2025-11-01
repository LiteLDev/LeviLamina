#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerTracker;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class Player;
struct PlayerContainerRefresher;
// clang-format on

namespace DynamicContainerTrackerFactory {
// functions
// NOLINTBEGIN
MCNAPI ::std::shared_ptr<::DynamicContainerTracker> createDynamicContainerTracker(
    ::WeakRef<::IContainerRegistryAccess>  registryAccess,
    ::WeakRef<::IContainerRegistryTracker> registryManager
);

MCNAPI ::std::unique_ptr<::PlayerContainerRefresher> createPlayerContainerRefresher(::Player& player);
// NOLINTEND

} // namespace DynamicContainerTrackerFactory
