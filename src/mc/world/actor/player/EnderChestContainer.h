#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/FillingContainer.h"

class EnderChestContainer : public ::FillingContainer {
public:
    // prevent constructor by default
    EnderChestContainer& operator=(EnderChestContainer const&);
    EnderChestContainer(EnderChestContainer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~EnderChestContainer();

    // vIndex: 18, symbol: ?startOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player&);

    // vIndex: 19, symbol: ?stopOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player&);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // symbol: ??0EnderChestContainer@@QEAA@XZ
    MCAPI EnderChestContainer();

    // symbol: ?ITEMS_SIZE@EnderChestContainer@@2HB
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
