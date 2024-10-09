#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FillingContainer.h"

class EnderChestContainer : public ::FillingContainer {
public:
    // prevent constructor by default
    EnderChestContainer& operator=(EnderChestContainer const&);
    EnderChestContainer(EnderChestContainer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnderChestContainer() = default;

    // vIndex: 5
    virtual void addRemovedListener(class ContainerRemovedListener* listener);

    // vIndex: 6
    virtual void removeRemovedListener(class ContainerRemovedListener* listener);

    // vIndex: 22
    virtual void startOpen(class Player& player);

    // vIndex: 23
    virtual void stopOpen(class Player& player);

    MCAPI EnderChestContainer();

    MCAPI void setActiveChest(class ChestBlockActor* chest);

    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
