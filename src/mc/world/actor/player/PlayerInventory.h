#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class PlayerInventory {
public:
    // PlayerInventory inner types declare
    // clang-format off
    struct SlotData;
    // clang-format on

    // PlayerInventory inner types define
    struct SlotData {
    public:
        // prevent constructor by default
        SlotData& operator=(SlotData const&);
        SlotData(SlotData const&);
        SlotData();
    };

public:
    // prevent constructor by default
    PlayerInventory& operator=(PlayerInventory const&);
    PlayerInventory(PlayerInventory const&);
    PlayerInventory();

public:
    // NOLINTBEGIN
    // symbol: ?containerContentChanged@PlayerInventory@@UEAAXH@Z
    MCVAPI void containerContentChanged(int);

    // symbol: ?containerSizeChanged@PlayerInventory@@UEAAXH@Z
    MCVAPI void containerSizeChanged(int);

    // symbol:
    // ?createTransactionContext@PlayerInventory@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
    MCVAPI void
        createTransactionContext(std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)>, std::function<void(void)>);

    // symbol: ??0PlayerInventory@@QEAA@V?$unique_ptr@VInventory@@U?$default_delete@VInventory@@@std@@@std@@@Z
    MCAPI explicit PlayerInventory(std::unique_ptr<class Inventory>);

    // symbol: ?_getHudContainerManagerModel@PlayerInventory@@QEAA?AV?$weak_ptr@VHudContainerManagerModel@@@std@@XZ
    MCAPI std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();

    // symbol: ?add@PlayerInventory@@QEAA_NAEAVItemStack@@_N@Z
    MCAPI bool add(class ItemStack&, bool);

    // symbol: ?addListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
    MCAPI void addListener(class ContainerContentChangeListener*);

    // symbol: ?canAdd@PlayerInventory@@QEBA_NAEBVItemStack@@@Z
    MCAPI bool canAdd(class ItemStack const&) const;

    // symbol: ?clearInventory@PlayerInventory@@QEAAHH@Z
    MCAPI int clearInventory(int);

    // symbol: ?clearSlot@PlayerInventory@@QEAAXHW4ContainerID@@@Z
    MCAPI void clearSlot(int, ::ContainerID);

    // symbol: ?clearVanishEnchantedItemsOnDeath@PlayerInventory@@QEAAXXZ
    MCAPI void clearVanishEnchantedItemsOnDeath();

    // symbol: ?dropAllOnDeath@PlayerInventory@@QEAAX_N@Z
    MCAPI void dropAllOnDeath(bool);

    // symbol:
    // ?getAllContainerIds@PlayerInventory@@QEAAAEBV?$vector@W4ContainerID@@V?$allocator@W4ContainerID@@@std@@@std@@XZ
    MCAPI std::vector<::ContainerID> const& getAllContainerIds();

    // symbol:
    // ?getComplexItems@PlayerInventory@@QEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@W4ContainerID@@@Z
    MCAPI std::vector<class ItemStack> const& getComplexItems(::ContainerID) const;

    // symbol: ?getContainer@PlayerInventory@@QEAAAEAVContainer@@XZ
    MCAPI class Container& getContainer();

    // symbol: ?getContainerSize@PlayerInventory@@QEBAHW4ContainerID@@@Z
    MCAPI int getContainerSize(::ContainerID) const;

    // symbol: ?getFirstEmptySlot@PlayerInventory@@QEBAHXZ
    MCAPI int getFirstEmptySlot() const;

    // symbol: ?getHotbarSize@PlayerInventory@@QEBAHXZ
    MCAPI int getHotbarSize() const;

    // symbol: ?getItem@PlayerInventory@@QEBAAEBVItemStack@@HW4ContainerID@@@Z
    MCAPI class ItemStack const& getItem(int, ::ContainerID) const;

    // symbol: ?getItemCount@PlayerInventory@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int getItemCount(std::function<bool(class ItemStack const&)>);

    // symbol: ?getSelectedContainerId@PlayerInventory@@QEAA?AW4ContainerID@@XZ
    MCAPI ::ContainerID getSelectedContainerId();

    // symbol: ?getSelectedItem@PlayerInventory@@QEAAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getSelectedItem();

    // symbol: ?getSelectedSlot@PlayerInventory@@QEBA?AUSlotData@1@XZ
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;

    // symbol: ?getSlotWithItem@PlayerInventory@@QEBAHAEBVItemStack@@_N1@Z
    MCAPI int getSlotWithItem(class ItemStack const&, bool, bool) const;

    // symbol: ?getSlots@PlayerInventory@@QEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    MCAPI std::vector<class ItemStack const*> getSlots() const;

    // symbol: ?hasResource@PlayerInventory@@QEAA_NH@Z
    MCAPI bool hasResource(int);

    // symbol: ?init@PlayerInventory@@QEAAXV?$weak_ptr@VHudContainerManagerModel@@@std@@@Z
    MCAPI void init(std::weak_ptr<class HudContainerManagerModel>);

    // symbol: ?load@PlayerInventory@@QEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
    MCAPI void load(class ListTag const&, class SemVersion const&, class Level&);

    // symbol: ?removeItem@PlayerInventory@@QEAAXHHW4ContainerID@@@Z
    MCAPI void removeItem(int, int, ::ContainerID);

    // symbol: ?removeListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
    MCAPI void removeListener(class ContainerContentChangeListener*);

    // symbol: ?removeResource@PlayerInventory@@QEAA_NH@Z
    MCAPI bool removeResource(int);

    // symbol: ?removeResource@PlayerInventory@@QEAAHAEBVItemStack@@_N1H@Z
    MCAPI int removeResource(class ItemStack const&, bool, bool, int);

    // symbol: ?save@PlayerInventory@@QEAA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> save();

    // symbol: ?selectSlot@PlayerInventory@@QEAA_NHW4ContainerID@@@Z
    MCAPI bool selectSlot(int, ::ContainerID);

    // symbol: ?serverInitItemStackIds@PlayerInventory@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    // symbol: ?setContainerChanged@PlayerInventory@@QEAAXH@Z
    MCAPI void setContainerChanged(int);

    // symbol: ?setItem@PlayerInventory@@QEAAXHAEBVItemStack@@W4ContainerID@@_N@Z
    MCAPI void setItem(int, class ItemStack const&, ::ContainerID, bool);

    // symbol: ?setSelectedItem@PlayerInventory@@QEAAXAEBVItemStack@@@Z
    MCAPI void setSelectedItem(class ItemStack const&);

    // symbol: ?setupDefaultInventory@PlayerInventory@@QEAAXXZ
    MCAPI void setupDefaultInventory();

    // symbol: ?swapSlots@PlayerInventory@@QEAAXHH@Z
    MCAPI void swapSlots(int, int);

    // symbol: ?tick@PlayerInventory@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND
};
