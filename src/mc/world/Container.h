#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ContainerIterator.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/util/TypedRuntimeId.h"
#include "mc/world/ContainerType.h"

class ItemStack;
class ContainerContentChangeListener;
class ContainerSizeChangeListener;

class Container {
public:
    using TransactionContext = std::function<void(Container&, int, ItemStack const&, ItemStack const&)>;

    ContainerType                                       mContainerType;           // this+0x8
    ContainerType                                       mGameplayContainerType;   // this+0x9
    std::unordered_set<ContainerContentChangeListener*> mContentChangeListeners;  // this+0x10
    std::unordered_set<ContainerSizeChangeListener*>    mSizeChangeListeners;     // this+0x50
    std::deque<TransactionContext>                      mTransactionContextStack; // this+0x90
    std::string                                         mName;                    // this+0xB8
    bool                                                mCustomName;              // this+0xD8
    ContainerRuntimeId                                  mContainerRuntimeId;      // this+0xDC

    [[nodiscard]] std::string const& getTypeName() const { return getContainerTypeName(getContainerType()); }

    LLNDAPI optional_ref<ItemStack> getItemNonConst(int index);

    [[nodiscard]] ItemStack& operator[](int index) { return this->getItemNonConst(index); }

    [[nodiscard]] ItemStack const& operator[](int index) const { return this->getItem(index); }

public:
    using Iterator      = ContainerIterator<Container>;
    using ConstIterator = ContainerIterator<Container const>;

    using ReverseIterator      = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    [[nodiscard]] constexpr Iterator      begin() noexcept { return {this, 0}; }
    [[nodiscard]] constexpr ConstIterator cbegin() const noexcept { return {this, 0}; }
    [[nodiscard]] constexpr Iterator      end() noexcept { return {this, getContainerSize()}; }
    [[nodiscard]] constexpr ConstIterator cend() const noexcept { return {this, getContainerSize()}; }

    [[nodiscard]] constexpr ReverseIterator      rbegin() noexcept { return ReverseIterator{end()}; }
    [[nodiscard]] constexpr ConstReverseIterator crbegin() const noexcept { return ConstReverseIterator{cend()}; }
    [[nodiscard]] constexpr ReverseIterator      rend() noexcept { return ReverseIterator{begin()}; }
    [[nodiscard]] constexpr ConstReverseIterator crend() const noexcept { return ConstReverseIterator{cbegin()}; }

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
    virtual void addRemovedListener(class ContainerRemovedListener* listener);

    // vIndex: 6
    virtual void removeRemovedListener(class ContainerRemovedListener* listener);

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
    virtual void dropSlotContent(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop, int slot);

    // vIndex: 19
    virtual void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    // vIndex: 20
    virtual int getContainerSize() const = 0;

    // vIndex: 21
    virtual int getMaxStackSize() const = 0;

    // vIndex: 22
    virtual void startOpen(class Player& player) = 0;

    // vIndex: 23
    virtual void stopOpen(class Player& player);

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
    virtual void createTransactionContext(TransactionContext callback, std::function<void()> execute);

    // vIndex: 38
    virtual void initializeContainerContents(class BlockSource& region);

    // vIndex: 39
    virtual bool isEmpty() const;

    // vIndex: 40
    virtual bool isSlotDisabled(int) const;

    MCAPI Container(class Container const&);

    MCAPI explicit Container(::ContainerType type);

    MCAPI Container(::ContainerType type, std::string const& name, bool customName);

    MCAPI void addCloseListener(class ContainerCloseListener* listener);

    MCAPI ::ContainerType getContainerType() const;

    MCAPI ::ContainerType getGameplayContainerType() const;

    MCAPI int getItemCount(std::function<bool(class ItemStack const&)> comparator);

    MCAPI int getRedstoneSignalFromContainer(class BlockSource& region);

    MCAPI ContainerRuntimeId const& getRuntimeId() const;

    MCAPI bool hasRemovedListeners() const;

    MCAPI void initRuntimeId();

    MCAPI void removeCloseListener(class ContainerCloseListener* listener);

    MCAPI void serverInitItemStackIdsAll(std::function<void(int, class ItemStack const&)> onNetIdChanged);

    MCAPI void setGameplayContainerType(::ContainerType type);

    MCAPI void triggerTransactionChange(int slot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI static ::ContainerType getContainerTypeId(std::string const& name);

    MCAPI static std::string const& getContainerTypeName(::ContainerType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _dropSlotContent(
        class BlockSource& region,
        class Random&      random,
        class Vec3 const&  pos,
        bool               randomizeDrop,
        int                slot
    );

    MCAPI int _getEmptySlotsCount(int start, int end) const;

    MCAPI void _initRuntimeId(ContainerRuntimeId const& containerIdToCopy);

    MCAPI void
    _serverInitId(int slot, class ItemStack& item, std::function<void(int, class ItemStack const&)> onNetIdChanged);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::ContainerType type);

    MCAPI void* ctor$(::ContainerType type, std::string const& name, bool customName);

    MCAPI void* ctor$(class Container const&);

    MCAPI void dtor$();

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag);

    MCAPI void addContentChangeListener$(class ContainerContentChangeListener* listener);

    MCAPI bool addItem$(class ItemStack& item);

    MCAPI bool addItemToFirstEmptySlot$(class ItemStack const& item);

    MCAPI bool addItemWithForceBalance$(class ItemStack& item);

    MCAPI void addRemovedListener$(class ContainerRemovedListener* listener);

    MCAPI bool canPullOutItem$(int, int, class ItemStack const&) const;

    MCAPI bool canPushInItem$(int, int, class ItemStack const&) const;

    MCAPI void containerRemoved$();

    MCAPI void createTransactionContext$(
        std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)> callback,
        std::function<void()>                                                                      execute
    );

    MCAPI void dropContents$(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    MCAPI void dropSlotContent$(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI int findFirstSlotForItem$(class ItemStack const& item) const;

    MCAPI int getEmptySlotsCount$() const;

    MCAPI int getItemCount$(class ItemStack const& compare) const;

    MCAPI std::vector<class ItemStack> getSlotCopies$() const;

    MCAPI std::vector<class ItemStack const*> const getSlots$() const;

    MCAPI bool hasCustomName$() const;

    MCAPI bool hasRoomForItem$(class ItemStack const& item);

    MCAPI void init$();

    MCAPI void initializeContainerContents$(class BlockSource& region);

    MCAPI bool isEmpty$() const;

    MCAPI bool isSlotDisabled$(int) const;

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag);

    MCAPI void removeAllItems$();

    MCAPI void removeAllItemsWithForceBalance$();

    MCAPI void removeContentChangeListener$(class ContainerContentChangeListener* listener);

    MCAPI void removeItem$(int slot, int count);

    MCAPI void removeRemovedListener$(class ContainerRemovedListener* listener);

    MCAPI void setContainerChanged$(int slot);

    MCAPI void setContainerMoved$();

    MCAPI void setCustomName$(std::string const& name);

    MCAPI void setItemWithForceBalance$(int slot, class ItemStack const& item, bool forceBalanced);

    MCAPI void stopOpen$(class Player& player);

    MCAPI static class BidirectionalUnorderedMap<::ContainerType, std::string> const& containerTypeMap();

    // NOLINTEND
};
