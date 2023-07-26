#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FurnaceBlockActor {

public:
    // prevent constructor by default
    FurnaceBlockActor& operator=(FurnaceBlockActor const&) = delete;
    FurnaceBlockActor(FurnaceBlockActor const&)            = delete;
    FurnaceBlockActor()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@FurnaceBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@FurnaceBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?canPullOutItem\@FurnaceBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canPushInItem\@FurnaceBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?fixupOnLoad\@FurnaceBlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk&); // NOLINT
    /**
     * @symbol ?getContainer\@FurnaceBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@FurnaceBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@FurnaceBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@FurnaceBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@FurnaceBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@FurnaceBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?load\@FurnaceBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onCustomTagLoadDone\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onCustomTagLoadDone(class BlockSource&); // NOLINT
    /**
     * @symbol ?onMove\@FurnaceBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove(); // NOLINT
    /**
     * @symbol ?onNeighborChanged\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?save\@FurnaceBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@FurnaceBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@FurnaceBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@FurnaceBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@FurnaceBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@FurnaceBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FurnaceBlockActor(); // NOLINT
#endif
    /**
     * @symbol ??0FurnaceBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FurnaceBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?checkForAlternativeFuelAchievement\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void checkForAlternativeFuelAchievement(class BlockSource&, class ItemStack const&); // NOLINT
    /**
     * @symbol ?checkForSmeltEverythingAchievement\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource&); // NOLINT
    /**
     * @symbol ?getLitDuration\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLitDuration() const; // NOLINT
    /**
     * @symbol ?getLitTime\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getLitTime() const; // NOLINT
    /**
     * @symbol ?getStoredXP\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getStoredXP() const; // NOLINT
    /**
     * @symbol ?getTickCount\@FurnaceBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTickCount() const; // NOLINT
    /**
     * @symbol ?isEmptiedByHopper\@FurnaceBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isEmptiedByHopper(class BlockSource&); // NOLINT
    /**
     * @symbol ?onFurnaceBlockRemoved\@FurnaceBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void onFurnaceBlockRemoved(class BlockSource&); // NOLINT
    /**
     * @symbol ?setLitDuration\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setLitDuration(int); // NOLINT
    /**
     * @symbol ?setLitTime\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setLitTime(int); // NOLINT
    /**
     * @symbol ?setStoredXP\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setStoredXP(int); // NOLINT
    /**
     * @symbol ?setTickCount\@FurnaceBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setTickCount(int); // NOLINT
    /**
     * @symbol ?storeXPRewardForRemovingWithHopper\@FurnaceBlockActor\@\@QEAAXAEBVItemStackBase\@\@H\@Z
     */
    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const&, int); // NOLINT
    /**
     * @symbol ?withdrawStoredXPReward\@FurnaceBlockActor\@\@QEAAHXZ
     */
    MCAPI int withdrawStoredXPReward(); // NOLINT
    /**
     * @symbol ?getAvailableFuelSetCount\@FurnaceBlockActor\@\@SAHHAEBVItemStackBase\@\@\@Z
     */
    MCAPI static int getAvailableFuelSetCount(int, class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?getBurnDuration\@FurnaceBlockActor\@\@SAMAEBVItemStackBase\@\@M\@Z
     */
    MCAPI static float getBurnDuration(class ItemStackBase const&, float); // NOLINT
    /**
     * @symbol ?getItemBurnDuration\@FurnaceBlockActor\@\@SAMAEBVItem\@\@M\@Z
     */
    MCAPI static float getItemBurnDuration(class Item const&, float); // NOLINT
    /**
     * @symbol ?getXPRewardFromSmeltingItems\@FurnaceBlockActor\@\@SAHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const&, int); // NOLINT
    /**
     * @symbol ?isItemAllowedInFuelSlot\@FurnaceBlockActor\@\@SA_NHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static bool isItemAllowedInFuelSlot(int, class ItemStackBase const&, int); // NOLINT
    /**
     * @symbol ?BURN_INTERVAL\@FurnaceBlockActor\@\@2HB
     */
    MCAPI static int const BURN_INTERVAL; // NOLINT
    /**
     * @symbol ?DEFAULT_SMELTING_TIME\@FurnaceBlockActor\@\@2MB
     */
    MCAPI static float const DEFAULT_SMELTING_TIME; // NOLINT

    // protected:
    /**
     * @symbol
     * ??0FurnaceBlockActor\@\@IEAA\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBVHashedString\@\@W4LevelSoundEvent\@\@W4ContainerType\@\@HAEBVBlock\@\@5\@Z
     */
    MCAPI
    FurnaceBlockActor(enum class BlockActorType, class BlockPos const&, class HashedString const&, enum class LevelSoundEvent, enum class ContainerType, int, class Block const&, class Block const&); // NOLINT

    // private:
    /**
     * @symbol ?_refreshFurnaceBlockLitState\@FurnaceBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource&); // NOLINT
    /**
     * @symbol ?burn\@FurnaceBlockActor\@\@AEAAXAEBVRecipes\@\@\@Z
     */
    MCAPI void burn(class Recipes const&); // NOLINT
    /**
     * @symbol ?canBurn\@FurnaceBlockActor\@\@AEAA_NAEBVRecipes\@\@\@Z
     */
    MCAPI bool canBurn(class Recipes const&); // NOLINT
    /**
     * @symbol ?_getXPRewardMultiplier\@FurnaceBlockActor\@\@CAMAEBVItemStackBase\@\@\@Z
     */
    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?_roundXPReward\@FurnaceBlockActor\@\@CAHM\@Z
     */
    MCAPI static int _roundXPReward(float); // NOLINT

protected:
private:
    /**
     * @symbol
     * ?BURN_DURATION_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BURN_DURATION_KEY; // NOLINT
    /**
     * @symbol
     * ?BURN_TIME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BURN_TIME_KEY; // NOLINT
    /**
     * @symbol
     * ?COOK_TIME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COOK_TIME_KEY; // NOLINT
    /**
     * @symbol
     * ?CUSTOM_NAME_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CUSTOM_NAME_KEY; // NOLINT
    /**
     * @symbol
     * ?ITEMS_LIST_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ITEMS_LIST_KEY; // NOLINT
    /**
     * @symbol
     * ?LAST_FUEL_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const LAST_FUEL_KEY; // NOLINT
    /**
     * @symbol
     * ?SLOT_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SLOT_KEY; // NOLINT
    /**
     * @symbol
     * ?STORED_XP_DEPRECATED_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORED_XP_DEPRECATED_KEY; // NOLINT
    /**
     * @symbol
     * ?STORED_XP_KEY\@FurnaceBlockActor\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORED_XP_KEY; // NOLINT
};
