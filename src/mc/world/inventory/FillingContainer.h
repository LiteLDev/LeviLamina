#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    virtual ~FillingContainer() /*override*/;

    virtual int removeResource(::ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    virtual void swapSlots(int from, int to);

    virtual bool add(::ItemStack& item);

    virtual bool canAdd(::ItemStack const& item) const;

    virtual void removeItem(int slot, int count) /*override*/;

    virtual void clearSlot(int slot);

    virtual int clearInventory(int resizeTo);

    virtual ::std::unique_ptr<::ListTag> saveToTag(::SaveContext const& saveContext) const;

    virtual void loadFromTag(::ListTag const& inventoryList);

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

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

    MCFOLD void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Actor&);

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
