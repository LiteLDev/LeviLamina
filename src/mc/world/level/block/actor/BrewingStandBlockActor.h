#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrewingStandBlockActor {

public:
    // prevent constructor by default
    BrewingStandBlockActor& operator=(BrewingStandBlockActor const&) = delete;
    BrewingStandBlockActor(BrewingStandBlockActor const&)            = delete;
    BrewingStandBlockActor()                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREWINGSTANDBLOCKACTOR
    /**
     * @symbol ?canPullOutItem\@BrewingStandBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canPushInItem\@BrewingStandBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getContainer\@BrewingStandBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@BrewingStandBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@BrewingStandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@BrewingStandBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@BrewingStandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@BrewingStandBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?load\@BrewingStandBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onChanged\@BrewingStandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ?onMove\@BrewingStandBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove(); // NOLINT
    /**
     * @symbol ?save\@BrewingStandBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?serverInitItemStackIds\@BrewingStandBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setContainerChanged\@BrewingStandBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int); // NOLINT
    /**
     * @symbol ?setItem\@BrewingStandBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@BrewingStandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@BrewingStandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@BrewingStandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol ?brew\@BrewingStandBlockActor\@\@QEAAXXZ
     */
    MCAPI void brew(); // NOLINT
    /**
     * @symbol ?getBrewTime\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getBrewTime() const; // NOLINT
    /**
     * @symbol ?getFuelAmount\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getFuelAmount() const; // NOLINT
    /**
     * @symbol ?getFuelTotal\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getFuelTotal() const; // NOLINT
    /**
     * @symbol ?setBrewTime\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setBrewTime(int); // NOLINT
    /**
     * @symbol ?setFuelAmount\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setFuelAmount(int); // NOLINT
    /**
     * @symbol ?setFuelTotal\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setFuelTotal(int); // NOLINT
    /**
     * @symbol ?isFuel\@BrewingStandBlockActor\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isFuel(class ItemDescriptor const&); // NOLINT

    // private:
    /**
     * @symbol ?canBrew\@BrewingStandBlockActor\@\@AEAA_NXZ
     */
    MCAPI bool canBrew(); // NOLINT

private:
};
