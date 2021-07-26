#pragma once

#include <memory>

#include "ContainerContentChangeListener.h"
#include "ContainerSizeChangeListener.h"
#include "Inventory.h"

#include "../dll.h"

class HudContainerManagerModel;

class PlayerInventory : public ContainerSizeChangeListener, public ContainerContentChangeListener {
public:
    int                                     selectedSlot = 0;
    ItemStack                               item;
    char                                    selectedContainerId = 0;
    std::unique_ptr<Inventory>              inventory;
    std::vector<ItemStack>                  complexItems;
    std::weak_ptr<HudContainerManagerModel> model;

    MCAPI void ContainerSizeChanged(int) override;
    MCAPI void ContainerContentChanged(int) override;

    MCAPI void createTransactionContext(
        std::function<void(Container&, int, const ItemStack&, const ItemStack&)>, std::function<void()>);
};

static_assert(offsetof(PlayerInventory, inventory) == 176); // Player::getInventory