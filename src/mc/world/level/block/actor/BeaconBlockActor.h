#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeaconBlockActor {

public:
    // prevent constructor by default
    BeaconBlockActor& operator=(BeaconBlockActor const&) = delete;
    BeaconBlockActor(BeaconBlockActor const&)            = delete;
    BeaconBlockActor()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEACONBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@BeaconBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@BeaconBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?getContainer\@BeaconBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@BeaconBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@BeaconBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@BeaconBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@BeaconBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@BeaconBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?hasAlphaLayer\@BeaconBlockActor\@\@UEBA_NXZ
     */
    MCVAPI bool hasAlphaLayer() const; // NOLINT
    /**
     * @symbol ?load\@BeaconBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?removeItem\@BeaconBlockActor\@\@UEAAXHH\@Z
     */
    MCVAPI void removeItem(int, int); // NOLINT
    /**
     * @symbol ?save\@BeaconBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?serverInitItemStackIds\@BeaconBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@BeaconBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@BeaconBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@BeaconBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@BeaconBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol ??0BeaconBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BeaconBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?checkShapeAndAchievement\@BeaconBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void checkShapeAndAchievement(class BlockSource&); // NOLINT
    /**
     * @symbol ?getBeaconData\@BeaconBlockActor\@\@QEAA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag getBeaconData(); // NOLINT
    /**
     * @symbol ?isEffectAvailable\@BeaconBlockActor\@\@QEBA_NH\@Z
     */
    MCAPI bool isEffectAvailable(int) const; // NOLINT
    /**
     * @symbol ?isSecondaryAvailable\@BeaconBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isSecondaryAvailable() const; // NOLINT
    /**
     * @symbol ?setPrimaryEffect\@BeaconBlockActor\@\@QEAA_NH\@Z
     */
    MCAPI bool setPrimaryEffect(int); // NOLINT
    /**
     * @symbol ?setSecondaryEffect\@BeaconBlockActor\@\@QEAA_NH\@Z
     */
    MCAPI bool setSecondaryEffect(int); // NOLINT
    /**
     * @symbol ?isPaymentItem\@BeaconBlockActor\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isPaymentItem(class ItemDescriptor const&); // NOLINT

    // private:
    /**
     * @symbol ?_applyEffects\@BeaconBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _applyEffects(class BlockSource&); // NOLINT
    /**
     * @symbol ?_getEffectTier\@BeaconBlockActor\@\@AEBAHH\@Z
     */
    MCAPI int _getEffectTier(int) const; // NOLINT
    /**
     * @symbol ?_isEffectValid\@BeaconBlockActor\@\@AEBA_NH\@Z
     */
    MCAPI bool _isEffectValid(int) const; // NOLINT
    /**
     * @symbol ?_isSecondaryEffectValid\@BeaconBlockActor\@\@AEBA_NH\@Z
     */
    MCAPI bool _isSecondaryEffectValid(int) const; // NOLINT
    /**
     * @symbol ?_saveClientSideState\@BeaconBlockActor\@\@AEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool _saveClientSideState(class CompoundTag&) const; // NOLINT

private:
};
