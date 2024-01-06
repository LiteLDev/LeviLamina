#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class LabTableContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    LabTableContainerManagerModel& operator=(LabTableContainerManagerModel const&);
    LabTableContainerManagerModel(LabTableContainerManagerModel const&);
    LabTableContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LabTableContainerManagerModel@@UEAA@XZ
    virtual ~LabTableContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@LabTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@LabTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@LabTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@LabTableContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@LabTableContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@LabTableContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@LabTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0LabTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI
    LabTableContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // symbol: ?INPUT_SLOTS@LabTableContainerManagerModel@@2HB
    MCAPI static int const INPUT_SLOTS;

    // NOLINTEND
};
