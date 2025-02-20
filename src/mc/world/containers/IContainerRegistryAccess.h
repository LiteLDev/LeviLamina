#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FillingContainer;
class StorageItemComponent;
class StorageItemContainerModel;
class StorageWeightLimitItemComponent;
struct FullContainerName;
// clang-format on

class IContainerRegistryAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::shared_ptr<::StorageItemContainerModel> getModel(::FullContainerName const&) = 0;

    // vIndex: 1
    virtual ::std::shared_ptr<::FillingContainer> getBackingContainer(::FullContainerName const&) = 0;

    // vIndex: 2
    virtual void
    tryCreateEntry(::StorageItemComponent*, ::StorageWeightLimitItemComponent*, ::FullContainerName const&) = 0;

    // vIndex: 3
    virtual ~IContainerRegistryAccess();
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
