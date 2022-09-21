/**
 * @file  MC/HopperBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopperBlockActor.
 *
 */
class HopperBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERBLOCKACTOR
public:
    class HopperBlockActor& operator=(class HopperBlockActor const &) = delete;
    HopperBlockActor(class HopperBlockActor const &) = delete;
    HopperBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERBLOCKACTOR
    /**
     * @hash   -867224971
     * @symbol ?_getUpdatePacket@HopperBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   640479309
     * @symbol ?_onUpdatePacket@HopperBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1543853891
     * @symbol ?getContainer@HopperBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1116132031
     * @symbol ?getContainer@HopperBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -770237525
     * @symbol ?getContainerSize@HopperBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   938223248
     * @symbol ?getItem@HopperBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1627334906
     * @symbol ?getMaxStackSize@HopperBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -170538929
     * @symbol ?getName@HopperBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -359566029
     * @symbol ?load@HopperBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   2051243339
     * @symbol ?onMove@HopperBlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -651380524
     * @symbol ?onNeighborChanged@HopperBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -525622366
     * @symbol ?save@HopperBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   2121690277
     * @symbol ?serverInitItemStackIds@HopperBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -2117236401
     * @symbol ?setContainerChanged@HopperBlockActor@@UEAAXH@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   616269493
     * @symbol ?setItem@HopperBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   520503548
     * @symbol ?startOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   1543964956
     * @symbol ?stopOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1968313900
     * @symbol ?tick@HopperBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -616623969
     * @symbol ??0HopperBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI HopperBlockActor(class BlockPos const &);
    /**
     * @hash   1987660884
     * @symbol ?checkForSmeltEverythingAchievement@HopperBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @hash   1461147412
     * @symbol ?getAttachedFurnace@HopperBlockActor@@QEAAPEAVFurnaceBlockActor@@AEAVBlockSource@@@Z
     */
    MCAPI class FurnaceBlockActor * getAttachedFurnace(class BlockSource &);
    /**
     * @hash   737336607
     * @symbol ?isAttachedToChestAndFurnace@HopperBlockActor@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource &);
    /**
     * @hash   -244995503
     * @symbol ?updateCooldownAfterMove@HopperBlockActor@@QEAAXAEBUTick@@H@Z
     */
    MCAPI void updateCooldownAfterMove(struct Tick const &, int);

//private:
    /**
     * @hash   448956305
     * @symbol ?_ensureTickingOrder@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
     */
    MCAPI void _ensureTickingOrder(class BlockSource &, int);
    /**
     * @hash   1960428279
     * @symbol ?_tick@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
     */
    MCAPI void _tick(class BlockSource &, int);
    /**
     * @hash   -845663417
     * @symbol ?isAttachedToContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
     */
    MCAPI bool isAttachedToContainerType(class BlockSource &, enum ContainerType);
    /**
     * @hash   256377188
     * @symbol ?isSourceOfContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
     */
    MCAPI bool isSourceOfContainerType(class BlockSource &, enum ContainerType);

private:

};