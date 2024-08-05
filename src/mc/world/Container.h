#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ContainerType.h"

class Container {
public:
    // prevent constructor by default
    Container& operator=(Container const&);
    Container();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Container();

    // vIndex: 1
    virtual void init();

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    ) = 0;

    // vIndex: 3
    virtual void addContentChangeListener(class ContainerContentChangeListener* listener);

    // vIndex: 4
    virtual void removeContentChangeListener(class ContainerContentChangeListener* listener);

    // vIndex: 5
    virtual void addRemovedListener(class ContainerRemovedListener*);

    // vIndex: 6
    virtual void removeRemovedListener(class ContainerRemovedListener*);

    // vIndex: 7
    virtual class ItemStack const& getItem(int slot) const = 0;

    // vIndex: 8
    virtual bool hasRoomForItem(class ItemStack const& item);

    // vIndex: 9
    virtual bool addItem(class ItemStack& item);

    // vIndex: 10
    virtual bool addItemWithForceBalance(class ItemStack& item);

    // vIndex: 11
    virtual bool addItemToFirstEmptySlot(class ItemStack const& item);

    // vIndex: 12
    virtual void setItem(int slot, class ItemStack const& item) = 0;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    // vIndex: 14
    virtual void removeItem(int slot, int count);

    // vIndex: 15
    virtual void removeAllItems();

    // vIndex: 16
    virtual void removeAllItemsWithForceBalance();

    // vIndex: 17
    virtual void containerRemoved();

    // vIndex: 18
    virtual void dropSlotContent(class BlockSource&, class Vec3 const&, bool, int);

    // vIndex: 19
    virtual void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    // vIndex: 20
    virtual int getContainerSize() const = 0;

    // vIndex: 21
    virtual int getMaxStackSize() const = 0;

    // vIndex: 22
    virtual void startOpen(class Player& player) = 0;

    // vIndex: 23
    virtual void stopOpen(class Player&);

    // vIndex: 24
    virtual std::vector<class ItemStack> getSlotCopies() const;

    // vIndex: 25
    virtual std::vector<class ItemStack const*> const getSlots() const;

    // vIndex: 26
    virtual int getEmptySlotsCount() const;

    // vIndex: 27
    virtual int getItemCount(class ItemStack const& compare) const;

    // vIndex: 28
    virtual int findFirstSlotForItem(class ItemStack const& item) const;

    // vIndex: 29
    virtual bool canPushInItem(int, int, class ItemStack const&) const;

    // vIndex: 30
    virtual bool canPullOutItem(int, int, class ItemStack const&) const;

    // vIndex: 31
    virtual void setContainerChanged(int slot);

    // vIndex: 32
    virtual void setContainerMoved();

    // vIndex: 33
    virtual void setCustomName(std::string const& name);

    // vIndex: 34
    virtual bool hasCustomName() const;

    // vIndex: 35
    virtual void readAdditionalSaveData(class CompoundTag const& tag);

    // vIndex: 36
    virtual void addAdditionalSaveData(class CompoundTag& tag);

    // vIndex: 37
    virtual void createTransactionContext(
        std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)> callback,
        std::function<void()>                                                                      execute
    );

    // vIndex: 38
    virtual void initializeContainerContents(class BlockSource& region);

    // vIndex: 39
    virtual bool isEmpty() const;

    // vIndex: 40
    virtual bool isSlotDisabled(int) const;

    MCAPI Container(class Container const&);

    MCAPI explicit Container(::ContainerType type);

    MCAPI Container(::ContainerType type, std::string const& name, bool customName);

    MCAPI void addCloseListener(class ContainerCloseListener*);

    MCAPI ::ContainerType getContainerType() const;

    MCAPI ::ContainerType getGameplayContainerType() const;

    MCAPI int getItemCount(std::function<bool(class ItemStack const&)> comparator);

    MCAPI int getRedstoneSignalFromContainer(class BlockSource& region);

    MCAPI ContainerRuntimeId const& getRuntimeId() const;

    MCAPI bool hasRemovedListeners() const;

    MCAPI void initRuntimeId();

    MCAPI void removeCloseListener(class ContainerCloseListener*);

    MCAPI void serverInitItemStackIdsAll(std::function<void(int, class ItemStack const&)> onNetIdChanged);

    MCAPI void setGameplayContainerType(::ContainerType type);

    MCAPI void triggerTransactionChange(int slot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI static ::ContainerType getContainerTypeId(std::string const& name);

    MCAPI static std::string const& getContainerTypeName(::ContainerType);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _dropSlotContent(class BlockSource&, class Random&, class Vec3 const&, bool, int);

    MCAPI int _getEmptySlotsCount(int start, int end) const;

    MCAPI void _initRuntimeId(ContainerRuntimeId const& containerIdToCopy);

    MCAPI void
    _serverInitId(int slot, class ItemStack& item, std::function<void(int, class ItemStack const&)> onNetIdChanged);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ContainerType, std::string> const containerTypeMap;

    // NOLINTEND
};
