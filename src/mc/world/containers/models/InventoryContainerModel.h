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
    virtual ~InventoryContainerModel() /*override*/ = default;

    virtual void postInit() /*override*/;

    virtual void releaseResources() /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual int _getContainerOffset() const /*override*/;

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $postInit();

    MCAPI void $releaseResources();

    MCAPI void $containerContentChanged(int slot);

    MCFOLD bool $isValid();

#ifdef LL_PLAT_S
    MCFOLD ::ContainerWeakRef $getContainerWeakRef() const;
#else // LL_PLAT_C
    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;
#endif

    MCAPI int $_getContainerOffset() const;

    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

#ifdef LL_PLAT_S
    MCFOLD ::Container* $_getContainer() const;
#else // LL_PLAT_C
    MCAPI ::Container* $_getContainer() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
