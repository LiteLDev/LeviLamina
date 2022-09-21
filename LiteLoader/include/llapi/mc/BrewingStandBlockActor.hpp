/**
 * @file  MC/BrewingStandBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1956199739
     * @symbol ?canPullOutItem@BrewingStandBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   -482948015
     * @symbol ?canPushInItem@BrewingStandBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   1383095009
     * @symbol ?getContainer@BrewingStandBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   955373149
     * @symbol ?getContainer@BrewingStandBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1156847433
     * @symbol ?getContainerSize@BrewingStandBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -1697105134
     * @symbol ?getItem@BrewingStandBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   454691992
     * @symbol ?getMaxStackSize@BrewingStandBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1174572851
     * @symbol ?getName@BrewingStandBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   1026696597
     * @symbol ?load@BrewingStandBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   136139222
     * @symbol ?onChanged@BrewingStandBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   1626806505
     * @symbol ?onMove@BrewingStandBlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -1058738812
     * @symbol ?save@BrewingStandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1115677303
     * @symbol ?serverInitItemStackIds@BrewingStandBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   24545649
     * @symbol ?setContainerChanged@BrewingStandBlockActor@@UEAAXH@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   959708595
     * @symbol ?setItem@BrewingStandBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -470378338
     * @symbol ?startOpen@BrewingStandBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   906924222
     * @symbol ?stopOpen@BrewingStandBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1659412814
     * @symbol ?tick@BrewingStandBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   1843060737
     * @symbol ??0BrewingStandBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BrewingStandBlockActor(class BlockPos const &);
    /**
     * @hash   -1866794875
     * @symbol ?brew@BrewingStandBlockActor@@QEAAXXZ
     */
    MCAPI void brew();
    /**
     * @hash   -1385826970
     * @symbol ?getBrewTime@BrewingStandBlockActor@@QEBAHXZ
     */
    MCAPI int getBrewTime() const;
    /**
     * @hash   1898113798
     * @symbol ?getFuelAmount@BrewingStandBlockActor@@QEBAHXZ
     */
    MCAPI int getFuelAmount() const;
    /**
     * @hash   -1137576536
     * @symbol ?getFuelTotal@BrewingStandBlockActor@@QEBAHXZ
     */
    MCAPI int getFuelTotal() const;
    /**
     * @hash   -290310872
     * @symbol ?setBrewTime@BrewingStandBlockActor@@QEAAXH@Z
     */
    MCAPI void setBrewTime(int);
    /**
     * @hash   1731474552
     * @symbol ?setFuelAmount@BrewingStandBlockActor@@QEAAXH@Z
     */
    MCAPI void setFuelAmount(int);
    /**
     * @hash   54423526
     * @symbol ?setFuelTotal@BrewingStandBlockActor@@QEAAXH@Z
     */
    MCAPI void setFuelTotal(int);
    /**
     * @hash   99755585
     * @symbol ?isFuel@BrewingStandBlockActor@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isFuel(class ItemDescriptor const &);

//private:
    /**
     * @hash   1644089370
     * @symbol ?canBrew@BrewingStandBlockActor@@AEAA_NXZ
     */
    MCAPI bool canBrew();

private:

};