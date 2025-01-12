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
class Level;
class ListTag;
class SaveContext;
class SemVersion;
struct PlayerInventorySlotData;
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

    MCAPI ::std::weak_ptr<::HudContainerManagerModel> _getHudContainerManagerModel() const;

    MCAPI bool add(::ItemStack& item, bool linkEmptySlot);

    MCAPI void addListener(::ContainerContentChangeListener* listener);

    MCAPI bool canAdd(::ItemStack const& item) const;

    MCAPI void clearSlot(int slot, ::ContainerID containerId);

    MCAPI void clearVanishEnchantedItemsOnDeath();

    MCAPI void dropAllOnDeath(bool onlyClearContainer);

    MCAPI ::std::vector<::ContainerID> const& getAllContainerIds();

    MCAPI ::std::vector<::ItemStack> const& getComplexItems(::ContainerID containerId) const;

    MCFOLD ::Container& getContainer();

    MCAPI int getContainerSize(::ContainerID containerId) const;

    MCAPI int getFirstEmptySlot() const;

    MCAPI int getHotbarSize() const;

    MCAPI ::ItemStack const& getItem(int slot, ::ContainerID containerId) const;

    MCAPI ::ContainerID getSelectedContainerId();

    MCAPI ::ItemStack const& getSelectedItem() const;

    MCAPI ::PlayerInventorySlotData getSelectedSlot() const;

    MCAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;

    MCAPI ::std::vector<::ItemStack const*> getSlots() const;

    MCAPI bool hasResource(int type);

    MCAPI void init(::std::weak_ptr<::HudContainerManagerModel> hud);

    MCAPI void load(::ListTag const& inventoryList, ::SemVersion const&, ::Level&);

    MCAPI void removeItem(int slot, int count, ::ContainerID containerId);

    MCAPI void removeListener(::ContainerContentChangeListener* listener);

    MCAPI bool removeResource(int type);

    MCAPI ::std::unique_ptr<::ListTag> save(::SaveContext const& saveContext);

    MCAPI bool selectSlot(int slot, ::ContainerID containerId);

    MCAPI void
    serverInitItemStackIds(int containerSlot, int count, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCAPI void setContainerChanged(int slot);

    MCAPI void setItem(int slot, ::ItemStack const& item, ::ContainerID containerId, bool forceBalanced);

    MCAPI void setSelectedItem(::ItemStack const& item);

    MCAPI void setupDefaultInventory();

    MCAPI void swapSlots(int from, int to);

    MCAPI void tick();
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
