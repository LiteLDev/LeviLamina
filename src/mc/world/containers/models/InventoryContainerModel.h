#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class InventoryContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postInit();

    MCNAPI void $releaseResources();

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI bool $isValid();

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI ::Container* $_getContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
