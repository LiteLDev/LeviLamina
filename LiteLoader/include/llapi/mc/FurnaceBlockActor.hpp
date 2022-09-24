/**
 * @file  FurnaceBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceBlockActor.
 *
 */
class FurnaceBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEBLOCKACTOR
public:
    class FurnaceBlockActor& operator=(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor(class FurnaceBlockActor const &) = delete;
    FurnaceBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEBLOCKACTOR
    /**
     * @hash   926552425
     * @symbol ?_getUpdatePacket@FurnaceBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -47834455
     * @symbol ?_onUpdatePacket@FurnaceBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1612022345
     * @symbol ?canPullOutItem@FurnaceBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   1731337119
     * @symbol ?canPushInItem@FurnaceBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   1010852335
     * @symbol ?fixupOnLoad@FurnaceBlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @hash   -1403007265
     * @symbol ?getContainer@FurnaceBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -1830729125
     * @symbol ?getContainer@FurnaceBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1008616807
     * @symbol ?getContainerSize@FurnaceBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -644076380
     * @symbol ?getItem@FurnaceBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1030958102
     * @symbol ?getMaxStackSize@FurnaceBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   241669659
     * @symbol ?getName@FurnaceBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   1677777063
     * @symbol ?load@FurnaceBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   943027611
     * @symbol ?onCustomTagLoadDone@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onCustomTagLoadDone(class BlockSource &);
    /**
     * @hash   1826219943
     * @symbol ?onMove@FurnaceBlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -173908016
     * @symbol ?onNeighborChanged@FurnaceBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -967186522
     * @symbol ?save@FurnaceBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1190415001
     * @symbol ?serverInitItemStackIds@FurnaceBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1615457313
     * @symbol ?setItem@FurnaceBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   790783200
     * @symbol ?startOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   634317232
     * @symbol ?stopOpen@FurnaceBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1796742384
     * @symbol ?tick@FurnaceBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
    /**
     * @hash   -1679367352
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FurnaceBlockActor();
#endif
    /**
     * @hash   -1234042381
     * @symbol ??0FurnaceBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI FurnaceBlockActor(class BlockPos const &);
    /**
     * @hash   -1473856521
     * @symbol ?checkForAlternativeFuelAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@AEBVItemStack@@@Z
     */
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);
    /**
     * @hash   385482482
     * @symbol ?checkForSmeltEverythingAchievement@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @hash   -16899472
     * @symbol ?getLitDuration@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getLitDuration() const;
    /**
     * @hash   -14191518
     * @symbol ?getLitTime@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getLitTime() const;
    /**
     * @hash   -341681510
     * @symbol ?getStoredXP@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getStoredXP() const;
    /**
     * @hash   1727439230
     * @symbol ?getTickCount@FurnaceBlockActor@@QEBAHXZ
     */
    MCAPI int getTickCount() const;
    /**
     * @hash   -2109780021
     * @symbol ?isEmptiedByHopper@FurnaceBlockActor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool isEmptiedByHopper(class BlockSource &);
    /**
     * @hash   1952713212
     * @symbol ?onFurnaceBlockRemoved@FurnaceBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);
    /**
     * @hash   1060981734
     * @symbol ?setLitDuration@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setLitDuration(int);
    /**
     * @hash   -1525308604
     * @symbol ?setLitTime@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setLitTime(int);
    /**
     * @hash   741088828
     * @symbol ?setStoredXP@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setStoredXP(int);
    /**
     * @hash   -1762222232
     * @symbol ?setTickCount@FurnaceBlockActor@@QEAAXH@Z
     */
    MCAPI void setTickCount(int);
    /**
     * @hash   575187269
     * @symbol ?storeXPRewardForRemovingWithHopper@FurnaceBlockActor@@QEAAXAEBVItemStackBase@@H@Z
     */
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int);
    /**
     * @hash   673338704
     * @symbol ?withdrawStoredXPReward@FurnaceBlockActor@@QEAAHXZ
     */
    MCAPI int withdrawStoredXPReward();
    /**
     * @hash   996292199
     * @symbol ?BURN_INTERVAL@FurnaceBlockActor@@2HB
     */
    MCAPI static int const BURN_INTERVAL;
    /**
     * @hash   1781840751
     * @symbol ?DEFAULT_SMELTING_TIME@FurnaceBlockActor@@2MB
     */
    MCAPI static float const DEFAULT_SMELTING_TIME;
    /**
     * @hash   -1548088104
     * @symbol ?getAvailableFuelSetCount@FurnaceBlockActor@@SAHHAEBVItemStackBase@@@Z
     */
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const &);
    /**
     * @hash   -851212992
     * @symbol ?getBurnDuration@FurnaceBlockActor@@SAMAEBVItemStackBase@@M@Z
     */
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);
    /**
     * @hash   -22987948
     * @symbol ?getXPRewardFromSmeltingItems@FurnaceBlockActor@@SAHAEBVItemStackBase@@H@Z
     */
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const &, int);
    /**
     * @hash   -502645719
     * @symbol ?isItemAllowedInFuelSlot@FurnaceBlockActor@@SA_NHAEBVItemStackBase@@H@Z
     */
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const &, int);

//protected:
    /**
     * @hash   -1020687845
     * @symbol ??0FurnaceBlockActor@@IEAA@W4BlockActorType@@AEBVBlockPos@@AEBVHashedString@@W4LevelSoundEvent@@W4ContainerType@@HAEBVBlock@@5@Z
     */
    MCAPI FurnaceBlockActor(enum BlockActorType, class BlockPos const &, class HashedString const &, enum LevelSoundEvent, enum ContainerType, int, class Block const &, class Block const &);

//private:
    /**
     * @hash   -1758807875
     * @symbol ?_refreshFurnaceBlockLitState@FurnaceBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);
    /**
     * @hash   -1225283271
     * @symbol ?burn@FurnaceBlockActor@@AEAAXAEBVRecipes@@@Z
     */
    MCAPI void burn(class Recipes const &);
    /**
     * @hash   1925102815
     * @symbol ?canBurn@FurnaceBlockActor@@AEAA_NAEBVRecipes@@@Z
     */
    MCAPI bool canBurn(class Recipes const &);
    /**
     * @hash   803611840
     * @symbol ?_getXPRewardMultiplier@FurnaceBlockActor@@CAMAEBVItemStackBase@@@Z
     */
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);
    /**
     * @hash   -667035509
     * @symbol ?_roundXPReward@FurnaceBlockActor@@CAHM@Z
     */
    MCAPI static int _roundXPReward(float);

protected:

private:
    /**
     * @hash   1177737847
     * @symbol ?BURN_DURATION_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BURN_DURATION_KEY;
    /**
     * @hash   -416039536
     * @symbol ?BURN_TIME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BURN_TIME_KEY;
    /**
     * @hash   -831755849
     * @symbol ?COOK_TIME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const COOK_TIME_KEY;
    /**
     * @hash   -578419444
     * @symbol ?CUSTOM_NAME_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const CUSTOM_NAME_KEY;
    /**
     * @hash   317968304
     * @symbol ?ITEMS_LIST_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ITEMS_LIST_KEY;
    /**
     * @hash   -103387374
     * @symbol ?LAST_FUEL_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const LAST_FUEL_KEY;
    /**
     * @hash   279826193
     * @symbol ?SLOT_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SLOT_KEY;
    /**
     * @hash   2012817233
     * @symbol ?STORED_XP_DEPRECATED_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
    /**
     * @hash   2076671943
     * @symbol ?STORED_XP_KEY@FurnaceBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORED_XP_KEY;

};