#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrewingStandBlockActor {
public:
    // prevent constructor by default
    BrewingStandBlockActor& operator=(BrewingStandBlockActor const&);
    BrewingStandBlockActor(BrewingStandBlockActor const&);
    BrewingStandBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI bool canPullOutItem(int slot, int face, class ItemStack const&) const;

    MCVAPI bool canPushInItem(int slot, int face, class ItemStack const& item) const;

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onChanged(class BlockSource& region);

    MCVAPI void onMove();

    MCVAPI void onRemoved(class BlockSource&);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setContainerChanged(int slot);

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player&);

    MCVAPI void stopOpen(class Player&);

    MCVAPI void tick(class BlockSource& region);

    MCAPI void brew();

    MCAPI int getBrewTime() const;

    MCAPI int getFuelAmount() const;

    MCAPI int getFuelTotal() const;

    MCAPI void setBrewTime(int value);

    MCAPI void setFuelAmount(int value);

    MCAPI void setFuelTotal(int value);

    MCAPI static bool isFuel(class ItemDescriptor const& itemDescriptor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool canBrew();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();

    MCAPI bool canPullOutItem$(int slot, int face, class ItemStack const&) const;

    MCAPI bool canPushInItem$(int slot, int face, class ItemStack const& item) const;

    MCAPI class Container* getContainer$();

    MCAPI class Container const* getContainer$() const;

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI std::string getName$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI void onMove$();

    MCAPI void onRemoved$(class BlockSource&);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setContainerChanged$(int slot);

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player&);

    MCAPI void stopOpen$(class Player&);

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
