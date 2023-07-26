#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopperBlockActor {

public:
    // prevent constructor by default
    HopperBlockActor& operator=(HopperBlockActor const&) = delete;
    HopperBlockActor(HopperBlockActor const&)            = delete;
    HopperBlockActor()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@HopperBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@HopperBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?getContainer\@HopperBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@HopperBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@HopperBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@HopperBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@HopperBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@HopperBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?load\@HopperBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onMove\@HopperBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove(); // NOLINT
    /**
     * @symbol ?onNeighborChanged\@HopperBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?save\@HopperBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@HopperBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setContainerChanged\@HopperBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int); // NOLINT
    /**
     * @symbol ?setItem\@HopperBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@HopperBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@HopperBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@HopperBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol ??0HopperBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI HopperBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?checkForSmeltEverythingAchievement\@HopperBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource&); // NOLINT
    /**
     * @symbol ?getAttachedFurnace\@HopperBlockActor\@\@QEAAPEAVFurnaceBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class FurnaceBlockActor* getAttachedFurnace(class BlockSource&); // NOLINT
    /**
     * @symbol ?isAttachedToChestAndFurnace\@HopperBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource&); // NOLINT
    /**
     * @symbol ?updateCooldownAfterMove\@HopperBlockActor\@\@QEAAXAEBUTick\@\@H\@Z
     */
    MCAPI void updateCooldownAfterMove(struct Tick const&, int); // NOLINT

    // private:
    /**
     * @symbol ?_ensureTickingOrder\@HopperBlockActor\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _ensureTickingOrder(class BlockSource&, int); // NOLINT
    /**
     * @symbol ?_tick\@HopperBlockActor\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _tick(class BlockSource&, int); // NOLINT
    /**
     * @symbol ?isAttachedToContainerType\@HopperBlockActor\@\@AEAA_NAEAVBlockSource\@\@W4ContainerType\@\@\@Z
     */
    MCAPI bool isAttachedToContainerType(class BlockSource&, enum class ContainerType); // NOLINT
    /**
     * @symbol ?isSourceOfContainerType\@HopperBlockActor\@\@AEAA_NAEAVBlockSource\@\@W4ContainerType\@\@\@Z
     */
    MCAPI bool isSourceOfContainerType(class BlockSource&, enum class ContainerType); // NOLINT

private:
};
