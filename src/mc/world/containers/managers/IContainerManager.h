#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

class IContainerManager {
public:
    // prevent constructor by default
    IContainerManager& operator=(IContainerManager const&);
    IContainerManager(IContainerManager const&);
    IContainerManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getContainerId@ContainerManagerModel@@UEBA?AW4ContainerID@@XZ
    virtual ::ContainerID getContainerId() const = 0;

    // vIndex: 2, symbol: ?setContainerId@ContainerManagerModel@@UEAAXW4ContainerID@@@Z
    virtual void setContainerId(::ContainerID) = 0;

    // vIndex: 3, symbol: ?getContainerType@ContainerManagerModel@@UEBA?AW4ContainerType@@XZ
    virtual ::ContainerType getContainerType() const = 0;

    // vIndex: 4, symbol: ?setContainerType@ContainerManagerModel@@UEAAXW4ContainerType@@@Z
    virtual void setContainerType(::ContainerType) = 0;

    // vIndex: 5, symbol: ?serverInitItemStackIds@ContainerManagerModel@@UEAAXXZ
    virtual void serverInitItemStackIds() = 0;

    // vIndex: 6, symbol:
    // ?getItemCopies@HorseContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const = 0;

    // vIndex: 7, symbol: ?setSlot@HorseContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool) = 0;

    // vIndex: 8, symbol: ?getSlot@HorseContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const = 0;

    // vIndex: 9, symbol: ?setData@ElementConstructorContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int) = 0;

    // vIndex: 10, symbol: ?broadcastChanges@LoomContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges() = 0;

    // symbol: ??1IContainerManager@@UEAA@XZ
    MCVAPI ~IContainerManager();

    // NOLINTEND
};
