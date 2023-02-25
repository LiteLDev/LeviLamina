/**
 * @file  BrewingStandBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BrewingStandBlockActor.
 *
 */
class BrewingStandBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDBLOCKACTOR
public:
    class BrewingStandBlockActor& operator=(class BrewingStandBlockActor const &) = delete;
    BrewingStandBlockActor(class BrewingStandBlockActor const &) = delete;
    BrewingStandBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREWINGSTANDBLOCKACTOR
    /**
     * @symbol  ?canPullOutItem\@BrewingStandBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?canPushInItem\@BrewingStandBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?getContainer\@BrewingStandBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@BrewingStandBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@BrewingStandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@BrewingStandBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@BrewingStandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?getName\@BrewingStandBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol  ?load\@BrewingStandBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onChanged\@BrewingStandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol  ?onMove\@BrewingStandBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @symbol  ?save\@BrewingStandBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@BrewingStandBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setContainerChanged\@BrewingStandBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @symbol  ?setItem\@BrewingStandBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@BrewingStandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@BrewingStandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol  ?tick\@BrewingStandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol  ??0BrewingStandBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BrewingStandBlockActor(class BlockPos const &);
    /**
     * @symbol  ?brew\@BrewingStandBlockActor\@\@QEAAXXZ
     */
    MCAPI void brew();
    /**
     * @symbol  ?getBrewTime\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getBrewTime() const;
    /**
     * @symbol  ?getFuelAmount\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getFuelAmount() const;
    /**
     * @symbol  ?getFuelTotal\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getFuelTotal() const;
    /**
     * @symbol  ?setBrewTime\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setBrewTime(int);
    /**
     * @symbol  ?setFuelAmount\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setFuelAmount(int);
    /**
     * @symbol  ?setFuelTotal\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setFuelTotal(int);
    /**
     * @symbol  ?isFuel\@BrewingStandBlockActor\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isFuel(class ItemDescriptor const &);

//private:
    /**
     * @symbol  ?canBrew\@BrewingStandBlockActor\@\@AEAA_NXZ
     */
    MCAPI bool canBrew();

private:

};