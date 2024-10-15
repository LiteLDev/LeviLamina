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

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainer();

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // vIndex: 7
    virtual class ItemStack const& getItem(int slot) const;

    // vIndex: 12
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 20
    virtual int getContainerSize() const;

    // vIndex: 21
    virtual int getMaxStackSize() const;

    // vIndex: 22
    virtual void startOpen(class Player&);

    // vIndex: 23
    virtual void stopOpen(class Player&);

    // vIndex: 31
    virtual void setContainerChanged(int slot);

    MCAPI CraftingContainer(int w, int h);

    MCAPI class ItemStack const& getItem(int x, int y) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(int w, int h);

    MCAPI void dtor$();

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setContainerChanged$(int slot);

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player&);

    MCAPI void stopOpen$(class Player&);

    // NOLINTEND
};
