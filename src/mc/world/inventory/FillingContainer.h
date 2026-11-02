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

    virtual void startOpen(::Actor& actor) /*override*/;

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
    MCNAPI int _addResource(::ItemStack const& item);

    MCNAPI int _getSlotWithRemainingSpace(::ItemStack const& newItem) const;

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

    MCAPI bool $add(::ItemStack& item);

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

    MCNAPI void $startOpen(::Actor& actor);

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
