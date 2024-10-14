#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

class PlayerInventory {
public:
    // prevent constructor by default
    PlayerInventory& operator=(PlayerInventory const&);
    PlayerInventory(PlayerInventory const&);
    PlayerInventory();

public:
    // NOLINTBEGIN
    MCVAPI void containerContentChanged(int slot);

    MCVAPI void containerSizeChanged(int size);

    MCVAPI void createTransactionContext(
        std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)> callback,
        std::function<void()>                                                                      execute
    );

    MCAPI explicit PlayerInventory(std::unique_ptr<class Inventory> inv);

    MCAPI std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();

    MCAPI bool add(class ItemStack& item, bool linkEmptySlot);

    MCAPI void addListener(class ContainerContentChangeListener* listener);

    MCAPI bool canAdd(class ItemStack const& item) const;

    MCAPI int clearInventory(int resize);

    MCAPI void clearSlot(int slot, ::ContainerID containerId);

    MCAPI void clearVanishEnchantedItemsOnDeath();

    MCAPI void dropAllOnDeath(bool onlyClearContainer);

    MCAPI std::vector<::ContainerID> const& getAllContainerIds();

    MCAPI std::vector<class ItemStack> const& getComplexItems(::ContainerID containerId) const;

    MCAPI class Container& getContainer();

    MCAPI int getContainerSize(::ContainerID containerId) const;

    MCAPI int getFirstEmptySlot() const;

    MCAPI int getHotbarSize() const;

    MCAPI class ItemStack const& getItem(int slot, ::ContainerID containerId) const;

    MCAPI int getItemCount(std::function<bool(class ItemStack const&)> comparator);

    MCAPI ::ContainerID getSelectedContainerId();

    MCAPI class ItemStack const& getSelectedItem() const;

    MCAPI struct PlayerInventorySlotData getSelectedSlot() const;

    MCAPI int getSlotWithItem(class ItemStack const& item, bool checkAux, bool checkData) const;

    MCAPI std::vector<class ItemStack const*> getSlots() const;

    MCAPI bool hasResource(int type);

    MCAPI void init(std::weak_ptr<class HudContainerManagerModel> hud);

    MCAPI void load(class ListTag const& inventoryList, class SemVersion const& version, class Level& level);

    MCAPI void removeItem(int slot, int count, ::ContainerID containerId);

    MCAPI void removeListener(class ContainerContentChangeListener* listener);

    MCAPI bool removeResource(int type);

    MCAPI int removeResource(class ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    MCAPI std::unique_ptr<class ListTag> save();

    MCAPI bool selectSlot(int slot, ::ContainerID containerId);

    MCAPI void serverInitItemStackId(int containerSlot);

    MCAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setContainerChanged(int slot);

    MCAPI void setItem(int slot, class ItemStack const& item, ::ContainerID containerId, bool forceBalanced);

    MCAPI void setSelectedItem(class ItemStack const& item);

    MCAPI void setupDefaultInventory();

    MCAPI void swapSlots(int from, int to);

    MCAPI void tick();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForContainerSizeChangeListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void containerContentChanged$(int slot);

    MCAPI void containerSizeChanged$(int size);

    MCAPI void createTransactionContext$(
        std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)> callback,
        std::function<void()>                                                                      execute
    );

    // NOLINTEND
};
