#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/BaseContainerMenu.h"

class InventoryMenu : public ::BaseContainerMenu {
public:
    // prevent constructor by default
    InventoryMenu& operator=(InventoryMenu const&);
    InventoryMenu(InventoryMenu const&);
    InventoryMenu();

public:
    // NOLINTBEGIN
    MCVAPI class Container* _getContainer() const;

    MCVAPI std::vector<class ItemStack> getItemCopies() const;

    MCVAPI class ItemStack const& getSlot(int slot) const;

    MCVAPI void removeSlot(int slot, int count);

    MCVAPI void serverInitItemStackIds();

    MCVAPI void setSlot(int slot, class ItemStack const& item, bool);

    MCVAPI ~InventoryMenu();

    MCAPI InventoryMenu(class Player& player, class Container* container);

    // NOLINTEND
};
