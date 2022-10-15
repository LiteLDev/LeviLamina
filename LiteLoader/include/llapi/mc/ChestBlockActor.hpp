/**
 * @file  ChestBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   301569521
     * @symbol ?_canOpenThis@ChestBlockActor@@MEBA_NAEAVBlockSource@@@Z
     */
    MCVAPI bool _canOpenThis(class BlockSource &) const;
    /**
     * @hash   1507178895
     * @symbol ?_detectEntityObstruction@ChestBlockActor@@MEBA_NAEAVBlockSource@@@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    /**
     * @hash   1387162450
     * @symbol ?_getUpdatePacket@ChestBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1489481984
     * @symbol ?_onUpdatePacket@ChestBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -312897862
     * @symbol ?addContentChangeListener@ChestBlockActor@@UEAAXPEAVContainerContentChangeListener@@@Z
     */
    MCVAPI void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   -1941812736
     * @symbol ?canPullOutItem@ChestBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   -4146442
     * @symbol ?canPushInItem@ChestBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   851843091
     * @symbol ?clearCache@ChestBlockActor@@UEAAXXZ
     */
    MCVAPI void clearCache();
    /**
     * @hash   -1636534899
     * @symbol ?clearInventory@ChestBlockActor@@UEAAHH@Z
     */
    MCVAPI int clearInventory(int);
    /**
     * @hash   158323390
     * @symbol ?eraseLootTable@ChestBlockActor@@UEAAXXZ
     */
    MCVAPI void eraseLootTable();
    /**
     * @hash   -1716786202
     * @symbol ?getContainer@ChestBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -2144508062
     * @symbol ?getContainer@ChestBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   186627758
     * @symbol ?getContainerSize@ChestBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   1666013785
     * @symbol ?getCrackEntity@ChestBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1574115240
     * @symbol ?getDebugText@ChestBlockActor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
     */
    MCVAPI void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /**
     * @hash   2080144909
     * @symbol ?getItem@ChestBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -1459271123
     * @symbol ?getMaxStackSize@ChestBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   1053139906
     * @symbol ?getName@ChestBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   497897689
     * @symbol ?getObstructionAABB@ChestBlockActor@@MEBA?AVAABB@@XZ
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @hash   -1790951957
     * @symbol ?initializeContainerContents@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource &);
    /**
     * @hash   -1115502016
     * @symbol ?load@ChestBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   35306502
     * @symbol ?loadItems@ChestBlockActor@@UEAAXAEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCVAPI void loadItems(class CompoundTag const &, class Level &);
    /**
     * @hash   -489928191
     * @symbol ?onChanged@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   1708968894
     * @symbol ?onMove@ChestBlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -334189865
     * @symbol ?onNeighborChanged@ChestBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -711016754
     * @symbol ?onPlace@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @hash   2131828533
     * @symbol ?onRemoved@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @hash   1678635570
     * @symbol ?playCloseSound@ChestBlockActor@@MEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   368245852
     * @symbol ?playOpenSound@ChestBlockActor@@MEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @hash   -896453891
     * @symbol ?removeContentChangeListener@ChestBlockActor@@UEAAXPEAVContainerContentChangeListener@@@Z
     */
    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   496090975
     * @symbol ?save@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1234568638
     * @symbol ?saveItemInstanceData@ChestBlockActor@@UEAA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool saveItemInstanceData(class CompoundTag &);
    /**
     * @hash   99132601
     * @symbol ?saveItems@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool saveItems(class CompoundTag &) const;
    /**
     * @hash   -1713602558
     * @symbol ?serverInitItemStackIds@ChestBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1749048252
     * @symbol ?setContainerChanged@ChestBlockActor@@UEAAXH@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   1864169048
     * @symbol ?setItem@ChestBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   1635368749
     * @symbol ?setItemWithForceBalance@ChestBlockActor@@UEAAXHAEBVItemStack@@_N@Z
     */
    MCVAPI void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @hash   -373167767
     * @symbol ?startOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -835325079
     * @symbol ?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   812915689
     * @symbol ?tick@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
    /**
     * @hash   -1563206960
     * @symbol ?triggerEvent@ChestBlockActor@@UEAAXHH@Z
     */
    MCVAPI void triggerEvent(int, int);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChestBlockActor();
#endif
    /**
     * @hash   1598339508
     * @symbol ??0ChestBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@_N@Z
     */
    MCAPI ChestBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &, bool);
    /**
     * @hash   -589263189
     * @symbol ?canOpen@ChestBlockActor@@QEBA_NAEAVBlockSource@@@Z
     */
    MCAPI bool canOpen(class BlockSource &) const;
    /**
     * @hash   -1660558955
     * @symbol ?canPairWith@ChestBlockActor@@QEAA_NPEAVBlockActor@@AEAVBlockSource@@@Z
     */
    MCAPI bool canPairWith(class BlockActor *, class BlockSource &);
    /**
     * @hash   909821084
     * @symbol ?forceCloseChest@ChestBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void forceCloseChest(class BlockSource &);
    /**
     * @hash   615343876
     * @symbol ?getOpenCount@ChestBlockActor@@QEBAHXZ
     */
    MCAPI int getOpenCount() const;
    /**
     * @hash   548226004
     * @symbol ?getOpenness@ChestBlockActor@@QEBAMXZ
     */
    MCAPI float getOpenness() const;
    /**
     * @hash   -1158237380
     * @symbol ?getPairedChestPosition@ChestBlockActor@@QEAAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getPairedChestPosition();
    /**
     * @hash   -508369474
     * @symbol ?isFindable@ChestBlockActor@@QEBA_NXZ
     */
    MCAPI bool isFindable() const;
    /**
     * @hash   -1428825042
     * @symbol ?isLargeChest@ChestBlockActor@@QEBA_NXZ
     */
    MCAPI bool isLargeChest() const;
    /**
     * @hash   -1392343094
     * @symbol ?onMove@ChestBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCAPI void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -361632822
     * @symbol ?openBy@ChestBlockActor@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void openBy(class Player &);
    /**
     * @hash   -1267583928
     * @symbol ?pairWith@ChestBlockActor@@QEAAXPEAV1@_N@Z
     */
    MCAPI void pairWith(class ChestBlockActor *, bool);
    /**
     * @hash   2089309440
     * @symbol ?setFindable@ChestBlockActor@@QEAAX_N@Z
     */
    MCAPI void setFindable(bool);
    /**
     * @hash   1919632256
     * @symbol ?unpair@ChestBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void unpair(class BlockSource &);

//protected:
    /**
     * @hash   -1883930206
     * @symbol ?_getCenter@ChestBlockActor@@IEAAXAEAM00@Z
     */
    MCAPI void _getCenter(float &, float &, float &);

//private:
    /**
     * @hash   1421488958
     * @symbol ?_closeChest@ChestBlockActor@@AEAAXAEAVBlockSource@@PEAVPlayer@@@Z
     */
    MCAPI void _closeChest(class BlockSource &, class Player *);
    /**
     * @hash   677297868
     * @symbol ?_saveClientSideState@ChestBlockActor@@AEBA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag &) const;
    /**
     * @hash   1038022008
     * @symbol ?_tryToPairWith@ChestBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _tryToPairWith(class BlockSource &, class BlockPos const &);
    /**
     * @hash   950837733
     * @symbol ?_unpair@ChestBlockActor@@AEAAXXZ
     */
    MCAPI void _unpair();

protected:

private:

};