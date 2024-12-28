#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ListTag;
class Player;
class SaveContext;
// clang-format on

class FillingContainer : public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcb7e75;
    ::ll::UntypedStorage<8, 8>  mUnk3a7f59;
    // NOLINTEND

public:
    // prevent constructor by default
    FillingContainer& operator=(FillingContainer const&);
    FillingContainer();

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
    MCAPI FillingContainer(::FillingContainer const&);

    MCAPI FillingContainer(::Player* player, int numTotalSlots, ::ContainerType containerType);

    MCAPI int _addResource(::ItemStack const& item);

    MCAPI void _doDrop(::ItemStack& item, bool randomly);

    MCAPI int _getFreeSlot() const;

    MCAPI int _getSlotWithRemainingSpace(::ItemStack const& newItem) const;

    MCAPI bool _isCreative() const;

    MCAPI void _release(int slot);

    MCAPI int getHotbarSize() const;

    MCAPI int getSlotWithItem(::ItemStack const& item, bool checkAux, bool checkData) const;

    MCAPI bool hasResource(int type);

    MCAPI bool removeResource(int type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FillingContainer const&);

    MCAPI void* $ctor(::Player* player, int numTotalSlots, ::ContainerType containerType);
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

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI int $getMaxStackSize() const;

    MCAPI int $getContainerSize() const;

    MCAPI void $startOpen(::Player&);

    MCAPI void $serverInitItemStackIds(
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
