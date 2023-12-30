#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class CraftingContainer : public ::Container {
public:
    // prevent constructor by default
    CraftingContainer& operator=(CraftingContainer const&);
    CraftingContainer(CraftingContainer const&);
    CraftingContainer();

    std::vector<ItemStack> mItems; // this+0xE0
    int                    mWidth; // this+0xF8

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CraftingContainer@@UEAA@XZ
    virtual ~CraftingContainer();

    // vIndex: 2, symbol: ?serverInitItemStackIds@CraftingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    // vIndex: 5, symbol: ?getItem@CraftingContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItem(int slot) const;

    // vIndex: 10, symbol: ?setItem@CraftingContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 16, symbol: ?getContainerSize@CraftingContainer@@UEBAHXZ
    virtual int getContainerSize() const;

    // vIndex: 17, symbol: ?getMaxStackSize@CraftingContainer@@UEBAHXZ
    virtual int getMaxStackSize() const;

    // vIndex: 18, symbol: ?startOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player&);

    // vIndex: 19, symbol: ?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player&);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: ?setContainerChanged@CraftingContainer@@UEAAXH@Z
    virtual void setContainerChanged(int slot);

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // symbol: ??0CraftingContainer@@QEAA@HH@Z
    MCAPI CraftingContainer(int w, int h);

    // symbol: ?getItem@CraftingContainer@@QEBAAEBVItemStack@@HH@Z
    MCAPI class ItemStack const& getItem(int x, int y) const;

    // NOLINTEND
};
