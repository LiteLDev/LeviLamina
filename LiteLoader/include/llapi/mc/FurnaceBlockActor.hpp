/**
 * @file  FurnaceBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1783318521
     * @symbol  ?_getUpdatePacket\@FurnaceBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   809008521
     * @symbol  ?_onUpdatePacket\@FurnaceBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1761443746
     * @symbol  ?canPullOutItem\@FurnaceBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @hash   911481608
     * @symbol  ?canPushInItem\@FurnaceBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @hash   1867879823
     * @symbol  ?fixupOnLoad\@FurnaceBlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @hash   -477664209
     * @symbol  ?getContainer\@FurnaceBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -905386069
     * @symbol  ?getContainer\@FurnaceBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   93498791
     * @symbol  ?getContainerSize\@FurnaceBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   213381636
     * @symbol  ?getItem\@FurnaceBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   114840646
     * @symbol  ?getMaxStackSize\@FurnaceBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   1099143051
     * @symbol  ?getName\@FurnaceBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -1759701465
     * @symbol  ?load\@FurnaceBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1800531755
     * @symbol  ?onCustomTagLoadDone\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onCustomTagLoadDone(class BlockSource &);
    /**
     * @hash   -1611243209
     * @symbol  ?onMove\@FurnaceBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   683596128
     * @symbol  ?onNeighborChanged\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -109667002
     * @symbol  ?save\@FurnaceBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   2047903769
     * @symbol  ?serverInitItemStackIds\@FurnaceBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1822005839
     * @symbol  ?setItem\@FurnaceBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   1648318096
     * @symbol  ?startOpen\@FurnaceBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   1491852128
     * @symbol  ?stopOpen\@FurnaceBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   -1640690016
     * @symbol  ?tick\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
    /**
     * @hash   -822601256
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~FurnaceBlockActor();
#endif
    /**
     * @hash   -377276285
     * @symbol  ??0FurnaceBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FurnaceBlockActor(class BlockPos const &);
    /**
     * @hash   -616875161
     * @symbol  ?checkForAlternativeFuelAchievement\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);
    /**
     * @hash   1242494594
     * @symbol  ?checkForSmeltEverythingAchievement\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @hash   840558544
     * @symbol  ?getLitDuration\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLitDuration() const;
    /**
     * @hash   999994066
     * @symbol  ?getLitTime\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLitTime() const;
    /**
     * @hash   515791882
     * @symbol  ?getStoredXP\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getStoredXP() const;
    /**
     * @hash   1599767710
     * @symbol  ?getTickCount\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTickCount() const;
    /**
     * @hash   -1252306629
     * @symbol  ?isEmptiedByHopper\@FurnaceBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isEmptiedByHopper(class BlockSource &);
    /**
     * @hash   -1484749940
     * @symbol  ?onFurnaceBlockRemoved\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);
    /**
     * @hash   1918501254
     * @symbol  ?setLitDuration\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setLitDuration(int);
    /**
     * @hash   -667789084
     * @symbol  ?setLitTime\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setLitTime(int);
    /**
     * @hash   1598608348
     * @symbol  ?setStoredXP\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setStoredXP(int);
    /**
     * @hash   -797673368
     * @symbol  ?setTickCount\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setTickCount(int);
    /**
     * @hash   1432722165
     * @symbol  ?storeXPRewardForRemovingWithHopper\@FurnaceBlockActor\@\@QEAAXAEBVItemStackBase\@\@H\@Z
     */
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int);
    /**
     * @hash   1530981232
     * @symbol  ?withdrawStoredXPReward\@FurnaceBlockActor\@\@QEAAHXZ
     */
    MCAPI int withdrawStoredXPReward();
    /**
     * @hash   2038761935
     * @symbol  ?BURN_INTERVAL\@FurnaceBlockActor\@\@2HB
     */
    MCAPI static int const BURN_INTERVAL;
    /**
     * @hash   -1470656809
     * @symbol  ?DEFAULT_SMELTING_TIME\@FurnaceBlockActor\@\@2MB
     */
    MCAPI static float const DEFAULT_SMELTING_TIME;
    /**
     * @hash   -691060616
     * @symbol  ?getAvailableFuelSetCount\@FurnaceBlockActor\@\@SAHHAEBVItemStackBase\@\@\@Z
     */
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const &);
    /**
     * @hash   5814496
     * @symbol  ?getBurnDuration\@FurnaceBlockActor\@\@SAMAEBVItemStackBase\@\@M\@Z
     */
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);
    /**
     * @hash   834485444
     * @symbol  ?getXPRewardFromSmeltingItems\@FurnaceBlockActor\@\@SAHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const &, int);
    /**
     * @hash   354843049
     * @symbol  ?isItemAllowedInFuelSlot\@FurnaceBlockActor\@\@SA_NHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const &, int);

//protected:
    /**
     * @hash   -163921749
     * @symbol  ??0FurnaceBlockActor\@\@IEAA\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBVHashedString\@\@W4LevelSoundEvent\@\@W4ContainerType\@\@HAEBVBlock\@\@5\@Z
     */
    MCAPI FurnaceBlockActor(enum class BlockActorType, class BlockPos const &, class HashedString const &, enum class LevelSoundEvent, enum class ContainerType, int, class Block const &, class Block const &);

//private:
    /**
     * @hash   -901964899
     * @symbol  ?_refreshFurnaceBlockLitState\@FurnaceBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);
    /**
     * @hash   -368424919
     * @symbol  ?burn\@FurnaceBlockActor\@\@AEAAXAEBVRecipes\@\@\@Z
     */
    MCAPI void burn(class Recipes const &);
    /**
     * @hash   -1512913873
     * @symbol  ?canBurn\@FurnaceBlockActor\@\@AEAA_NAEBVRecipes\@\@\@Z
     */
    MCAPI bool canBurn(class Recipes const &);
    /**
     * @hash   1660377936
     * @symbol  ?_getXPRewardMultiplier\@FurnaceBlockActor\@\@CAMAEBVItemStackBase\@\@\@Z
     */
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);
    /**
     * @hash   189807467
     * @symbol  ?_roundXPReward\@FurnaceBlockActor\@\@CAHM\@Z
     */
    MCAPI static int _roundXPReward(float);

protected:

private:
    /**
     * @hash   -1181314169
     * @symbol  ?BURN_DURATION_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BURN_DURATION_KEY;
    /**
     * @hash   1519875744
     * @symbol  ?BURN_TIME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BURN_TIME_KEY;
    /**
     * @hash   1104159431
     * @symbol  ?COOK_TIME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COOK_TIME_KEY;
    /**
     * @hash   1357495836
     * @symbol  ?CUSTOM_NAME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CUSTOM_NAME_KEY;
    /**
     * @hash   -2041083712
     * @symbol  ?ITEMS_LIST_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ITEMS_LIST_KEY;
    /**
     * @hash   1832527906
     * @symbol  ?LAST_FUEL_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const LAST_FUEL_KEY;
    /**
     * @hash   -2079225823
     * @symbol  ?SLOT_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SLOT_KEY;
    /**
     * @hash   -346234783
     * @symbol  ?STORED_XP_DEPRECATED_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
    /**
     * @hash   -282380073
     * @symbol  ?STORED_XP_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORED_XP_KEY;

};