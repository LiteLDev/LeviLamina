#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DynamicContainerManager;
class ItemStack;
class ListTag;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct FullContainerName;
// clang-format on

class IContainerRegistryTracker {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::DynamicContainerManager>
    createContainerManager(::FullContainerName const&, ::ItemStack const&, ::StorageItemComponent*, ::StorageWeightLimitItemComponent*) = 0;

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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
