#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class Player;
class SaveContext;
// clang-format on

class FillingContainer : public ::Container {
public:
    // FillingContainer inner types define
    using ItemList = ::std::vector<::ItemStack>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    ::ll::TypedStorage<8, 8, ::Player*>                   mPlayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FillingContainer() /*override*/;

    // vIndex: 41
    virtual int removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    // vIndex: 42
    virtual void swapSlots(int from, int to);

    // vIndex: 43
    virtual bool add(::ItemStack& item);

    // vIndex: 44
    virtual bool canAdd(::ItemStack const& item) const;

    // vIndex: 14
    virtual void removeItem(int slot, int count) /*override*/;

    // vIndex: 45
    virtual void clearSlot(int slot);

    // vIndex: 46
    virtual int clearInventory(int resizeTo);

    // vIndex: 47
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const;

    // vIndex: 48
    virtual void loadFromTag(::ListTag const& inventoryList);

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player&) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 49
    virtual void _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _addResource(::ItemStack const& item);

    MCNAPI int _getFreeSlot() const;

    MCNAPI int _getSlotWithRemainingSpace(::ItemStack const& newItem) const;

    MCNAPI bool _isCreative() const;

    MCNAPI void _release(int slot);

    MCNAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;

    MCNAPI bool removeResource(int type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    MCNAPI void $swapSlots(int from, int to);

    MCNAPI bool $add(::ItemStack& item);

    MCNAPI bool $canAdd(::ItemStack const& item) const;

    MCNAPI void $removeItem(int slot, int count);

    MCNAPI void $clearSlot(int slot);

    MCNAPI int $clearInventory(int resizeTo);

    MCNAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;

    MCNAPI void $loadFromTag(::ListTag const& inventoryList);

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Player&);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
