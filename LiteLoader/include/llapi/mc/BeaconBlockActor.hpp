/**
 * @file  MC/BeaconBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1430205125
     * @symbol ?_getUpdatePacket@BeaconBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1626590083
     * @symbol ?_onUpdatePacket@BeaconBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1908175667
     * @symbol ?getContainer@BeaconBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1480453807
     * @symbol ?getContainer@BeaconBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1735679275
     * @symbol ?getContainerSize@BeaconBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -712554768
     * @symbol ?getItem@BeaconBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -1294285590
     * @symbol ?getMaxStackSize@BeaconBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1620389777
     * @symbol ?getName@BeaconBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   287582105
     * @symbol ?hasAlphaLayer@BeaconBlockActor@@UEBA_NXZ
     */
    MCVAPI bool hasAlphaLayer() const;
    /**
     * @hash   -626086253
     * @symbol ?load@BeaconBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -868049166
     * @symbol ?removeItem@BeaconBlockActor@@UEAAXHH@Z
     */
    MCVAPI void removeItem(int, int);
    /**
     * @hash   1370857970
     * @symbol ?save@BeaconBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   2056562245
     * @symbol ?serverInitItemStackIds@BeaconBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1537465685
     * @symbol ?setItem@BeaconBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -546119924
     * @symbol ?startOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   477341484
     * @symbol ?stopOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1082252892
     * @symbol ?tick@BeaconBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -1209958273
     * @symbol ??0BeaconBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BeaconBlockActor(class BlockPos const &);
    /**
     * @hash   -76678476
     * @symbol ?checkShapeAndAchievement@BeaconBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void checkShapeAndAchievement(class BlockSource &);
    /**
     * @hash   -887870652
     * @symbol ?getBeaconData@BeaconBlockActor@@QEAA?AVCompoundTag@@XZ
     */
    MCAPI class CompoundTag getBeaconData();
    /**
     * @hash   394858677
     * @symbol ?isEffectAvailable@BeaconBlockActor@@QEBA_NH@Z
     */
    MCAPI bool isEffectAvailable(int) const;
    /**
     * @hash   1082167604
     * @symbol ?isSecondaryAvailable@BeaconBlockActor@@QEBA_NXZ
     */
    MCAPI bool isSecondaryAvailable() const;
    /**
     * @hash   2139238483
     * @symbol ?setPrimaryEffect@BeaconBlockActor@@QEAA_NH@Z
     */
    MCAPI bool setPrimaryEffect(int);
    /**
     * @hash   127556623
     * @symbol ?setSecondaryEffect@BeaconBlockActor@@QEAA_NH@Z
     */
    MCAPI bool setSecondaryEffect(int);
    /**
     * @hash   -2029682061
     * @symbol ?isPaymentItem@BeaconBlockActor@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isPaymentItem(class ItemDescriptor const &);

//private:
    /**
     * @hash   466604049
     * @symbol ?_applyEffects@BeaconBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _applyEffects(class BlockSource &);
    /**
     * @hash   1448938095
     * @symbol ?_getEffectTier@BeaconBlockActor@@AEBAHH@Z
     */
    MCAPI int _getEffectTier(int) const;
    /**
     * @hash   -288270494
     * @symbol ?_isEffectValid@BeaconBlockActor@@AEBA_NH@Z
     */
    MCAPI bool _isEffectValid(int) const;
    /**
     * @hash   -936067084
     * @symbol ?_isSecondaryEffectValid@BeaconBlockActor@@AEBA_NH@Z
     */
    MCAPI bool _isSecondaryEffectValid(int) const;
    /**
     * @hash   1387168002
     * @symbol ?_loadClientSideState@BeaconBlockActor@@AEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void _loadClientSideState(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1334146031
     * @symbol ?_saveClientSideState@BeaconBlockActor@@AEBA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

private:

};