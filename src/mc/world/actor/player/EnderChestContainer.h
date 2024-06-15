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

    // vIndex: 5, symbol: ?addRemovedListener@EnderChestContainer@@UEAAXPEAVContainerRemovedListener@@@Z
    virtual void addRemovedListener(class ContainerRemovedListener*);

    // vIndex: 6, symbol: ?removeRemovedListener@EnderChestContainer@@UEAAXPEAVContainerRemovedListener@@@Z
    virtual void removeRemovedListener(class ContainerRemovedListener*);

    // vIndex: 22, symbol: ?startOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player& player);

    // vIndex: 23, symbol: ?stopOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player& player);

    // symbol: ??0EnderChestContainer@@QEAA@XZ
    MCAPI EnderChestContainer();

    // symbol: ?setActiveChest@EnderChestContainer@@QEAAXPEAVChestBlockActor@@@Z
    MCAPI void setActiveChest(class ChestBlockActor* chest);

    // symbol: ?ITEMS_SIZE@EnderChestContainer@@2HB
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
