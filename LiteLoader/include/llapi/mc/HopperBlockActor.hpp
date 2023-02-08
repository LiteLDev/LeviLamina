/**
 * @file  HopperBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -152194843
     * @symbol  ?_getUpdatePacket\@HopperBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1355509437
     * @symbol  ?_onUpdatePacket\@HopperBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1825770349
     * @symbol  ?getContainer\@HopperBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   2041475087
     * @symbol  ?getContainer\@HopperBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -499127893
     * @symbol  ?getContainerSize\@HopperBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   1653284128
     * @symbol  ?getItem\@HopperBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   711217450
     * @symbol  ?getMaxStackSize\@HopperBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   544521951
     * @symbol  ?getName\@HopperBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   355494851
     * @symbol  ?load\@HopperBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1386219813
     * @symbol  ?onMove\@HopperBlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   63711108
     * @symbol  ?onNeighborChanged\@HopperBlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @hash   189469266
     * @symbol  ?save\@HopperBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -1458185387
     * @symbol  ?serverInitItemStackIds\@HopperBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1259378609
     * @symbol  ?setContainerChanged\@HopperBlockActor\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   1331376501
     * @symbol  ?setItem\@HopperBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   612390524
     * @symbol  ?startOpen\@HopperBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   1635851932
     * @symbol  ?stopOpen\@HopperBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   -1611531012
     * @symbol  ?tick\@HopperBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   98390783
     * @symbol  ??0HopperBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI HopperBlockActor(class BlockPos const &);
    /**
     * @hash   -1592260908
     * @symbol  ?checkForSmeltEverythingAchievement\@HopperBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @hash   -2118774380
     * @symbol  ?getAttachedFurnace\@HopperBlockActor\@\@QEAAPEAVFurnaceBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class FurnaceBlockActor * getAttachedFurnace(class BlockSource &);
    /**
     * @hash   1452397487
     * @symbol  ?isAttachedToChestAndFurnace\@HopperBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource &);
    /**
     * @hash   470126881
     * @symbol  ?updateCooldownAfterMove\@HopperBlockActor\@\@QEAAXAEBUTick\@\@H\@Z
     */
    MCAPI void updateCooldownAfterMove(struct Tick const &, int);

//private:
    /**
     * @hash   1163986433
     * @symbol  ?_ensureTickingOrder\@HopperBlockActor\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _ensureTickingOrder(class BlockSource &, int);
    /**
     * @hash   -1619508889
     * @symbol  ?_tick\@HopperBlockActor\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _tick(class BlockSource &, int);
    /**
     * @hash   -130602537
     * @symbol  ?isAttachedToContainerType\@HopperBlockActor\@\@AEAA_NAEAVBlockSource\@\@W4ContainerType\@\@\@Z
     */
    MCAPI bool isAttachedToContainerType(class BlockSource &, enum class ContainerType);
    /**
     * @hash   971438068
     * @symbol  ?isSourceOfContainerType\@HopperBlockActor\@\@AEAA_NAEAVBlockSource\@\@W4ContainerType\@\@\@Z
     */
    MCAPI bool isSourceOfContainerType(class BlockSource &, enum class ContainerType);

private:

};