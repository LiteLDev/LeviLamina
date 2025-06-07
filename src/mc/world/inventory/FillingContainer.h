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

    // vIndex: 44
    virtual int removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    // vIndex: 45
    virtual void swapSlots(int from, int to);

    // vIndex: 46
    virtual bool add(::ItemStack& item);

    // vIndex: 47
    virtual bool canAdd(::ItemStack const& item) const;

    // vIndex: 14
    virtual void removeItem(int slot, int count) /*override*/;

    // vIndex: 48
    virtual void clearSlot(int slot);

    // vIndex: 49
    virtual int clearInventory(int resizeTo);

    // vIndex: 50
    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const;

    // vIndex: 51
    virtual void loadFromTag(::ListTag const& inventoryList);

    // vIndex: 12
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

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

    // vIndex: 52
    virtual void _trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _addResource(::ItemStack const& item);

    MCAPI int _getFreeSlot() const;

    MCAPI int _getSlotWithRemainingSpace(::ItemStack const& newItem) const;

    MCAPI bool _isCreative() const;

    MCAPI void _release(int slot);

    MCAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;

    MCAPI bool removeResource(int type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    MCAPI void $swapSlots(int from, int to);

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $canAdd(::ItemStack const& item) const;

    MCAPI void $removeItem(int slot, int count);

    MCAPI void $clearSlot(int slot);

    MCAPI int $clearInventory(int resizeTo);

    MCAPI ::std::unique_ptr<::ListTag> $saveToTag(::SaveContext const& saveContext) const;

    MCAPI void $loadFromTag(::ListTag const& inventoryList);

    MCFOLD void $setItem(int modelSlot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Player&);

    MCFOLD void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $_trySetInSlot(::ItemStack& item, int const& slot, int const& inventorySize, int& backCompatOffset);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
