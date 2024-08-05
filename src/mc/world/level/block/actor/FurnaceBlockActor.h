#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class FurnaceBlockActor {
public:
    // prevent constructor by default
    FurnaceBlockActor& operator=(FurnaceBlockActor const&);
    FurnaceBlockActor(FurnaceBlockActor const&);
    FurnaceBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI bool canPullOutItem(int slot, int face, class ItemStack const& item) const;

    MCVAPI bool canPushInItem(int slot, int face, class ItemStack const& item) const;

    MCVAPI void fixupOnLoad(class LevelChunk& lc);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onCustomTagLoadDone(class BlockSource& region);

    MCVAPI void onMove();

    MCVAPI void onNeighborChanged(class BlockSource& region, class BlockPos const& position);

    MCVAPI void onRemoved(class BlockSource&);

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

    MCVAPI ~FurnaceBlockActor();

    MCAPI explicit FurnaceBlockActor(class BlockPos const& pos);

    MCAPI void checkForAlternativeFuelAchievement(class BlockSource& region, class ItemStack const& item);

    MCAPI void checkForSmeltEverythingAchievement(class BlockSource& region);

    MCAPI int getLitDuration() const;

    MCAPI int getLitTime() const;

    MCAPI int getStoredXP() const;

    MCAPI int getTickCount() const;

    MCAPI bool isEmptiedByHopper(class BlockSource& region);

    MCAPI void onFurnaceBlockRemoved(class BlockSource& region);

    MCAPI void setLitDuration(int value);

    MCAPI void setLitTime(int value);

    MCAPI void setStoredXP(int value);

    MCAPI void setTickCount(int value);

    MCAPI void storeXPRewardForRemovingWithHopper(class ItemStackBase const& item, int numItemsSmelted);

    MCAPI int withdrawStoredXPReward();

    MCAPI static int getAvailableFuelSetCount(int slot, class ItemStackBase const& item);

    MCAPI static float getBurnDuration(class ItemStackBase const& itemInstance, float burnInterval);

    MCAPI static float getItemBurnDuration(class Item const& item, float burnInterval);

    MCAPI static int getXPRewardFromSmeltingItems(class ItemStackBase const& item, int numItemsSmelted);

    MCAPI static bool isItemAllowedInFuelSlot(int slot, class ItemStackBase const& item, int amount);

    MCAPI static int const BURN_INTERVAL;

    MCAPI static float const DEFAULT_SMELTING_TIME;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI FurnaceBlockActor(
        ::BlockActorType               blockActorType,
        class BlockPos const&          pos,
        class HashedString const&      recipeTag,
        ::Puv::Legacy::LevelSoundEvent smeltSound,
        ::ContainerType                containerType,
        int                            burnInterval,
        class Block const&             unlitFurnace,
        class Block const&             litFurnace
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _refreshFurnaceBlockLitState(class BlockSource& region);

    MCAPI void burn(class Recipes const& recipes);

    MCAPI bool canBurn(class Recipes const& recipes);

    MCAPI static float _getXPRewardMultiplier(class ItemStackBase const& item);

    MCAPI static int _roundXPReward(float xpTotal);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const BURN_DURATION_KEY;

    MCAPI static std::string const BURN_TIME_KEY;

    MCAPI static std::string const COOK_TIME_KEY;

    MCAPI static std::string const CUSTOM_NAME_KEY;

    MCAPI static std::string const ITEMS_LIST_KEY;

    MCAPI static std::string const LAST_FUEL_KEY;

    MCAPI static std::string const SLOT_KEY;

    MCAPI static std::string const STORED_XP_DEPRECATED_KEY;

    MCAPI static std::string const STORED_XP_KEY;

    // NOLINTEND
};
