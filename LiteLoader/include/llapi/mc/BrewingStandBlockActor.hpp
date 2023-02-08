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
     * @hash   -2023531124
     * @symbol  ?canPullOutItem\@BrewingStandBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @hash   -106631690
     * @symbol  ?canPushInItem\@BrewingStandBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @hash   -1986529231
     * @symbol  ?getContainer\@BrewingStandBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1880716205
     * @symbol  ?getContainer\@BrewingStandBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1427957065
     * @symbol  ?getContainerSize\@BrewingStandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -839324222
     * @symbol  ?getItem\@BrewingStandBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -461425464
     * @symbol  ?getMaxStackSize\@BrewingStandBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -316791939
     * @symbol  ?getName\@BrewingStandBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   1884477509
     * @symbol  ?load\@BrewingStandBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   993950886
     * @symbol  ?onChanged\@BrewingStandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   -1810656647
     * @symbol  ?onMove\@BrewingStandBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -200896396
     * @symbol  ?save\@BrewingStandBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1973519719
     * @symbol  ?serverInitItemStackIds\@BrewingStandBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   882403441
     * @symbol  ?setContainerChanged\@BrewingStandBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   1817566387
     * @symbol  ?setItem\@BrewingStandBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -378491362
     * @symbol  ?startOpen\@BrewingStandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   998811198
     * @symbol  ?stopOpen\@BrewingStandBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   -1777681314
     * @symbol  ?tick\@BrewingStandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -1594264031
     * @symbol  ??0BrewingStandBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BrewingStandBlockActor(class BlockPos const &);
    /**
     * @hash   -1009152347
     * @symbol  ?brew\@BrewingStandBlockActor\@\@QEAAXXZ
     */
    MCAPI void brew();
    /**
     * @hash   -371641386
     * @symbol  ?getBrewTime\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getBrewTime() const;
    /**
     * @hash   -1539395482
     * @symbol  ?getFuelAmount\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getFuelAmount() const;
    /**
     * @hash   -1265248056
     * @symbol  ?getFuelTotal\@BrewingStandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getFuelTotal() const;
    /**
     * @hash   567208648
     * @symbol  ?setBrewTime\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setBrewTime(int);
    /**
     * @hash   -1705973224
     * @symbol  ?setFuelAmount\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setFuelAmount(int);
    /**
     * @hash   1018972390
     * @symbol  ?setFuelTotal\@BrewingStandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setFuelTotal(int);
    /**
     * @hash   957536497
     * @symbol  ?isFuel\@BrewingStandBlockActor\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isFuel(class ItemDescriptor const &);

//private:
    /**
     * @hash   -1793189270
     * @symbol  ?canBrew\@BrewingStandBlockActor\@\@AEAA_NXZ
     */
    MCAPI bool canBrew();

private:

};