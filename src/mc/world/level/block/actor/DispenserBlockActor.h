#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class DispenserBlockActor : public ::RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    DispenserBlockActor& operator=(DispenserBlockActor const&);
    DispenserBlockActor(DispenserBlockActor const&);
    DispenserBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@DispenserBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@DispenserBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?getContainer@DispenserBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@DispenserBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@DispenserBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@DispenserBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@DispenserBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@DispenserBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@DispenserBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onMove@DispenserBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?save@DispenserBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@DispenserBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@DispenserBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@DispenserBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ?stopOpen@DispenserBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ??0DispenserBlockActor@@QEAA@VBlockPos@@W4BlockActorType@@@Z
    MCAPI DispenserBlockActor(class BlockPos pos, ::BlockActorType type);

    // symbol: ?getRandomSlot@DispenserBlockActor@@QEAAHAEAVRandom@@@Z
    MCAPI int getRandomSlot(class Random& random);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?initItems@DispenserBlockActor@@IEAAXXZ
    MCAPI void initItems();

    // NOLINTEND
};
