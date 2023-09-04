#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/BaseContainerMenu.h"

class InventoryMenu : public ::BaseContainerMenu {
public:
    // prevent constructor by default
    InventoryMenu& operator=(InventoryMenu const&) = delete;
    InventoryMenu(InventoryMenu const&)            = delete;
    InventoryMenu()                                = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_getContainer@InventoryMenu@@MEBAPEAVContainer@@XZ
    MCVAPI class Container* _getContainer() const;

    // symbol: ?getItemCopies@InventoryMenu@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    MCVAPI std::vector<class ItemStack> getItemCopies() const;

    // symbol: ?getSlot@InventoryMenu@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getSlot(int) const;

    // symbol: ?removeSlot@InventoryMenu@@UEAAXHH@Z
    MCVAPI void removeSlot(int, int);

    // symbol: ?serverInitItemStackIds@InventoryMenu@@UEAAXXZ
    MCVAPI void serverInitItemStackIds();

    // symbol: ?setSlot@InventoryMenu@@UEAAXHAEBVItemStack@@_N@Z
    MCVAPI void setSlot(int, class ItemStack const&, bool);

    // symbol: ??1InventoryMenu@@UEAA@XZ
    MCVAPI ~InventoryMenu();

    // symbol: ??0InventoryMenu@@QEAA@AEAVPlayer@@PEAVContainer@@@Z
    MCAPI InventoryMenu(class Player&, class Container*);

    // NOLINTEND
};
