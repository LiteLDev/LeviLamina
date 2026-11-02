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
class Player;
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
    // prevent constructor by default
    InventoryMenu();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryMenu() /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void removeSlot(int slot, int count) /*override*/;

    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;

    virtual void serverInitItemStackIds() /*override*/;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventoryMenu(::Player& player, ::Container* container);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player& player, ::Container* container);
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
