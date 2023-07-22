/**
 * @file  PlayerInventory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?containerContentChanged\@PlayerInventory\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @symbol  ?containerSizeChanged\@PlayerInventory\@\@UEAAXH\@Z
     */
    MCVAPI void containerSizeChanged(int);
    /**
     * @symbol  ?createTransactionContext\@PlayerInventory\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
#endif
    /**
     * @symbol  ??0PlayerInventory\@\@QEAA\@V?$unique_ptr\@VInventory\@\@U?$default_delete\@VInventory\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerInventory(std::unique_ptr<class Inventory>);
    /**
     * @symbol  ?_getHudContainerManagerModel\@PlayerInventory\@\@QEAA?AV?$weak_ptr\@VHudContainerManagerModel\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();
    /**
     * @symbol  ?add\@PlayerInventory\@\@QEAA_NAEAVItemStack\@\@_N\@Z
     */
    MCAPI bool add(class ItemStack &, bool);
    /**
     * @symbol  ?addListener\@PlayerInventory\@\@QEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCAPI void addListener(class ContainerContentChangeListener *);
    /**
     * @symbol  ?canAdd\@PlayerInventory\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool canAdd(class ItemStack const &) const;
    /**
     * @symbol  ?clearInventory\@PlayerInventory\@\@QEAAHH\@Z
     */
    MCAPI int clearInventory(int);
    /**
     * @symbol  ?clearSlot\@PlayerInventory\@\@QEAAXHW4ContainerID\@\@\@Z
     */
    MCAPI void clearSlot(int, enum class ContainerID);
    /**
     * @symbol  ?clearVanishEnchantedItemsOnDeath\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void clearVanishEnchantedItemsOnDeath();
    /**
     * @symbol  ?dropAllOnDeath\@PlayerInventory\@\@QEAAX_N\@Z
     */
    MCAPI void dropAllOnDeath(bool);
    /**
     * @symbol  ?getAllContainerIds\@PlayerInventory\@\@QEAAAEBV?$vector\@W4ContainerID\@\@V?$allocator\@W4ContainerID\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<enum class ContainerID> const & getAllContainerIds();
    /**
     * @symbol  ?getComplexItems\@PlayerInventory\@\@QEBAAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@W4ContainerID\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> const & getComplexItems(enum class ContainerID) const;
    /**
     * @symbol  ?getContainer\@PlayerInventory\@\@QEAAAEAVContainer\@\@XZ
     */
    MCAPI class Container & getContainer();
    /**
     * @symbol  ?getContainerSize\@PlayerInventory\@\@QEBAHW4ContainerID\@\@\@Z
     */
    MCAPI int getContainerSize(enum class ContainerID) const;
    /**
     * @symbol  ?getFirstEmptySlot\@PlayerInventory\@\@QEBAHXZ
     */
    MCAPI int getFirstEmptySlot() const;
    /**
     * @symbol  ?getHotbarSize\@PlayerInventory\@\@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @symbol  ?getItem\@PlayerInventory\@\@QEBAAEBVItemStack\@\@HW4ContainerID\@\@\@Z
     */
    MCAPI class ItemStack const & getItem(int, enum class ContainerID) const;
    /**
     * @symbol  ?getItemCount\@PlayerInventory\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol  ?getSelectedContainerId\@PlayerInventory\@\@QEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID getSelectedContainerId();
    /**
     * @symbol  ?getSelectedItem\@PlayerInventory\@\@QEAAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getSelectedItem();
    /**
     * @symbol  ?getSelectedSlot\@PlayerInventory\@\@QEBA?AUSlotData\@1\@XZ
     */
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;
    /**
     * @symbol  ?getSlotWithItem\@PlayerInventory\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @symbol  ?hasResource\@PlayerInventory\@\@QEAA_NH\@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @symbol  ?init\@PlayerInventory\@\@QEAAXV?$weak_ptr\@VHudContainerManagerModel\@\@\@std\@\@\@Z
     */
    MCAPI void init(class std::weak_ptr<class HudContainerManagerModel>);
    /**
     * @symbol  ?load\@PlayerInventory\@\@QEAAXAEBVListTag\@\@AEBVSemVersion\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @symbol  ?removeItem\@PlayerInventory\@\@QEAAXHHW4ContainerID\@\@\@Z
     */
    MCAPI void removeItem(int, int, enum class ContainerID);
    /**
     * @symbol  ?removeListener\@PlayerInventory\@\@QEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCAPI void removeListener(class ContainerContentChangeListener *);
    /**
     * @symbol  ?removeResource\@PlayerInventory\@\@QEAAHAEBVItemStack\@\@_N1H\@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @symbol  ?removeResource\@PlayerInventory\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @symbol  ?save\@PlayerInventory\@\@QEAA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save();
    /**
     * @symbol  ?selectSlot\@PlayerInventory\@\@QEAA_NHW4ContainerID\@\@\@Z
     */
    MCAPI bool selectSlot(int, enum class ContainerID);
    /**
     * @symbol  ?serverInitItemStackId\@PlayerInventory\@\@QEAAXH\@Z
     */
    MCAPI void serverInitItemStackId(int);
    /**
     * @symbol  ?serverInitItemStackIds\@PlayerInventory\@\@QEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setContainerChanged\@PlayerInventory\@\@QEAAXH\@Z
     */
    MCAPI void setContainerChanged(int);
    /**
     * @symbol  ?setItem\@PlayerInventory\@\@QEAAXHAEBVItemStack\@\@W4ContainerID\@\@_N\@Z
     */
    MCAPI void setItem(int, class ItemStack const &, enum class ContainerID, bool);
    /**
     * @symbol  ?setSelectedItem\@PlayerInventory\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setSelectedItem(class ItemStack const &);
    /**
     * @symbol  ?setupDefaultInventory\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void setupDefaultInventory();
    /**
     * @symbol  ?swapSlots\@PlayerInventory\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int, int);
    /**
     * @symbol  ?tick\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void tick();

};