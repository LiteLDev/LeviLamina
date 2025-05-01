#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/BaseContainerMenu.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
struct FullContainerName;
// clang-format on

class InventoryMenu : public ::BaseContainerMenu {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk74c69d;
    ::ll::UntypedStorage<8, 16> mUnk79a9c1;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryMenu& operator=(InventoryMenu const&);
    InventoryMenu(InventoryMenu const&);
    InventoryMenu();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~InventoryMenu() /*override*/;

    // vIndex: 8
    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    // vIndex: 2
    virtual void removeSlot(int slot, int count) /*override*/;

    // vIndex: 11
    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 12
    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;

    // vIndex: 6
    virtual void serverInitItemStackIds() /*override*/;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 5
    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI void $removeSlot(int slot, int count);

    MCNAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);

    MCNAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;

    MCNAPI void $serverInitItemStackIds();

    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI ::Container* $_getContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForIContainerManager();
    // NOLINTEND
};
