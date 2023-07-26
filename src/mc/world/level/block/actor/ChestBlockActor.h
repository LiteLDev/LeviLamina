#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChestBlockActor {

public:
    // prevent constructor by default
    ChestBlockActor& operator=(ChestBlockActor const&) = delete;
    ChestBlockActor(ChestBlockActor const&)            = delete;
    ChestBlockActor()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHESTBLOCKACTOR
    /**
     * @symbol ?_canOpenThis\@ChestBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _canOpenThis(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?_detectEntityObstruction\@ChestBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource&) const; // NOLINT
    /**
     * @symbol
     * ?_getUpdatePacket\@ChestBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@ChestBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?addContentChangeListener\@ChestBlockActor\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCVAPI void addContentChangeListener(class ContainerContentChangeListener*); // NOLINT
    /**
     * @symbol ?canPullOutItem\@ChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canPushInItem\@ChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?clearCache\@ChestBlockActor\@\@UEAAXXZ
     */
    MCVAPI void clearCache(); // NOLINT
    /**
     * @symbol ?clearInventory\@ChestBlockActor\@\@UEAAHH\@Z
     */
    MCVAPI int clearInventory(int); // NOLINT
    /**
     * @symbol ?eraseLootTable\@ChestBlockActor\@\@UEAAXXZ
     */
    MCVAPI void eraseLootTable(); // NOLINT
    /**
     * @symbol ?getContainer\@ChestBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@ChestBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@ChestBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getCrackEntity\@ChestBlockActor\@\@UEAAPEAVBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getDebugText\@ChestBlockActor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void getDebugText(std::vector<std::string>&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?getItem\@ChestBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@ChestBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@ChestBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?getObstructionAABB\@ChestBlockActor\@\@MEBA?AVAABB\@\@XZ
     */
    MCVAPI class AABB getObstructionAABB() const; // NOLINT
    /**
     * @symbol ?initializeContainerContents\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource&); // NOLINT
    /**
     * @symbol ?load\@ChestBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?loadItems\@ChestBlockActor\@\@UEAAXAEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI void loadItems(class CompoundTag const&, class Level&); // NOLINT
    /**
     * @symbol ?onChanged\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ?onMove\@ChestBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove(); // NOLINT
    /**
     * @symbol ?onNeighborChanged\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?onPlace\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onPlace(class BlockSource&); // NOLINT
    /**
     * @symbol ?onRemoved\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource&); // NOLINT
    /**
     * @symbol ?playCloseSound\@ChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource&); // NOLINT
    /**
     * @symbol ?playOpenSound\@ChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource&); // NOLINT
    /**
     * @symbol ?removeContentChangeListener\@ChestBlockActor\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener*); // NOLINT
    /**
     * @symbol ?save\@ChestBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?saveItemInstanceData\@ChestBlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool saveItemInstanceData(class CompoundTag&); // NOLINT
    /**
     * @symbol ?saveItems\@ChestBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool saveItems(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@ChestBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setContainerChanged\@ChestBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int); // NOLINT
    /**
     * @symbol ?setItem\@ChestBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?setItemWithForceBalance\@ChestBlockActor\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    MCVAPI void setItemWithForceBalance(int, class ItemStack const&, bool); // NOLINT
    /**
     * @symbol ?startOpen\@ChestBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@ChestBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
    /**
     * @symbol ?triggerEvent\@ChestBlockActor\@\@UEAAXHH\@Z
     */
    MCVAPI void triggerEvent(int, int); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChestBlockActor(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ChestBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI ChestBlockActor(
        enum class BlockActorType,
        std::string const&,
        enum class BlockActorRendererId,
        class BlockPos const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?canOpen\@ChestBlockActor\@\@QEBA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool canOpen(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?canPairWith\@ChestBlockActor\@\@QEAA_NPEAVBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool canPairWith(class BlockActor*, class BlockSource&); // NOLINT
    /**
     * @symbol ?forceCloseChest\@ChestBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void forceCloseChest(class BlockSource&); // NOLINT
    /**
     * @symbol ?getOpenCount\@ChestBlockActor\@\@QEBAHXZ
     */
    MCAPI int getOpenCount() const; // NOLINT
    /**
     * @symbol ?getOpenness\@ChestBlockActor\@\@QEBAMXZ
     */
    MCAPI float getOpenness() const; // NOLINT
    /**
     * @symbol ?getPairedChestPosition\@ChestBlockActor\@\@QEAAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getPairedChestPosition(); // NOLINT
    /**
     * @symbol ?isFindable\@ChestBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isFindable() const; // NOLINT
    /**
     * @symbol ?isLargeChest\@ChestBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isLargeChest() const; // NOLINT
    /**
     * @symbol ?onMove\@ChestBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?openBy\@ChestBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void openBy(class Player&); // NOLINT
    /**
     * @symbol ?pairWith\@ChestBlockActor\@\@QEAAXPEAV1\@_N\@Z
     */
    MCAPI void pairWith(class ChestBlockActor*, bool); // NOLINT
    /**
     * @symbol ?setFindable\@ChestBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setFindable(bool); // NOLINT
    /**
     * @symbol ?unpair\@ChestBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void unpair(class BlockSource&); // NOLINT

    // protected:
    /**
     * @symbol ?_getCenter\@ChestBlockActor\@\@IEAAXAEAM00\@Z
     */
    MCAPI void _getCenter(float&, float&, float&); // NOLINT

    // private:
    /**
     * @symbol ?_closeChest\@ChestBlockActor\@\@AEAAXAEAVBlockSource\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void _closeChest(class BlockSource&, class Player*); // NOLINT
    /**
     * @symbol ?_saveClientSideState\@ChestBlockActor\@\@AEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?_tryToPairWith\@ChestBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _tryToPairWith(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_unpair\@ChestBlockActor\@\@AEAAXXZ
     */
    MCAPI void _unpair(); // NOLINT

protected:
private:
};
