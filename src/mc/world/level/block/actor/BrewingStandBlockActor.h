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
    // symbol: ?canPullOutItem@BrewingStandBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int slot, int face, class ItemStack const&) const;

    // symbol: ?canPushInItem@BrewingStandBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int slot, int face, class ItemStack const& item) const;

    // symbol: ?getContainer@BrewingStandBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@BrewingStandBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@BrewingStandBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@BrewingStandBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@BrewingStandBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@BrewingStandBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@BrewingStandBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onChanged@BrewingStandBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource& region);

    // symbol: ?onMove@BrewingStandBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?save@BrewingStandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@BrewingStandBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setContainerChanged@BrewingStandBlockActor@@UEAAXH@Z
    MCVAPI void setContainerChanged(int slot);

    // symbol: ?setItem@BrewingStandBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@BrewingStandBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@BrewingStandBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ?tick@BrewingStandBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ?brew@BrewingStandBlockActor@@QEAAXXZ
    MCAPI void brew();

    // symbol: ?getBrewTime@BrewingStandBlockActor@@QEBAHXZ
    MCAPI int getBrewTime() const;

    // symbol: ?getFuelAmount@BrewingStandBlockActor@@QEBAHXZ
    MCAPI int getFuelAmount() const;

    // symbol: ?getFuelTotal@BrewingStandBlockActor@@QEBAHXZ
    MCAPI int getFuelTotal() const;

    // symbol: ?setBrewTime@BrewingStandBlockActor@@QEAAXH@Z
    MCAPI void setBrewTime(int value);

    // symbol: ?setFuelAmount@BrewingStandBlockActor@@QEAAXH@Z
    MCAPI void setFuelAmount(int value);

    // symbol: ?setFuelTotal@BrewingStandBlockActor@@QEAAXH@Z
    MCAPI void setFuelTotal(int value);

    // symbol: ?isFuel@BrewingStandBlockActor@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isFuel(class ItemDescriptor const& itemDescriptor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?canBrew@BrewingStandBlockActor@@AEAA_NXZ
    MCAPI bool canBrew();

    // NOLINTEND
};
