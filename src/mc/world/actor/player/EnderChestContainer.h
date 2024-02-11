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
    // vIndex: 0, symbol: __gen_??1EnderChestContainer@@UEAA@XZ
    virtual ~EnderChestContainer() = default;

    // vIndex: 19, symbol: ?startOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player& player);

    // vIndex: 20, symbol: ?stopOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player& player);

    // symbol: ??0EnderChestContainer@@QEAA@XZ
    MCAPI EnderChestContainer();

    // symbol: ?ITEMS_SIZE@EnderChestContainer@@2HB
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
