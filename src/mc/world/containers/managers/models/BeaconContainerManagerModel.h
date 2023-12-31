#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class BeaconContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    BeaconContainerManagerModel& operator=(BeaconContainerManagerModel const&);
    BeaconContainerManagerModel(BeaconContainerManagerModel const&);
    BeaconContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BeaconContainerManagerModel@@UEAA@XZ
    virtual ~BeaconContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@BeaconContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@BeaconContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@BeaconContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 17, symbol: ?_postInit@BeaconContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0BeaconContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI BeaconContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // symbol: ?PAYMENT_SLOT@BeaconContainerManagerModel@@2HB
    MCAPI static int const PAYMENT_SLOT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_resetSelectionState@BeaconContainerManagerModel@@AEAAXXZ
    MCAPI void _resetSelectionState();

    // NOLINTEND
};
