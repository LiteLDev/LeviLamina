#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChiseledBookshelfBlockActor {

public:
    // prevent constructor by default
    ChiseledBookshelfBlockActor& operator=(ChiseledBookshelfBlockActor const&) = delete;
    ChiseledBookshelfBlockActor(ChiseledBookshelfBlockActor const&)            = delete;
    ChiseledBookshelfBlockActor()                                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHISELEDBOOKSHELFBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@ChiseledBookshelfBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@ChiseledBookshelfBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?addItemToFirstEmptySlot\@ChiseledBookshelfBlockActor\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool addItemToFirstEmptySlot(class ItemStack const&); // NOLINT
    /**
     * @symbol ?canPullOutItem\@ChiseledBookshelfBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canPushInItem\@ChiseledBookshelfBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getContainer\@ChiseledBookshelfBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@ChiseledBookshelfBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@ChiseledBookshelfBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@ChiseledBookshelfBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@ChiseledBookshelfBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@ChiseledBookshelfBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?isEmpty\@ChiseledBookshelfBlockActor\@\@UEBA_NXZ
     */
    MCVAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?load\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onChanged\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ?save\@ChiseledBookshelfBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?serverInitItemStackIds\@ChiseledBookshelfBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@ChiseledBookshelfBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
#endif
    /**
     * @symbol ??0ChiseledBookshelfBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChiseledBookshelfBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getLastInteractedSlot\@ChiseledBookshelfBlockActor\@\@QEBAIXZ
     */
    MCAPI unsigned int getLastInteractedSlot() const; // NOLINT
    /**
     * @symbol ?retrieveBook\@ChiseledBookshelfBlockActor\@\@QEAA?AVItemStack\@\@H\@Z
     */
    MCAPI class ItemStack retrieveBook(int); // NOLINT
    /**
     * @symbol ?allowedItem\@ChiseledBookshelfBlockActor\@\@SA_NAEBVItemStack\@\@\@Z
     */
    MCAPI static bool allowedItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?tryGet\@ChiseledBookshelfBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class ChiseledBookshelfBlockActor* tryGet(class BlockSource&, class BlockPos const&); // NOLINT

    // private:
    /**
     * @symbol ?_numberOfBooksStored\@ChiseledBookshelfBlockActor\@\@AEBAIXZ
     */
    MCAPI unsigned int _numberOfBooksStored() const; // NOLINT

private:
};
