#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerSizeChangeListener.h"

// auto generated forward declare list
// clang-format off
class Container;
class Inventory;
class ItemStack;
// clang-format on

class PlayerInventory : public ::ContainerSizeChangeListener, public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkb0b19d;
    ::ll::UntypedStorage<8, 152> mUnkeb43ed;
    ::ll::UntypedStorage<1, 1>   mUnk92e659;
    ::ll::UntypedStorage<8, 8>   mUnk53f793;
    ::ll::UntypedStorage<8, 24>  mUnk5a5294;
    ::ll::UntypedStorage<8, 16>  mUnkf9dfa3;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInventory& operator=(PlayerInventory const&);
    PlayerInventory(PlayerInventory const&);
    PlayerInventory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~PlayerInventory() /*override*/;

    // vIndex: 0
    virtual void containerSizeChanged(int size) /*override*/;

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 2
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerInventory(::std::unique_ptr<::Inventory> inv);

    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);

    MCAPI bool removeResource(int type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::Inventory> inv);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $containerSizeChanged(int size);

    MCAPI void $containerContentChanged(int slot);

    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerSizeChangeListener();

    MCAPI static void** $vftableForContainerContentChangeListener();
    // NOLINTEND
};
