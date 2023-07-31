#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DispenserBlockActor {

public:
    // prevent constructor by default
    DispenserBlockActor& operator=(DispenserBlockActor const&) = delete;
    DispenserBlockActor(DispenserBlockActor const&)            = delete;
    DispenserBlockActor()                                      = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPENSERBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@DispenserBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @symbol ?_onUpdatePacket\@DispenserBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ?getContainer\@DispenserBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer();
    /**
     * @symbol ?getContainer\@DispenserBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const;
    /**
     * @symbol ?getContainerSize\@DispenserBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem\@DispenserBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const;
    /**
     * @symbol ?getMaxStackSize\@DispenserBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol
     * ?getName\@DispenserBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?load\@DispenserBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?onMove\@DispenserBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @symbol ?save\@DispenserBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const;
    /**
     * @symbol
     * ?serverInitItemStackIds\@DispenserBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);
    /**
     * @symbol ?setItem\@DispenserBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&);
    /**
     * @symbol ?startOpen\@DispenserBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&);
    /**
     * @symbol ?stopOpen\@DispenserBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&);
#endif
    /**
     * @symbol ??0DispenserBlockActor\@\@QEAA\@VBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI DispenserBlockActor(class BlockPos, enum class BlockActorType);
    /**
     * @symbol ?getRandomSlot\@DispenserBlockActor\@\@QEAAHAEAVRandom\@\@\@Z
     */
    MCAPI int getRandomSlot(class Random&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?initItems\@DispenserBlockActor\@\@IEAAXXZ
     */
    MCAPI void initItems();
    // NOLINTEND
};
