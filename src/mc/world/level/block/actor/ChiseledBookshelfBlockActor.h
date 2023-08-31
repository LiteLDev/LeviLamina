#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChiseledBookshelfBlockActor {

public:
    // prevent constructor by default
    ChiseledBookshelfBlockActor& operator=(ChiseledBookshelfBlockActor const&) = delete;
    ChiseledBookshelfBlockActor(ChiseledBookshelfBlockActor const&)            = delete;
    ChiseledBookshelfBlockActor()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHISELEDBOOKSHELFBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@ChiseledBookshelfBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @symbol ?_onUpdatePacket\@ChiseledBookshelfBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ?addItemToFirstEmptySlot\@ChiseledBookshelfBlockActor\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool addItemToFirstEmptySlot(class ItemStack const&);
    /**
     * @symbol ?canPullOutItem\@ChiseledBookshelfBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int32_t, int32_t, class ItemStack const&) const;
    /**
     * @symbol ?canPushInItem\@ChiseledBookshelfBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int32_t, int32_t, class ItemStack const&) const;
    /**
     * @symbol ?getContainer\@ChiseledBookshelfBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer();
    /**
     * @symbol ?getContainer\@ChiseledBookshelfBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const;
    /**
     * @symbol ?getContainerSize\@ChiseledBookshelfBlockActor\@\@UEBAHXZ
     */
    MCVAPI int32_t getContainerSize() const;
    /**
     * @symbol ?getItem\@ChiseledBookshelfBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int32_t) const;
    /**
     * @symbol ?getMaxStackSize\@ChiseledBookshelfBlockActor\@\@UEBAHXZ
     */
    MCVAPI int32_t getMaxStackSize() const;
    /**
     * @symbol
     * ?getName\@ChiseledBookshelfBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?isEmpty\@ChiseledBookshelfBlockActor\@\@UEBA_NXZ
     */
    MCVAPI bool isEmpty() const;
    /**
     * @symbol ?load\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?onChanged\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&);
    /**
     * @symbol ?save\@ChiseledBookshelfBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const;
    /**
     * @symbol
     * ?serverInitItemStackIds\@ChiseledBookshelfBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void(int32_t, class ItemStack const&)>);
    /**
     * @symbol ?setItem\@ChiseledBookshelfBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int32_t, class ItemStack const&);
    /**
     * @symbol ?startOpen\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&);
    /**
     * @symbol ?stopOpen\@ChiseledBookshelfBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&);
#endif
    /**
     * @symbol ??0ChiseledBookshelfBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChiseledBookshelfBlockActor(class BlockPos const&);
    /**
     * @symbol ?getLastInteractedSlot\@ChiseledBookshelfBlockActor\@\@QEBAIXZ
     */
    MCAPI uint32_t getLastInteractedSlot() const;
    /**
     * @symbol ?retrieveBook\@ChiseledBookshelfBlockActor\@\@QEAA?AVItemStack\@\@H\@Z
     */
    MCAPI class ItemStack retrieveBook(int32_t);
    /**
     * @symbol ?allowedItem\@ChiseledBookshelfBlockActor\@\@SA_NAEBVItemStack\@\@\@Z
     */
    MCAPI static bool allowedItem(class ItemStack const&);
    /**
     * @symbol ?tryGet\@ChiseledBookshelfBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class ChiseledBookshelfBlockActor* tryGet(class BlockSource&, class BlockPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_numberOfBooksStored\@ChiseledBookshelfBlockActor\@\@AEBAIXZ
     */
    MCAPI uint32_t _numberOfBooksStored() const;
    // NOLINTEND
};
