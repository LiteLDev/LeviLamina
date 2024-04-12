#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/containers/ContainerType.h"

class SimpleContainer : public ::Container {
public:
    // prevent constructor by default
    SimpleContainer& operator=(SimpleContainer const&);
    SimpleContainer(SimpleContainer const&);
    SimpleContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SimpleContainer@@UEAA@XZ
    virtual ~SimpleContainer();

    // vIndex: 2, symbol: ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // vIndex: 5, symbol: ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItem(int slot) const;

    // vIndex: 10, symbol: ?setItem@SimpleContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 17, symbol: ?getContainerSize@SimpleContainer@@UEBAHXZ
    virtual int getContainerSize() const;

    // vIndex: 18, symbol: ?getMaxStackSize@SimpleContainer@@UEBAHXZ
    virtual int getMaxStackSize() const;

    // vIndex: 19, symbol: ?startOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player&);

    // vIndex: 20, symbol: ?stopOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player&);

    // symbol:
    // ??0SimpleContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
    MCAPI SimpleContainer(std::string const& name, bool customName, int size, ::ContainerType containerType);

    // NOLINTEND
};
