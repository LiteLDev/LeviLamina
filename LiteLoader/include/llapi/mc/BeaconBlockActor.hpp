/**
 * @file  BeaconBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -2008257467
     * @symbol  ?_getUpdatePacket\@BeaconBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -770085379
     * @symbol  ?_onUpdatePacket\@BeaconBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1461448573
     * @symbol  ?getContainer\@BeaconBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -1889170433
     * @symbol  ?getContainer\@BeaconBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1841619915
     * @symbol  ?getContainerSize\@BeaconBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -505347792
     * @symbol  ?getItem\@BeaconBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   2084564250
     * @symbol  ?getMaxStackSize\@BeaconBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -763685185
     * @symbol  ?getName\@BeaconBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   387479977
     * @symbol  ?hasAlphaLayer\@BeaconBlockActor\@\@UEBA_NXZ
     */
    MCVAPI bool hasAlphaLayer() const;
    /**
     * @hash   230541459
     * @symbol  ?load\@BeaconBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -776162190
     * @symbol  ?removeItem\@BeaconBlockActor\@\@UEAAXHH\@Z
     */
    MCVAPI void removeItem(int, int);
    /**
     * @hash   -2067481614
     * @symbol  ?save\@BeaconBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -1978627531
     * @symbol  ?serverInitItemStackIds\@BeaconBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1629352661
     * @symbol  ?setItem\@BeaconBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -454232948
     * @symbol  ?startOpen\@BeaconBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   569228460
     * @symbol  ?stopOpen\@BeaconBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1938880604
     * @symbol  ?tick\@BeaconBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -353484321
     * @symbol  ??0BeaconBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BeaconBlockActor(class BlockPos const &);
    /**
     * @hash   779841604
     * @symbol  ?checkShapeAndAchievement\@BeaconBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkShapeAndAchievement(class BlockSource &);
    /**
     * @hash   -31166060
     * @symbol  ?getBeaconData\@BeaconBlockActor\@\@QEAA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag getBeaconData();
    /**
     * @hash   1251563269
     * @symbol  ?isEffectAvailable\@BeaconBlockActor\@\@QEBA_NH\@Z
     */
    MCAPI bool isEffectAvailable(int) const;
    /**
     * @hash   1938795316
     * @symbol  ?isSecondaryAvailable\@BeaconBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isSecondaryAvailable() const;
    /**
     * @hash   -1299101101
     * @symbol  ?setPrimaryEffect\@BeaconBlockActor\@\@QEAA_NH\@Z
     */
    MCAPI bool setPrimaryEffect(int);
    /**
     * @hash   984184335
     * @symbol  ?setSecondaryEffect\@BeaconBlockActor\@\@QEAA_NH\@Z
     */
    MCAPI bool setSecondaryEffect(int);
    /**
     * @hash   -1172977469
     * @symbol  ?isPaymentItem\@BeaconBlockActor\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isPaymentItem(class ItemDescriptor const &);

//private:
    /**
     * @hash   1323093377
     * @symbol  ?_applyEffects\@BeaconBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _applyEffects(class BlockSource &);
    /**
     * @hash   -1989524497
     * @symbol  ?_getEffectTier\@BeaconBlockActor\@\@AEBAHH\@Z
     */
    MCAPI int _getEffectTier(int) const;
    /**
     * @hash   568234210
     * @symbol  ?_isEffectValid\@BeaconBlockActor\@\@AEBA_NH\@Z
     */
    MCAPI bool _isEffectValid(int) const;
    /**
     * @hash   -79562380
     * @symbol  ?_isSecondaryEffectValid\@BeaconBlockActor\@\@AEBA_NH\@Z
     */
    MCAPI bool _isSecondaryEffectValid(int) const;
    /**
     * @hash   -2051294590
     * @symbol  ?_loadClientSideState\@BeaconBlockActor\@\@AEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void _loadClientSideState(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2104285809
     * @symbol  ?_saveClientSideState\@BeaconBlockActor\@\@AEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

private:

};