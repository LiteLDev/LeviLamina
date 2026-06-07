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
struct PlayerInventorySlotData;
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
    virtual ~PlayerInventory() /*override*/;

    virtual void containerSizeChanged(int) /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::weak_ptr<::HudContainerManagerModel> _getHudContainerManagerModel() const;
#endif

    MCAPI bool add(::ItemStack& item, bool linkEmptySlot);

    MCAPI void addListener(::ContainerContentChangeListener* listener);

    MCAPI bool canAdd(::ItemStack const& item) const;

    MCAPI int clearInventory(int resize);

#ifdef LL_PLAT_C
    MCAPI void clearInventoryWithDefault(bool isCreative);
#endif

    MCAPI void clearSlot(int slot, ::ContainerID containerId);

    MCAPI void clearVanishEnchantedItemsOnDeath();

#ifdef LL_PLAT_C
    MCAPI bool dropSlot(int slot, bool onlyClearContainer, bool dropAll, ::ContainerID containerId, bool randomly);
#endif

    MCAPI int getContainerSize(::ContainerID containerId) const;

    MCAPI int getFirstEmptySlot() const;

    MCAPI int getHotbarSize() const;

    MCAPI ::ItemStack const& getItem(int slot, ::ContainerID containerId) const;

    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);

    MCFOLD ::ContainerID getSelectedContainerId();

    MCAPI ::ItemStack const& getSelectedItem() const;

    MCAPI ::PlayerInventorySlotData getSelectedSlot() const;

    MCAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;

    MCAPI ::std::vector<::ItemStack const*> getSlots() const;

    MCAPI void removeItem(int slot, int count, ::ContainerID containerId);

    MCAPI void removeListener(::ContainerContentChangeListener* listener);

    MCAPI bool removeResource(int type);

    MCAPI int removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    MCAPI bool selectSlot(int slot, ::ContainerID containerId);

    MCAPI void serverInitItemStackId(int containerSlot);

    MCAPI void
    serverInitItemStackIds(int containerSlot, int count, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCAPI void setContainerChanged(int slot);

#ifdef LL_PLAT_C
    MCAPI void setContainerSize(int size, ::ContainerID containerId);
#endif

    MCAPI void setItem(int slot, ::ItemStack const& item, ::ContainerID containerId, bool forceBalanced);

    MCAPI void setSelectedItem(::ItemStack const& item);

    MCAPI void setupDefaultInventory();

    MCAPI void swapSlots(int from, int to);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $containerSizeChanged(int);

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
