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
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI bool hasAlphaLayer() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void removeItem(int slot, int count);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player& player);

    MCVAPI void stopOpen(class Player& player);

    MCVAPI void tick(class BlockSource& region);

    MCAPI explicit BeaconBlockActor(class BlockPos const& pos);

    MCAPI void checkShapeAndAchievement(class BlockSource& region);

    MCAPI class CompoundTag getBeaconData();

    MCAPI bool isEffectAvailable(int effectId) const;

    MCAPI bool isSecondaryAvailable() const;

    MCAPI bool setPrimaryEffect(int effectId);

    MCAPI bool setSecondaryEffect(int effectId);

    MCAPI static bool isPaymentItem(class ItemDescriptor const& pItem);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _applyEffects(class BlockSource& region);

    MCAPI int _getEffectTier(int effectId) const;

    MCAPI bool _isEffectValid(int effectId) const;

    MCAPI bool _isSecondaryEffectValid(int effectId) const;

    MCAPI bool _saveClientSideState(class CompoundTag& tag) const;

    // NOLINTEND
};
