#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/Container.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"

class HopperBlockActor : public BlockActor, public Container, public Hopper {
public:
    // prevent constructor by default
    HopperBlockActor& operator=(HopperBlockActor const&);
    HopperBlockActor(HopperBlockActor const&);
    HopperBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@HopperBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@HopperBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?getContainer@HopperBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@HopperBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@HopperBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@HopperBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@HopperBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@HopperBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@HopperBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onMove@HopperBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@HopperBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource& region, class BlockPos const& position);

    // symbol: ?save@HopperBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@HopperBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setContainerChanged@HopperBlockActor@@UEAAXH@Z
    MCVAPI void setContainerChanged(int slot);

    // symbol: ?setItem@HopperBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ?tick@HopperBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ??0HopperBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit HopperBlockActor(class BlockPos const& pos);

    // symbol: ?checkForSmeltEverythingAchievement@HopperBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource& region);

    // symbol: ?getAttachedFurnace@HopperBlockActor@@QEAAPEAVFurnaceBlockActor@@AEAVBlockSource@@@Z
    MCAPI class FurnaceBlockActor* getAttachedFurnace(class BlockSource& region);

    // symbol: ?isAttachedToChestAndFurnace@HopperBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource& region);

    // symbol: ?updateCooldownAfterMove@HopperBlockActor@@QEAAXAEBUTick@@H@Z
    MCAPI void updateCooldownAfterMove(struct Tick const& currentTick, int time);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_ensureTickingOrder@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _ensureTickingOrder(class BlockSource& region, int maxRecursion);

    // symbol: ?_tick@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _tick(class BlockSource& region, int maxRecursion);

    // symbol: ?isAttachedToContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
    MCAPI bool isAttachedToContainerType(class BlockSource& region, ::ContainerType containerType);

    // symbol: ?isSourceOfContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
    MCAPI bool isSourceOfContainerType(class BlockSource& region, ::ContainerType containerType);

    // NOLINTEND
};
