#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class PlayerInventory {
public:
    // prevent constructor by default
    PlayerInventory& operator=(PlayerInventory const&);
    PlayerInventory(PlayerInventory const&);
    PlayerInventory();

public:
    // NOLINTBEGIN
    // symbol: ?containerContentChanged@PlayerInventory@@UEAAXH@Z
    MCVAPI void containerContentChanged(int slot);

    // symbol: ?containerSizeChanged@PlayerInventory@@UEAAXH@Z
    MCVAPI void containerSizeChanged(int size);

    // symbol:
    // ?createTransactionContext@PlayerInventory@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
    MCVAPI void createTransactionContext(
        std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)> callback,
        std::function<void()>                                                                      execute
    );

    // symbol: ??0PlayerInventory@@QEAA@V?$unique_ptr@VInventory@@U?$default_delete@VInventory@@@std@@@std@@@Z
    MCAPI explicit PlayerInventory(std::unique_ptr<class Inventory> inv);

    // symbol: ?_getHudContainerManagerModel@PlayerInventory@@QEAA?AV?$weak_ptr@VHudContainerManagerModel@@@std@@XZ
    MCAPI std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();

    // symbol: ?add@PlayerInventory@@QEAA_NAEAVItemStack@@_N@Z
    MCAPI bool add(class ItemStack& item, bool linkEmptySlot);

    // symbol: ?addListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
    MCAPI void addListener(class ContainerContentChangeListener* listener);

    // symbol: ?canAdd@PlayerInventory@@QEBA_NAEBVItemStack@@@Z
    MCAPI bool canAdd(class ItemStack const& item) const;

    // symbol: ?clearSlot@PlayerInventory@@QEAAXHW4ContainerID@@@Z
    MCAPI void clearSlot(int slot, ::ContainerID containerId);

    // symbol: ?clearVanishEnchantedItemsOnDeath@PlayerInventory@@QEAAXXZ
    MCAPI void clearVanishEnchantedItemsOnDeath();

    // symbol: ?dropAllOnDeath@PlayerInventory@@QEAAX_N@Z
    MCAPI void dropAllOnDeath(bool onlyClearContainer);

    // symbol:
    // ?getAllContainerIds@PlayerInventory@@QEAAAEBV?$vector@W4ContainerID@@V?$allocator@W4ContainerID@@@std@@@std@@XZ
    MCAPI std::vector<::ContainerID> const& getAllContainerIds();

    // symbol:
    // ?getComplexItems@PlayerInventory@@QEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@W4ContainerID@@@Z
    MCAPI std::vector<class ItemStack> const& getComplexItems(::ContainerID containerId) const;

    // symbol: ?getContainer@PlayerInventory@@QEAAAEAVContainer@@XZ
    MCAPI class Container& getContainer();

    // symbol: ?getContainerSize@PlayerInventory@@QEBAHW4ContainerID@@@Z
    MCAPI int getContainerSize(::ContainerID containerId) const;

    // symbol: ?getFirstEmptySlot@PlayerInventory@@QEBAHXZ
    MCAPI int getFirstEmptySlot() const;

    // symbol: ?getHotbarSize@PlayerInventory@@QEBAHXZ
    MCAPI int getHotbarSize() const;

    // symbol: ?getItem@PlayerInventory@@QEBAAEBVItemStack@@HW4ContainerID@@@Z
    MCAPI class ItemStack const& getItem(int slot, ::ContainerID containerId) const;

    // symbol: ?getItemCount@PlayerInventory@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int getItemCount(std::function<bool(class ItemStack const&)> comparator);

    // symbol: ?getSelectedContainerId@PlayerInventory@@QEAA?AW4ContainerID@@XZ
    MCAPI ::ContainerID getSelectedContainerId();

    // symbol: ?getSelectedItem@PlayerInventory@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getSelectedItem() const;

    // symbol: ?getSelectedSlot@PlayerInventory@@QEBA?AUPlayerInventorySlotData@@XZ
    MCAPI struct PlayerInventorySlotData getSelectedSlot() const;

    // symbol: ?getSlotWithItem@PlayerInventory@@QEBAHAEBVItemStack@@_N1@Z
    MCAPI int getSlotWithItem(class ItemStack const& item, bool checkAux, bool checkData) const;

    // symbol: ?getSlots@PlayerInventory@@QEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    MCAPI std::vector<class ItemStack const*> getSlots() const;

    // symbol: ?hasResource@PlayerInventory@@QEAA_NH@Z
    MCAPI bool hasResource(int type);

    // symbol: ?init@PlayerInventory@@QEAAXV?$weak_ptr@VHudContainerManagerModel@@@std@@@Z
    MCAPI void init(std::weak_ptr<class HudContainerManagerModel> hud);

    // symbol: ?load@PlayerInventory@@QEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
    MCAPI void load(class ListTag const& inventoryList, class SemVersion const& version, class Level& level);

    // symbol: ?removeItem@PlayerInventory@@QEAAXHHW4ContainerID@@@Z
    MCAPI void removeItem(int slot, int count, ::ContainerID containerId);

    // symbol: ?removeListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
    MCAPI void removeListener(class ContainerContentChangeListener* listener);

    // symbol: ?removeResource@PlayerInventory@@QEAA_NH@Z
    MCAPI bool removeResource(int type);

    // symbol: ?save@PlayerInventory@@QEAA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> save();

    // symbol: ?selectSlot@PlayerInventory@@QEAA_NHW4ContainerID@@@Z
    MCAPI bool selectSlot(int slot, ::ContainerID containerId);

    // symbol: ?serverInitItemStackIds@PlayerInventory@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setContainerChanged@PlayerInventory@@QEAAXH@Z
    MCAPI void setContainerChanged(int slot);

    // symbol: ?setItem@PlayerInventory@@QEAAXHAEBVItemStack@@W4ContainerID@@_N@Z
    MCAPI void setItem(int slot, class ItemStack const& item, ::ContainerID containerId, bool forceBalanced);

    // symbol: ?setSelectedItem@PlayerInventory@@QEAAXAEBVItemStack@@@Z
    MCAPI void setSelectedItem(class ItemStack const& item);

    // symbol: ?setupDefaultInventory@PlayerInventory@@QEAAXXZ
    MCAPI void setupDefaultInventory();

    // symbol: ?swapSlots@PlayerInventory@@QEAAXHH@Z
    MCAPI void swapSlots(int from, int to);

    // symbol: ?tick@PlayerInventory@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND
};
