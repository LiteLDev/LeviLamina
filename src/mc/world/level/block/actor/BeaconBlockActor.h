#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeaconBlockActor {
public:
    // prevent constructor by default
    BeaconBlockActor& operator=(BeaconBlockActor const&);
    BeaconBlockActor(BeaconBlockActor const&);
    BeaconBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@BeaconBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@BeaconBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?getContainer@BeaconBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@BeaconBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@BeaconBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@BeaconBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@BeaconBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@BeaconBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?hasAlphaLayer@BeaconBlockActor@@UEBA_NXZ
    MCVAPI bool hasAlphaLayer() const;

    // symbol: ?load@BeaconBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?removeItem@BeaconBlockActor@@UEAAXHH@Z
    MCVAPI void removeItem(int slot, int count);

    // symbol: ?save@BeaconBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@BeaconBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@BeaconBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ?stopOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player& player);

    // symbol: ?tick@BeaconBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ??0BeaconBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit BeaconBlockActor(class BlockPos const& pos);

    // symbol: ?checkShapeAndAchievement@BeaconBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void checkShapeAndAchievement(class BlockSource& region);

    // symbol: ?getBeaconData@BeaconBlockActor@@QEAA?AVCompoundTag@@XZ
    MCAPI class CompoundTag getBeaconData();

    // symbol: ?isEffectAvailable@BeaconBlockActor@@QEBA_NH@Z
    MCAPI bool isEffectAvailable(int effectId) const;

    // symbol: ?isSecondaryAvailable@BeaconBlockActor@@QEBA_NXZ
    MCAPI bool isSecondaryAvailable() const;

    // symbol: ?setPrimaryEffect@BeaconBlockActor@@QEAA_NH@Z
    MCAPI bool setPrimaryEffect(int effectId);

    // symbol: ?setSecondaryEffect@BeaconBlockActor@@QEAA_NH@Z
    MCAPI bool setSecondaryEffect(int effectId);

    // symbol: ?isPaymentItem@BeaconBlockActor@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isPaymentItem(class ItemDescriptor const& pItem);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_applyEffects@BeaconBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _applyEffects(class BlockSource& region);

    // symbol: ?_getEffectTier@BeaconBlockActor@@AEBAHH@Z
    MCAPI int _getEffectTier(int effectId) const;

    // symbol: ?_isEffectValid@BeaconBlockActor@@AEBA_NH@Z
    MCAPI bool _isEffectValid(int effectId) const;

    // symbol: ?_isSecondaryEffectValid@BeaconBlockActor@@AEBA_NH@Z
    MCAPI bool _isSecondaryEffectValid(int effectId) const;

    // symbol: ?_saveClientSideState@BeaconBlockActor@@AEBA_NAEAVCompoundTag@@@Z
    MCAPI bool _saveClientSideState(class CompoundTag& tag) const;

    // NOLINTEND
};
