#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class HorseContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    HorseContainerManagerModel& operator=(HorseContainerManagerModel const&);
    HorseContainerManagerModel(HorseContainerManagerModel const&);
    HorseContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HorseContainerManagerModel@@UEAA@XZ
    virtual ~HorseContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@HorseContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@HorseContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 8, symbol: ?getSlot@HorseContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const;

    // vIndex: 17, symbol: ?_postInit@HorseContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0HorseContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
    MCAPI HorseContainerManagerModel(::ContainerID, class Player&, struct ActorUniqueID const&);

    // NOLINTEND
};
