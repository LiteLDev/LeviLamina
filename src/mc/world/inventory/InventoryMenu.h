#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/inventory/BaseContainerMenu.h"

// auto generated forward declare list
// clang-format off
class Container;
class IContainerRegistryAccess;
class ItemStack;
struct FullContainerName;
// clang-format on

class InventoryMenu : public ::BaseContainerMenu {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Container*>                           mContainer;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>> mContainerRegistryAccess;
    // NOLINTEND

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCAPI void $removeSlot(int slot, int count);

    MCAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;

    MCAPI void $serverInitItemStackIds();

    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCFOLD ::Container* $_getContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForIContainerManager();
    // NOLINTEND
};
