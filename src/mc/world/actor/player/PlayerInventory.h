#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerSizeChangeListener.h"

// auto generated forward declare list
// clang-format off
class Container;
class HudContainerManagerModel;
class Inventory;
class ItemStack;
// clang-format on

class PlayerInventory : public ::ContainerSizeChangeListener, public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                          mSelected;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                mInfiniteItem;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                mSelectedContainerId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Inventory>>               mInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                  mComplexItems;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HudContainerManagerModel>> mHudContainerManager;
    // NOLINTEND

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
