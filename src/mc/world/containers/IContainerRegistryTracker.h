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
    virtual ::std::unique_ptr<::DynamicContainerManager> createContainerManager(
        ::FullContainerName const&,
        ::ItemStack const&,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
    ) = 0;

    virtual uint generateNewID() = 0;

    virtual void tryLoadSavedStorageItem(::ListTag const&, ::FullContainerName const&) = 0;

    virtual void setExpired(::std::vector<::FullContainerName> const&) = 0;

    virtual uint64 getSize() = 0;

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
