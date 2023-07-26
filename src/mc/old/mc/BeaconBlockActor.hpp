/**
 * @file  BeaconBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeaconBlockActor.
 *
 */
class BeaconBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONBLOCKACTOR
public:
    class BeaconBlockActor& operator=(class BeaconBlockActor const &) = delete;
    BeaconBlockActor(class BeaconBlockActor const &) = delete;
    BeaconBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEACONBLOCKACTOR
    /**
     * @symbol  ?_getUpdatePacket\@BeaconBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ?_onUpdatePacket\@BeaconBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ?getContainer\@BeaconBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@BeaconBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@BeaconBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@BeaconBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@BeaconBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?getName\@BeaconBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol  ?hasAlphaLayer\@BeaconBlockActor\@\@UEBA_NXZ
     */
    MCVAPI bool hasAlphaLayer() const;
    /**
     * @symbol  ?load\@BeaconBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?removeItem\@BeaconBlockActor\@\@UEAAXHH\@Z
     */
    MCVAPI void removeItem(int, int);
    /**
     * @symbol  ?save\@BeaconBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@BeaconBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setItem\@BeaconBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@BeaconBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@BeaconBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol  ?tick\@BeaconBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol  ??0BeaconBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BeaconBlockActor(class BlockPos const &);
    /**
     * @symbol  ?checkShapeAndAchievement\@BeaconBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkShapeAndAchievement(class BlockSource &);
    /**
     * @symbol  ?getBeaconData\@BeaconBlockActor\@\@QEAA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag getBeaconData();
    /**
     * @symbol  ?isEffectAvailable\@BeaconBlockActor\@\@QEBA_NH\@Z
     */
    MCAPI bool isEffectAvailable(int) const;
    /**
     * @symbol  ?isSecondaryAvailable\@BeaconBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isSecondaryAvailable() const;
    /**
     * @symbol  ?setPrimaryEffect\@BeaconBlockActor\@\@QEAA_NH\@Z
     */
    MCAPI bool setPrimaryEffect(int);
    /**
     * @symbol  ?setSecondaryEffect\@BeaconBlockActor\@\@QEAA_NH\@Z
     */
    MCAPI bool setSecondaryEffect(int);
    /**
     * @symbol  ?isPaymentItem\@BeaconBlockActor\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isPaymentItem(class ItemDescriptor const &);

//private:
    /**
     * @symbol  ?_applyEffects\@BeaconBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _applyEffects(class BlockSource &);
    /**
     * @symbol  ?_getEffectTier\@BeaconBlockActor\@\@AEBAHH\@Z
     */
    MCAPI int _getEffectTier(int) const;
    /**
     * @symbol  ?_isEffectValid\@BeaconBlockActor\@\@AEBA_NH\@Z
     */
    MCAPI bool _isEffectValid(int) const;
    /**
     * @symbol  ?_isSecondaryEffectValid\@BeaconBlockActor\@\@AEBA_NH\@Z
     */
    MCAPI bool _isSecondaryEffectValid(int) const;
    /**
     * @symbol  ?_loadClientSideState\@BeaconBlockActor\@\@AEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void _loadClientSideState(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?_saveClientSideState\@BeaconBlockActor\@\@AEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

private:

};