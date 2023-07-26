#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DispenserBlockActor {

public:
    // prevent constructor by default
    DispenserBlockActor& operator=(DispenserBlockActor const&) = delete;
    DispenserBlockActor(DispenserBlockActor const&)            = delete;
    DispenserBlockActor()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPENSERBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@DispenserBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@DispenserBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?getContainer\@DispenserBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@DispenserBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@DispenserBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@DispenserBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@DispenserBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@DispenserBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?load\@DispenserBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onMove\@DispenserBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove(); // NOLINT
    /**
     * @symbol ?save\@DispenserBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?serverInitItemStackIds\@DispenserBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@DispenserBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@DispenserBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@DispenserBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
#endif
    /**
     * @symbol ??0DispenserBlockActor\@\@QEAA\@VBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI DispenserBlockActor(class BlockPos, enum class BlockActorType); // NOLINT
    /**
     * @symbol ?getRandomSlot\@DispenserBlockActor\@\@QEAAHAEAVRandom\@\@\@Z
     */
    MCAPI int getRandomSlot(class Random&); // NOLINT

    // protected:
    /**
     * @symbol ?initItems\@DispenserBlockActor\@\@IEAAXXZ
     */
    MCAPI void initItems(); // NOLINT

protected:
};
