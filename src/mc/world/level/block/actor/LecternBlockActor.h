#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LecternBlockActor {

public:
    // prevent constructor by default
    LecternBlockActor& operator=(LecternBlockActor const&) = delete;
    LecternBlockActor(LecternBlockActor const&)            = delete;
    LecternBlockActor()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LECTERNBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@LecternBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@LecternBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?getContainer\@LecternBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@LecternBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@LecternBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@LecternBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@LecternBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol ?load\@LecternBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onChanged\@LecternBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ?save\@LecternBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@LecternBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@LecternBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@LecternBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@LecternBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
#endif
    /**
     * @symbol ??0LecternBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LecternBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?dropBook\@LecternBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void dropBook(class BlockSource&); // NOLINT
    /**
     * @symbol ?getPage\@LecternBlockActor\@\@QEBAHXZ
     */
    MCAPI int getPage() const; // NOLINT
    /**
     * @symbol ?getTotalPages\@LecternBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTotalPages() const; // NOLINT
    /**
     * @symbol ?hasBook\@LecternBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool hasBook() const; // NOLINT
    /**
     * @symbol ?setItemFromBlock\@LecternBlockActor\@\@QEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void setItemFromBlock(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?setPageOnServer\@LecternBlockActor\@\@QEAAXHAEAVBlockSource\@\@\@Z
     */
    MCAPI void setPageOnServer(int, class BlockSource&); // NOLINT
    /**
     * @symbol ?setTotalPages\@LecternBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setTotalPages(int); // NOLINT
};
