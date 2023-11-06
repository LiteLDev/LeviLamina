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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~Inventory();

    // vIndex: 1, symbol: ?init@Inventory@@UEAAXXZ
    virtual void init();

    // vIndex: 10, symbol: ?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int, class ItemStack const&);

    // vIndex: 11, symbol: ?setItemWithForceBalance@Inventory@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setItemWithForceBalance(int, class ItemStack const&, bool);

    // vIndex: 22, symbol: ?getEmptySlotsCount@Inventory@@UEBAHXZ
    virtual int getEmptySlotsCount() const;

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 36, symbol: ?add@Inventory@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack&);

    // vIndex: 37, symbol: ?canAdd@Inventory@@UEBA_NAEBVItemStack@@@Z
    virtual bool canAdd(class ItemStack const&) const;

    // vIndex: 41, symbol: ?getFirstEmptySlot@Inventory@@UEBAHXZ
    virtual int getFirstEmptySlot() const;

    // vIndex: 42, symbol: ?setContainerSize@Inventory@@UEAAXH@Z
    virtual void setContainerSize(int);

    // symbol: ??0Inventory@@QEAA@PEAVPlayer@@@Z
    MCAPI explicit Inventory(class Player*);

    // symbol: ?dropSlot@Inventory@@QEAAXH_N00@Z
    MCAPI void dropSlot(int, bool, bool, bool);

    // symbol: ?setupDefault@Inventory@@QEAAXXZ
    MCAPI void setupDefault();

    // symbol: ?tick@Inventory@@QEAAXH@Z
    MCAPI void tick(int);

    // NOLINTEND
};
