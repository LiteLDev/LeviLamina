/**
 * @file  MC/PlayerInventory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerInventory.
 *
 */
class PlayerInventory {

#define AFTER_EXTRA
// Add Member There
public:
struct SlotData {
    SlotData() = delete;
    SlotData(SlotData const&) = delete;
    SlotData(SlotData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINVENTORY
public:
    class PlayerInventory& operator=(class PlayerInventory const &) = delete;
    PlayerInventory(class PlayerInventory const &) = delete;
    PlayerInventory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERINVENTORY
    /**
     * @hash   -216806905
     * @symbol ?containerContentChanged@PlayerInventory@@UEAAXH@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @hash   1503168177
     * @symbol ?containerSizeChanged@PlayerInventory@@UEAAXH@Z
     */
    MCVAPI void containerSizeChanged(int);
    /**
     * @hash   -554211047
     * @symbol ?createTransactionContext@PlayerInventory@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
     */
    MCVAPI void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
#endif
    /**
     * @hash   -360173422
     * @symbol ??0PlayerInventory@@QEAA@V?$unique_ptr@VInventory@@U?$default_delete@VInventory@@@std@@@std@@@Z
     */
    MCAPI PlayerInventory(std::unique_ptr<class Inventory>);
    /**
     * @hash   2134791761
     * @symbol ?_getHudContainerManagerModel@PlayerInventory@@QEAA?AV?$weak_ptr@VHudContainerManagerModel@@@std@@XZ
     */
    MCAPI class std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();
    /**
     * @hash   -1975299422
     * @symbol ?add@PlayerInventory@@QEAA_NAEAVItemStack@@_N@Z
     */
    MCAPI bool add(class ItemStack &, bool);
    /**
     * @hash   -1245693931
     * @symbol ?addListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
     */
    MCAPI void addListener(class ContainerContentChangeListener *);
    /**
     * @hash   1934783967
     * @symbol ?canAdd@PlayerInventory@@QEBA_NAEBVItemStack@@@Z
     */
    MCAPI bool canAdd(class ItemStack const &) const;
    /**
     * @hash   -593129291
     * @symbol ?clearInventory@PlayerInventory@@QEAAHH@Z
     */
    MCAPI int clearInventory(int);
    /**
     * @hash   1730498795
     * @symbol ?clearSlot@PlayerInventory@@QEAAXHW4ContainerID@@@Z
     */
    MCAPI void clearSlot(int, enum ContainerID);
    /**
     * @hash   232814765
     * @symbol ?clearVanishEnchantedItemsOnDeath@PlayerInventory@@QEAAXXZ
     */
    MCAPI void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   1950145506
     * @symbol ?dropAllOnDeath@PlayerInventory@@QEAAX_N@Z
     */
    MCAPI void dropAllOnDeath(bool);
    /**
     * @hash   805225960
     * @symbol ?getAllContainerIds@PlayerInventory@@QEAAAEBV?$vector@W4ContainerID@@V?$allocator@W4ContainerID@@@std@@@std@@XZ
     */
    MCAPI std::vector<enum ContainerID> const & getAllContainerIds();
    /**
     * @hash   1297185111
     * @symbol ?getComplexItems@PlayerInventory@@QEBAAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@W4ContainerID@@@Z
     */
    MCAPI std::vector<class ItemStack> const & getComplexItems(enum ContainerID) const;
    /**
     * @hash   -1436392854
     * @symbol ?getContainer@PlayerInventory@@QEAAAEAVContainer@@XZ
     */
    MCAPI class Container & getContainer();
    /**
     * @hash   -137269165
     * @symbol ?getContainerSize@PlayerInventory@@QEBAHW4ContainerID@@@Z
     */
    MCAPI int getContainerSize(enum ContainerID) const;
    /**
     * @hash   -1196508118
     * @symbol ?getFirstEmptySlot@PlayerInventory@@QEBAHXZ
     */
    MCAPI int getFirstEmptySlot() const;
    /**
     * @hash   330682658
     * @symbol ?getHotbarSize@PlayerInventory@@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @hash   764652202
     * @symbol ?getItem@PlayerInventory@@QEBAAEBVItemStack@@HW4ContainerID@@@Z
     */
    MCAPI class ItemStack const & getItem(int, enum ContainerID) const;
    /**
     * @hash   -1357861849
     * @symbol ?getItemCount@PlayerInventory@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @hash   57554744
     * @symbol ?getSelectedContainerId@PlayerInventory@@QEAA?AW4ContainerID@@XZ
     */
    MCAPI enum ContainerID getSelectedContainerId();
    /**
     * @hash   1035655042
     * @symbol ?getSelectedItem@PlayerInventory@@QEAAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getSelectedItem();
    /**
     * @hash   -568413870
     * @symbol ?getSelectedSlot@PlayerInventory@@QEBA?AUSlotData@1@XZ
     */
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;
    /**
     * @hash   1764408999
     * @symbol ?getSlotWithItem@PlayerInventory@@QEBAHAEBVItemStack@@_N1@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @hash   1381349987
     * @symbol ?hasResource@PlayerInventory@@QEAA_NH@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @hash   1032886997
     * @symbol ?init@PlayerInventory@@QEAAXV?$weak_ptr@VHudContainerManagerModel@@@std@@@Z
     */
    MCAPI void init(class std::weak_ptr<class HudContainerManagerModel>);
    /**
     * @hash   -1769719724
     * @symbol ?load@PlayerInventory@@QEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
     */
    MCAPI void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @hash   -1613746462
     * @symbol ?removeItem@PlayerInventory@@QEAAXHHW4ContainerID@@@Z
     */
    MCAPI void removeItem(int, int, enum ContainerID);
    /**
     * @hash   1864067299
     * @symbol ?removeListener@PlayerInventory@@QEAAXPEAVContainerContentChangeListener@@@Z
     */
    MCAPI void removeListener(class ContainerContentChangeListener *);
    /**
     * @hash   500770588
     * @symbol ?removeResource@PlayerInventory@@QEAAHAEBVItemStack@@_N1H@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @hash   1045784945
     * @symbol ?removeResource@PlayerInventory@@QEAA_NH@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @hash   -1145429382
     * @symbol ?save@PlayerInventory@@QEAA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save();
    /**
     * @hash   -1013236358
     * @symbol ?selectSlot@PlayerInventory@@QEAA_NHW4ContainerID@@@Z
     */
    MCAPI bool selectSlot(int, enum ContainerID);
    /**
     * @hash   -1759102148
     * @symbol ?serverInitItemStackId@PlayerInventory@@QEAAXH@Z
     */
    MCAPI void serverInitItemStackId(int);
    /**
     * @hash   467281568
     * @symbol ?serverInitItemStackIds@PlayerInventory@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1183164068
     * @symbol ?setContainerChanged@PlayerInventory@@QEAAXH@Z
     */
    MCAPI void setContainerChanged(int);
    /**
     * @hash   83424655
     * @symbol ?setItem@PlayerInventory@@QEAAXHAEBVItemStack@@W4ContainerID@@_N@Z
     */
    MCAPI void setItem(int, class ItemStack const &, enum ContainerID, bool);
    /**
     * @hash   2094001558
     * @symbol ?setSelectedItem@PlayerInventory@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setSelectedItem(class ItemStack const &);
    /**
     * @hash   -815565627
     * @symbol ?setupDefaultInventory@PlayerInventory@@QEAAXXZ
     */
    MCAPI void setupDefaultInventory();
    /**
     * @hash   -673046479
     * @symbol ?swapSlots@PlayerInventory@@QEAAXHH@Z
     */
    MCAPI void swapSlots(int, int);
    /**
     * @hash   1504281101
     * @symbol ?tick@PlayerInventory@@QEAAXXZ
     */
    MCAPI void tick();

};