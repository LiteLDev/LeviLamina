#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class ItemStack;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct ContainerOwner;
struct FullContainerName;
// clang-format on

class DynamicContainerTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk723614;
    ::ll::UntypedStorage<8, 16> mUnk94d240;
    ::ll::UntypedStorage<8, 64> mUnk1a61c3;
    ::ll::UntypedStorage<8, 64> mUnkc74df6;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicContainerTracker& operator=(DynamicContainerTracker const&);
    DynamicContainerTracker(DynamicContainerTracker const&);
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
