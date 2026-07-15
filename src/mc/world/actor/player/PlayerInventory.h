#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerSizeChangeListener.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Container;
class HudContainerManagerModel;
class Inventory;
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
    virtual ~PlayerInventory() /*override*/ = default;

    virtual void containerSizeChanged(int) /*override*/;

    virtual void containerContentChanged(int) /*override*/;

    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>,
        ::std::function<void()>
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearVanishEnchantedItemsOnDeath();

#ifdef LL_PLAT_C
    MCAPI bool dropSlot(int slot, bool onlyClearContainer, bool dropAll, ::ContainerID containerId, bool randomly);
#endif

    MCAPI bool selectSlot(int slot, ::ContainerID containerId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
