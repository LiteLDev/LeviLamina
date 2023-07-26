#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        SlotData& operator=(SlotData const&) = delete;
        SlotData(SlotData const&)            = delete;
        SlotData()                           = delete;
    };

public:
    // prevent constructor by default
    PlayerInventory& operator=(PlayerInventory const&) = delete;
    PlayerInventory(PlayerInventory const&)            = delete;
    PlayerInventory()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERINVENTORY
    /**
     * @symbol ?containerContentChanged\@PlayerInventory\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int); // NOLINT
    /**
     * @symbol ?containerSizeChanged\@PlayerInventory\@\@UEAAXH\@Z
     */
    MCVAPI void containerSizeChanged(int); // NOLINT
    /**
     * @symbol
     * ?createTransactionContext\@PlayerInventory\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void
        createTransactionContext(class std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)>, class std::function<void(void)>); // NOLINT
#endif
    /**
     * @symbol ?add\@PlayerInventory\@\@QEAA_NAEAVItemStack\@\@_N\@Z
     */
    MCAPI bool add(class ItemStack&, bool); // NOLINT
    /**
     * @symbol ?addListener\@PlayerInventory\@\@QEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCAPI void addListener(class ContainerContentChangeListener*); // NOLINT
    /**
     * @symbol ?canAdd\@PlayerInventory\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool canAdd(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?clearSlot\@PlayerInventory\@\@QEAAXHW4ContainerID\@\@\@Z
     */
    MCAPI void clearSlot(int, enum class ContainerID); // NOLINT
    /**
     * @symbol ?clearVanishEnchantedItemsOnDeath\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void clearVanishEnchantedItemsOnDeath(); // NOLINT
    /**
     * @symbol ?dropAllOnDeath\@PlayerInventory\@\@QEAAX_N\@Z
     */
    MCAPI void dropAllOnDeath(bool); // NOLINT
    /**
     * @symbol ?getContainerSize\@PlayerInventory\@\@QEBAHW4ContainerID\@\@\@Z
     */
    MCAPI int getContainerSize(enum class ContainerID) const; // NOLINT
    /**
     * @symbol ?getFirstEmptySlot\@PlayerInventory\@\@QEBAHXZ
     */
    MCAPI int getFirstEmptySlot() const; // NOLINT
    /**
     * @symbol ?getHotbarSize\@PlayerInventory\@\@QEBAHXZ
     */
    MCAPI int getHotbarSize() const; // NOLINT
    /**
     * @symbol ?getItem\@PlayerInventory\@\@QEBAAEBVItemStack\@\@HW4ContainerID\@\@\@Z
     */
    MCAPI class ItemStack const& getItem(int, enum class ContainerID) const; // NOLINT
    /**
     * @symbol ?getItemCount\@PlayerInventory\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool(class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?getSelectedContainerId\@PlayerInventory\@\@QEAA?AW4ContainerID\@\@XZ
     */
    MCAPI enum class ContainerID getSelectedContainerId(); // NOLINT
    /**
     * @symbol ?getSelectedItem\@PlayerInventory\@\@QEAAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getSelectedItem(); // NOLINT
    /**
     * @symbol ?getSelectedSlot\@PlayerInventory\@\@QEBA?AUSlotData\@1\@XZ
     */
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const; // NOLINT
    /**
     * @symbol ?getSlotWithItem\@PlayerInventory\@\@QEBAHAEBVItemStack\@\@_N1\@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const&, bool, bool) const; // NOLINT
    /**
     * @symbol
     * ?getSlots\@PlayerInventory\@\@QEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ItemStack const*> getSlots() const; // NOLINT
    /**
     * @symbol ?removeItem\@PlayerInventory\@\@QEAAXHHW4ContainerID\@\@\@Z
     */
    MCAPI void removeItem(int, int, enum class ContainerID); // NOLINT
    /**
     * @symbol ?removeListener\@PlayerInventory\@\@QEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCAPI void removeListener(class ContainerContentChangeListener*); // NOLINT
    /**
     * @symbol ?removeResource\@PlayerInventory\@\@QEAA_NH\@Z
     */
    MCAPI bool removeResource(int); // NOLINT
    /**
     * @symbol ?selectSlot\@PlayerInventory\@\@QEAA_NHW4ContainerID\@\@\@Z
     */
    MCAPI bool selectSlot(int, enum class ContainerID); // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@PlayerInventory\@\@QEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setContainerChanged\@PlayerInventory\@\@QEAAXH\@Z
     */
    MCAPI void setContainerChanged(int); // NOLINT
    /**
     * @symbol ?setItem\@PlayerInventory\@\@QEAAXHAEBVItemStack\@\@W4ContainerID\@\@_N\@Z
     */
    MCAPI void setItem(int, class ItemStack const&, enum class ContainerID, bool); // NOLINT
    /**
     * @symbol ?setSelectedItem\@PlayerInventory\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setSelectedItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?setupDefaultInventory\@PlayerInventory\@\@QEAAXXZ
     */
    MCAPI void setupDefaultInventory(); // NOLINT
    /**
     * @symbol ?swapSlots\@PlayerInventory\@\@QEAAXHH\@Z
     */
    MCAPI void swapSlots(int, int); // NOLINT
};
