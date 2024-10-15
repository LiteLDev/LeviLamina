#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerType.h"

class FillingContainer : public ::Container {
public:
    // prevent constructor by default
    FillingContainer(FillingContainer const&);
    FillingContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FillingContainer();

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

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    // vIndex: 14
    virtual void removeItem(int slot, int count);

    // vIndex: 20
    virtual int getContainerSize() const;

    // vIndex: 21
    virtual int getMaxStackSize() const;

    // vIndex: 22
    virtual void startOpen(class Player&);

    // vIndex: 41
    virtual bool add(class ItemStack& item);

    // vIndex: 42
    virtual bool canAdd(class ItemStack const& item) const;

    // vIndex: 43
    virtual void clearSlot(int slot);

    // vIndex: 44
    virtual int clearInventory(int resizeTo);

    // vIndex: 45
    virtual void load(class ListTag const& inventoryList, class SemVersion const&, class Level& level);

    MCAPI FillingContainer(class Player* player, int numTotalSlots, ::ContainerType containerType);

    MCAPI int getHotbarSize() const;

    MCAPI int getSlotWithItem(class ItemStack const& item, bool checkAux, bool checkData) const;

    MCAPI bool hasResource(int type);

    MCAPI class FillingContainer& operator=(class FillingContainer const&);

    MCAPI bool removeResource(int type);

    MCAPI int removeResource(class ItemStack const& item, bool requireExactAux, bool requireExactData, int maxCount);

    MCAPI std::unique_ptr<class ListTag> save() const;

    MCAPI void swapSlots(int from, int to);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI int _addResource(class ItemStack const& item);

    MCAPI void _doDrop(class ItemStack& item, bool randomly);

    MCAPI int _getFreeSlot() const;

    MCAPI int _getSlot(int blockId) const;

    MCAPI int _getSlotWithRemainingSpace(class ItemStack const& newItem) const;

    MCAPI bool _isCreative() const;

    MCAPI void _release(int slot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Player* player, int numTotalSlots, ::ContainerType containerType);

    MCAPI void dtor$();

    MCAPI bool add$(class ItemStack& item);

    MCAPI bool canAdd$(class ItemStack const& item) const;

    MCAPI int clearInventory$(int resizeTo);

    MCAPI void clearSlot$(int slot);

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void load$(class ListTag const& inventoryList, class SemVersion const&, class Level& level);

    MCAPI void removeItem$(int slot, int count);

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void setItemWithForceBalance$(int slot, class ItemStack const& item, bool forceBalanced);

    MCAPI void startOpen$(class Player&);

    // NOLINTEND
};
