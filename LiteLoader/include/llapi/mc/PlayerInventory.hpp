/**
 * @file  PlayerInventory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -862076121
     * @symbol  ?containerContentChanged\@PlayerInventory\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @hash   1595055153
     * @symbol  ?containerSizeChanged\@PlayerInventory\@\@UEAAXH\@Z
     */
    MCVAPI void containerSizeChanged(int);
    /**
     * @hash   -1199480263
     * @symbol  ?createTransactionContext\@PlayerInventory\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
#endif
    /**
     * @hash   -1005488766
     * @symbol  ??0PlayerInventory\@\@QEAA\@V?$unique_ptr\@VInventory\@\@U?$default_delete\@VInventory\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PlayerInventory(std::unique_ptr<class Inventory>);
    /**
     * @hash   1489491793
     * @symbol  ?_getHudContainerManagerModel\@PlayerInventory\@\@QEAA?AV?$weak_ptr\@VHudContainerManagerModel\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class HudContainerManagerModel> _getHudContainerManagerModel();
    /**
     * @hash   1674367906
     * @symbol  ?add\@PlayerInventory\@\@QEAA_NAEAVItemStack\@\@_N\@Z
     */
    MCAPI bool add(class ItemStack &, bool);
    /**
     * @hash   -1890993899
     * @symbol  ?addListener\@PlayerInventory\@\@QEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCAPI void addListener(class ContainerContentChangeListener *);
    /**
     * @hash   1289499375
     * @symbol  ?canAdd\@PlayerInventory\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool canAdd(class ItemStack const &) const;
    /**
     * @hash   -1238413883
     * @symbol  ?clearInventory\@PlayerInventory\@\@QEAAHH\@Z
     */
    MCAPI int clearInventory(int);
    /**
     * @hash   1085214203
     * @symbol  ?clearSlot\@PlayerInventory\@\@QEAAXHW4ContainerID\@\@\@Z
     */
    MCAPI void clearSlot(int, enum class ContainerID);
    /**
     * @hash   -412469827
     * @symbol  ?clearVanishEnchantedItemsOnDeath\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   1304907042
     * @symbol  ?dropAllOnDeath\@PlayerInventory\@\@QEAAX_N\@Z
     */
    MCAPI void dropAllOnDeath(bool);
    /**
     * @hash   159987496
     * @symbol  ?getAllContainerIds\@PlayerInventory\@\@QEAAAEBV?$vector\@W4ContainerID\@\@V?$allocator\@W4ContainerID\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<enum class ContainerID> const & getAllContainerIds();
    /**
     * @hash   651946647
     * @symbol  ?getComplexItems\@PlayerInventory\@\@QEBAAEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@W4ContainerID\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> const & getComplexItems(enum class ContainerID) const;
    /**
     * @hash   -2081631318
     * @symbol  ?getContainer\@PlayerInventory\@\@QEAAAEAVContainer\@\@XZ
     */
    MCAPI class Container & getContainer();
    /**
     * @hash   -782507629
     * @symbol  ?getContainerSize\@PlayerInventory\@\@QEBAHW4ContainerID\@\@\@Z
     */
    MCAPI int getContainerSize(enum class ContainerID) const;
    /**
     * @hash   -1841746582
     * @symbol  ?getFirstEmptySlot\@PlayerInventory\@\@QEBAHXZ
     */
    MCAPI int getFirstEmptySlot() const;
    /**
     * @hash   -314555806
     * @symbol  ?getHotbarSize\@PlayerInventory\@\@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @hash   119413738
     * @symbol  ?getItem\@PlayerInventory\@\@QEBAAEBVItemStack\@\@HW4ContainerID\@\@\@Z
     */
    MCAPI class ItemStack const & getItem(int, enum class ContainerID) const;
    /**
     * @hash   -2003084937
     * @symbol  ?getItemCount\@PlayerInventory\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @hash   1741389688
     * @symbol  ?getSelectedContainerId\@PlayerInventory\@\@QEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID getSelectedContainerId();
    /**
     * @hash   390416578
     * @symbol  ?getSelectedItem\@PlayerInventory\@\@QEAAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getSelectedItem();
    /**
     * @hash   -1213652334
     * @symbol  ?getSelectedSlot\@PlayerInventory\@\@QEBA?AUSlotData\@1\@XZ
     */
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;
    /**
     * @hash   1119170535
     * @symbol  ?getSlotWithItem\@PlayerInventory\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @hash   736111523
     * @symbol  ?hasResource\@PlayerInventory\@\@QEAA_NH\@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @hash   387648533
     * @symbol  ?init\@PlayerInventory\@\@QEAAXV?$weak_ptr\@VHudContainerManagerModel\@\@\@std\@\@\@Z
     */
    MCAPI void init(class std::weak_ptr<class HudContainerManagerModel>);
    /**
     * @hash   1880039860
     * @symbol  ?load\@PlayerInventory\@\@QEAAXAEBVListTag\@\@AEBVSemVersion\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @hash   2036013122
     * @symbol  ?removeItem\@PlayerInventory\@\@QEAAXHHW4ContainerID\@\@\@Z
     */
    MCAPI void removeItem(int, int, enum class ContainerID);
    /**
     * @hash   1218859587
     * @symbol  ?removeListener\@PlayerInventory\@\@QEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCAPI void removeListener(class ContainerContentChangeListener *);
    /**
     * @hash   -144421748
     * @symbol  ?removeResource\@PlayerInventory\@\@QEAAHAEBVItemStack\@\@_N1H\@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @hash   400592609
     * @symbol  ?removeResource\@PlayerInventory\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @hash   -1790621718
     * @symbol  ?save\@PlayerInventory\@\@QEAA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save();
    /**
     * @hash   -1658428694
     * @symbol  ?selectSlot\@PlayerInventory\@\@QEAA_NHW4ContainerID\@\@\@Z
     */
    MCAPI bool selectSlot(int, enum class ContainerID);
    /**
     * @hash   1890672812
     * @symbol  ?serverInitItemStackId\@PlayerInventory\@\@QEAAXH\@Z
     */
    MCAPI void serverInitItemStackId(int);
    /**
     * @hash   -177895392
     * @symbol  ?serverInitItemStackIds\@PlayerInventory\@\@QEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1828310276
     * @symbol  ?setContainerChanged\@PlayerInventory\@\@QEAAXH\@Z
     */
    MCAPI void setContainerChanged(int);
    /**
     * @hash   -561721553
     * @symbol  ?setItem\@PlayerInventory\@\@QEAAXHAEBVItemStack\@\@W4ContainerID\@\@_N\@Z
     */
    MCAPI void setItem(int, class ItemStack const &, enum class ContainerID, bool);
    /**
     * @hash   1448870726
     * @symbol  ?setSelectedItem\@PlayerInventory\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setSelectedItem(class ItemStack const &);
    /**
     * @hash   -1460696459
     * @symbol  ?setupDefaultInventory\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void setupDefaultInventory();
    /**
     * @hash   -1318177311
     * @symbol  ?swapSlots\@PlayerInventory\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int, int);
    /**
     * @hash   859150269
     * @symbol  ?tick\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void tick();

};