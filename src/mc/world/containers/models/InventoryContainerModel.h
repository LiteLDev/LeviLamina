#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
// clang-format on

class InventoryContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1fe61c;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryContainerModel& operator=(InventoryContainerModel const&);
    InventoryContainerModel(InventoryContainerModel const&);
    InventoryContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~InventoryContainerModel() /*override*/ = default;

    // vIndex: 2
    virtual void postInit() /*override*/;

    // vIndex: 3
    virtual void releaseResources() /*override*/;

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 14
    virtual bool isValid() /*override*/;

    // vIndex: 7
    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    // vIndex: 22
    virtual int _getContainerOffset() const /*override*/;

    // vIndex: 24
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

    // vIndex: 21
    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $postInit();

    MCAPI void $releaseResources();

    MCAPI void $containerContentChanged(int slot);

    MCFOLD bool $isValid();

    MCFOLD ::ContainerWeakRef $getContainerWeakRef() const;

    MCAPI int $_getContainerOffset() const;

    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCFOLD ::Container* $_getContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
