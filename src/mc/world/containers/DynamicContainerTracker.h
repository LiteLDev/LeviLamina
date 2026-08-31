#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/containers/FullContainerName.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class ItemStack;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct PlayerContainerRefresher;
// clang-format on

class DynamicContainerTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>>  mContainerRegistryAccess;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryTracker>> mContainerRegistryManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::std::unique_ptr<::DynamicContainerManager>>>
                                                                         mTrackedContainers;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::FullContainerName>> mMarkedReachable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::ItemStack> _initializeStorageItem(
        ::ItemStack const&                 item,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCAPI void _markAux(::ItemStack const& item, int depth);

    MCAPI void _retrackRecursiveAux(::ItemStack const& item, int depth);

    MCAPI void
    broadcastChanges(::PlayerContainerRefresher& refresher, ::std::function<void()> contentsChangedCallback) const;

    MCAPI void sweep();

    MCAPI ::std::optional<::ItemStack> tryTrackContainer(::ItemStack const& item);
    // NOLINTEND
};
