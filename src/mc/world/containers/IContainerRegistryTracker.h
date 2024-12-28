#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class ItemStack;
class ListTag;
class StorageItemComponent;
struct FullContainerName;
// clang-format on

class IContainerRegistryTracker {
public:
    // prevent constructor by default
    IContainerRegistryTracker& operator=(IContainerRegistryTracker const&);
    IContainerRegistryTracker(IContainerRegistryTracker const&);
    IContainerRegistryTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::DynamicContainerManager>
    createContainerManager(::FullContainerName const&, ::ItemStack const&, ::StorageItemComponent*) = 0;

    // vIndex: 1
    virtual uint generateNewID() = 0;

    // vIndex: 2
    virtual void tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&) = 0;

    // vIndex: 3
    virtual void setExpired(::std::vector<::FullContainerName> const&) = 0;

    // vIndex: 4
    virtual uint64 getSize() = 0;

    // vIndex: 5
    virtual ~IContainerRegistryTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
