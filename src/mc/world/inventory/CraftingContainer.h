#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class CraftingContainer : public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    ::ll::TypedStorage<4, 4, int>                         mWidth;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainer& operator=(CraftingContainer const&);
    CraftingContainer(CraftingContainer const&);
    CraftingContainer();

    std::vector<ItemStack> mItems; // this+0xE0
    int                    mWidth; // this+0xF8

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainer() /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 31
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftingContainer(int w, int h);

    MCAPI ::ItemStack const& getItem(int x, int y) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int w, int h);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI void $setContainerChanged(int slot);

    MCAPI void $startOpen(::Player&);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
