/**
 * @file  FurnaceBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?_getUpdatePacket\@FurnaceBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ?_onUpdatePacket\@FurnaceBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ?canPullOutItem\@FurnaceBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?canPushInItem\@FurnaceBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?fixupOnLoad\@FurnaceBlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @symbol  ?getContainer\@FurnaceBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@FurnaceBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@FurnaceBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@FurnaceBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@FurnaceBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?getName\@FurnaceBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol  ?load\@FurnaceBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onCustomTagLoadDone\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onCustomTagLoadDone(class BlockSource &);
    /**
     * @symbol  ?onMove\@FurnaceBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @symbol  ?onNeighborChanged\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?save\@FurnaceBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@FurnaceBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setItem\@FurnaceBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@FurnaceBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@FurnaceBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol  ?tick\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~FurnaceBlockActor();
#endif
    /**
     * @symbol  ??0FurnaceBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FurnaceBlockActor(class BlockPos const &);
    /**
     * @symbol  ?checkForAlternativeFuelAchievement\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource &, class ItemStack const &);
    /**
     * @symbol  ?checkForSmeltEverythingAchievement\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @symbol  ?getLitDuration\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLitDuration() const;
    /**
     * @symbol  ?getLitTime\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLitTime() const;
    /**
     * @symbol  ?getStoredXP\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getStoredXP() const;
    /**
     * @symbol  ?getTickCount\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTickCount() const;
    /**
     * @symbol  ?isEmptiedByHopper\@FurnaceBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isEmptiedByHopper(class BlockSource &);
    /**
     * @symbol  ?onFurnaceBlockRemoved\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void onFurnaceBlockRemoved(class BlockSource &);
    /**
     * @symbol  ?setLitDuration\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setLitDuration(int);
    /**
     * @symbol  ?setLitTime\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setLitTime(int);
    /**
     * @symbol  ?setStoredXP\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setStoredXP(int);
    /**
     * @symbol  ?setTickCount\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setTickCount(int);
    /**
     * @symbol  ?storeXPRewardForRemovingWithHopper\@FurnaceBlockActor\@\@QEAAXAEBVItemStackBase\@\@H\@Z
     */
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const &, int);
    /**
     * @symbol  ?withdrawStoredXPReward\@FurnaceBlockActor\@\@QEAAHXZ
     */
    MCAPI int withdrawStoredXPReward();
    /**
     * @symbol  ?BURN_INTERVAL\@FurnaceBlockActor\@\@2HB
     */
    MCAPI static int const BURN_INTERVAL;
    /**
     * @symbol  ?DEFAULT_SMELTING_TIME\@FurnaceBlockActor\@\@2MB
     */
    MCAPI static float const DEFAULT_SMELTING_TIME;
    /**
     * @symbol  ?getAvailableFuelSetCount\@FurnaceBlockActor\@\@SAHHAEBVItemStackBase\@\@\@Z
     */
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const &);
    /**
     * @symbol  ?getBurnDuration\@FurnaceBlockActor\@\@SAMAEBVItemStackBase\@\@M\@Z
     */
    MCAPI static float getBurnDuration(class ItemStackBase const &, float);
    /**
     * @symbol  ?getXPRewardFromSmeltingItems\@FurnaceBlockActor\@\@SAHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const &, int);
    /**
     * @symbol  ?isItemAllowedInFuelSlot\@FurnaceBlockActor\@\@SA_NHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const &, int);

//protected:
    /**
     * @symbol  ??0FurnaceBlockActor\@\@IEAA\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBVHashedString\@\@W4LevelSoundEvent\@\@W4ContainerType\@\@HAEBVBlock\@\@5\@Z
     */
    MCAPI FurnaceBlockActor(enum class BlockActorType, class BlockPos const &, class HashedString const &, enum class LevelSoundEvent, enum class ContainerType, int, class Block const &, class Block const &);

//private:
    /**
     * @symbol  ?_refreshFurnaceBlockLitState\@FurnaceBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource &);
    /**
     * @symbol  ?burn\@FurnaceBlockActor\@\@AEAAXAEBVRecipes\@\@\@Z
     */
    MCAPI void burn(class Recipes const &);
    /**
     * @symbol  ?canBurn\@FurnaceBlockActor\@\@AEAA_NAEBVRecipes\@\@\@Z
     */
    MCAPI bool canBurn(class Recipes const &);
    /**
     * @symbol  ?_getXPRewardMultiplier\@FurnaceBlockActor\@\@CAMAEBVItemStackBase\@\@\@Z
     */
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const &);
    /**
     * @symbol  ?_roundXPReward\@FurnaceBlockActor\@\@CAHM\@Z
     */
    MCAPI static int _roundXPReward(float);

protected:

private:
    /**
     * @symbol  ?BURN_DURATION_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BURN_DURATION_KEY;
    /**
     * @symbol  ?BURN_TIME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BURN_TIME_KEY;
    /**
     * @symbol  ?COOK_TIME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COOK_TIME_KEY;
    /**
     * @symbol  ?CUSTOM_NAME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CUSTOM_NAME_KEY;
    /**
     * @symbol  ?ITEMS_LIST_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ITEMS_LIST_KEY;
    /**
     * @symbol  ?LAST_FUEL_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const LAST_FUEL_KEY;
    /**
     * @symbol  ?SLOT_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SLOT_KEY;
    /**
     * @symbol  ?STORED_XP_DEPRECATED_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;
    /**
     * @symbol  ?STORED_XP_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORED_XP_KEY;

};