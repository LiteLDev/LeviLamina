#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class LevelContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    LevelContainerManagerModel& operator=(LevelContainerManagerModel const&);
    LevelContainerManagerModel(LevelContainerManagerModel const&);
    LevelContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol:
    // ?getItemCopies@LevelContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@LevelContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 8, symbol: ?getSlot@LevelContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const;

    // vIndex: 9, symbol: ?setData@LevelContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@LevelContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@LevelContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@LevelContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??1LevelContainerManagerModel@@UEAA@XZ
    MCVAPI ~LevelContainerManagerModel();

    // symbol: ??0LevelContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
    MCAPI LevelContainerManagerModel(::ContainerID, class Player&, struct ActorUniqueID);

    // symbol: ??0LevelContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
    MCAPI LevelContainerManagerModel(::ContainerID, class Player&, class BlockPos const&, ::BlockActorType);

    // symbol: ?getBlockPos@LevelContainerManagerModel@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getBlockPos() const;

    // symbol: ?getEntityUniqueID@LevelContainerManagerModel@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getEntityUniqueID() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getBlockEntity@LevelContainerManagerModel@@IEAAPEAVBlockActor@@XZ
    MCAPI class BlockActor* _getBlockEntity();

    // symbol: ?_getRawContainer@LevelContainerManagerModel@@IEAAPEAVContainer@@XZ
    MCAPI class Container* _getRawContainer();

    // NOLINTEND
};
