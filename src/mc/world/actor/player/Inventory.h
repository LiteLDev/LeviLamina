#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/FillingContainer.h"

class Inventory : public ::FillingContainer {
public:
    // prevent constructor by default
    Inventory& operator=(Inventory const&);
    Inventory(Inventory const&);
    Inventory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Inventory@@UEAA@XZ
    virtual ~Inventory() = default;

    // vIndex: 1, symbol: ?init@Inventory@@UEAAXXZ
    virtual void init();

    // vIndex: 10, symbol: ?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 11, symbol: ?setItemWithForceBalance@Inventory@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    // vIndex: 23, symbol: ?getEmptySlotsCount@Inventory@@UEBAHXZ
    virtual int getEmptySlotsCount() const;

    // vIndex: 38, symbol: ?add@Inventory@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack& item);

    // vIndex: 39, symbol: ?canAdd@Inventory@@UEBA_NAEBVItemStack@@@Z
    virtual bool canAdd(class ItemStack const& item) const;

    // vIndex: 43, symbol: ?getFirstEmptySlot@Inventory@@UEBAHXZ
    virtual int getFirstEmptySlot() const;

    // vIndex: 44, symbol: ?setContainerSize@Inventory@@UEAAXH@Z
    virtual void setContainerSize(int size);

    // symbol: ??0Inventory@@QEAA@PEAVPlayer@@@Z
    MCAPI explicit Inventory(class Player* player);

    // symbol: ?dropSlot@Inventory@@QEAAXH_N00@Z
    MCAPI void dropSlot(int slot, bool onlyClearContainer, bool dropAll, bool randomly);

    // symbol: ?setupDefault@Inventory@@QEAAXXZ
    MCAPI void setupDefault();

    // symbol: ?tick@Inventory@@QEAAXH@Z
    MCAPI void tick(int selectedSlot);

    // NOLINTEND
};
