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
struct ContainerOwner;
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
    // prevent constructor by default
    DynamicContainerTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DynamicContainerTracker(
        ::WeakRef<::IContainerRegistryAccess>  registryAccess,
        ::WeakRef<::IContainerRegistryTracker> registryManager
    );

    MCNAPI ::std::optional<::ItemStack> _initializeStorageItem(
        ::ItemStack const&                 item,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
    );

    MCNAPI void _markAux(::ItemStack const& item, int depth);

    MCNAPI void _retrackRecursiveAux(::ItemStack const& item, int depth);

    MCNAPI ::std::pair<::FullContainerName, ::ItemStack> _tryInitID(::ItemStack const& item) const;

    MCNAPI void giveContainerLifetimes(::ContainerOwner& containerOwner) const;

    MCNAPI ::std::optional<::ItemStack> tryTrackContainer(::ItemStack const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::WeakRef<::IContainerRegistryAccess> registryAccess, ::WeakRef<::IContainerRegistryTracker> registryManager);
    // NOLINTEND
};
