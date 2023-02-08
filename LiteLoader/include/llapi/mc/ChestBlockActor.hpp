/**
 * @file  ChestBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChestBlockActor.
 *
 */
class ChestBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTBLOCKACTOR
public:
    class ChestBlockActor& operator=(class ChestBlockActor const &) = delete;
    ChestBlockActor(class ChestBlockActor const &) = delete;
    ChestBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHESTBLOCKACTOR
    /**
     * @hash   1171866497
     * @symbol  ?_canOpenThis\@ChestBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _canOpenThis(class BlockSource &) const;
    /**
     * @hash   -1917414545
     * @symbol  ?_detectEntityObstruction\@ChestBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    /**
     * @hash   -2037415614
     * @symbol  ?_getUpdatePacket\@ChestBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -619092752
     * @symbol  ?_onUpdatePacket\@ChestBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   557522122
     * @symbol  ?addContentChangeListener\@ChestBlockActor\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCVAPI void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   841764967
     * @symbol  ?canPullOutItem\@ChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @hash   1610597041
     * @symbol  ?canPushInItem\@ChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @hash   1722278451
     * @symbol  ?clearCache\@ChestBlockActor\@\@UEAAXXZ
     */
    MCVAPI void clearCache();
    /**
     * @hash   -766099539
     * @symbol  ?clearInventory\@ChestBlockActor\@\@UEAAHH\@Z
     */
    MCVAPI int clearInventory(int);
    /**
     * @hash   1028758750
     * @symbol  ?eraseLootTable\@ChestBlockActor\@\@UEAAXXZ
     */
    MCVAPI void eraseLootTable();
    /**
     * @hash   -846381594
     * @symbol  ?getContainer\@ChestBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -1274103454
     * @symbol  ?getContainer\@ChestBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1057032366
     * @symbol  ?getContainerSize\@ChestBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -1758548903
     * @symbol  ?getCrackEntity\@ChestBlockActor\@\@UEAAPEAVBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -703710632
     * @symbol  ?getDebugText\@ChestBlockActor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /**
     * @hash   -1344433155
     * @symbol  ?getItem\@ChestBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1919578717
     * @symbol  ?getMaxStackSize\@ChestBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   1923529138
     * @symbol  ?getName\@ChestBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   1368286921
     * @symbol  ?getObstructionAABB\@ChestBlockActor\@\@MEBA?AVAABB\@\@XZ
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @hash   -920547349
     * @symbol  ?initializeContainerContents\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource &);
    /**
     * @hash   -245066656
     * @symbol  ?load\@ChestBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   905741862
     * @symbol  ?loadItems\@ChestBlockActor\@\@UEAAXAEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI void loadItems(class CompoundTag const &, class Level &);
    /**
     * @hash   380522545
     * @symbol  ?onChanged\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   -1715516914
     * @symbol  ?onMove\@ChestBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -242302889
     * @symbol  ?onNeighborChanged\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @hash   159464734
     * @symbol  ?onPlace\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @hash   -1292641899
     * @symbol  ?onRemoved\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @hash   -1745788734
     * @symbol  ?playCloseSound\@ChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   1238788844
     * @symbol  ?playOpenSound\@ChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @hash   -25910899
     * @symbol  ?removeContentChangeListener\@ChestBlockActor\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   1366633967
     * @symbol  ?save\@ChestBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   2105111630
     * @symbol  ?saveItemInstanceData\@ChestBlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool saveItemInstanceData(class CompoundTag &);
    /**
     * @hash   969675593
     * @symbol  ?saveItems\@ChestBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool saveItems(class CompoundTag &) const;
    /**
     * @hash   -843044190
     * @symbol  ?serverInitItemStackIds\@ChestBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1675345300
     * @symbol  ?setContainerChanged\@ChestBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   -1560209128
     * @symbol  ?setItem\@ChestBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   782723421
     * @symbol  ?setItemWithForceBalance\@ChestBlockActor\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    MCVAPI void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @hash   497436729
     * @symbol  ?startOpen\@ChestBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   35294793
     * @symbol  ?stopOpen\@ChestBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1683535561
     * @symbol  ?tick\@ChestBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
    /**
     * @hash   -692540960
     * @symbol  ?triggerEvent\@ChestBlockActor\@\@UEAAXHH\@Z
     */
    MCVAPI void triggerEvent(int, int);
    /**
     * @hash   -5537128
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ChestBlockActor();
#endif
    /**
     * @hash   -1826330812
     * @symbol  ??0ChestBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI ChestBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &, bool);
    /**
     * @hash   281156795
     * @symbol  ?canOpen\@ChestBlockActor\@\@QEBA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool canOpen(class BlockSource &) const;
    /**
     * @hash   -790123595
     * @symbol  ?canPairWith\@ChestBlockActor\@\@QEAA_NPEAVBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool canPairWith(class BlockActor *, class BlockSource &);
    /**
     * @hash   1780225692
     * @symbol  ?forceCloseChest\@ChestBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void forceCloseChest(class BlockSource &);
    /**
     * @hash   1485733108
     * @symbol  ?getOpenCount\@ChestBlockActor\@\@QEBAHXZ
     */
    MCAPI int getOpenCount() const;
    /**
     * @hash   1418615236
     * @symbol  ?getOpenness\@ChestBlockActor\@\@QEBAMXZ
     */
    MCAPI float getOpenness() const;
    /**
     * @hash   1986077740
     * @symbol  ?getPairedChestPosition\@ChestBlockActor\@\@QEAAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPairedChestPosition();
    /**
     * @hash   362065886
     * @symbol  ?isFindable\@ChestBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isFindable() const;
    /**
     * @hash   -558389682
     * @symbol  ?isLargeChest\@ChestBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isLargeChest() const;
    /**
     * @hash   -521861606
     * @symbol  ?onMove\@ChestBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   508879418
     * @symbol  ?openBy\@ChestBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void openBy(class Player &);
    /**
     * @hash   -397040936
     * @symbol  ?pairWith\@ChestBlockActor\@\@QEAAXPEAV1\@_N\@Z
     */
    MCAPI void pairWith(class ChestBlockActor *, bool);
    /**
     * @hash   -1335068736
     * @symbol  ?setFindable\@ChestBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setFindable(bool);
    /**
     * @hash   -1504669040
     * @symbol  ?unpair\@ChestBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void unpair(class BlockSource &);

//protected:
    /**
     * @hash   -1013540974
     * @symbol  ?_getCenter\@ChestBlockActor\@\@IEAAXAEAM00\@Z
     */
    MCAPI void _getCenter(float &, float &, float &);

//private:
    /**
     * @hash   -2003135234
     * @symbol  ?_closeChest\@ChestBlockActor\@\@AEAAXAEAVBlockSource\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void _closeChest(class BlockSource &, class Player *);
    /**
     * @hash   1547702476
     * @symbol  ?_saveClientSideState\@ChestBlockActor\@\@AEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag &) const;
    /**
     * @hash   1908395864
     * @symbol  ?_tryToPairWith\@ChestBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _tryToPairWith(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1821257717
     * @symbol  ?_unpair\@ChestBlockActor\@\@AEAAXXZ
     */
    MCAPI void _unpair();

protected:

private:

};