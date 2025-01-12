#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ContainerIterator.h"
#include "mc/world/ContainerOwner.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/ContainerType.h"
#include "mc/world/TypedRuntimeId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class ContainerCloseListener;
class ContainerContentChangeListener;
class ContainerSizeChangeListener;
class DynamicContainerTracker;
class ItemStack;
class Player;
class Random;
class Vec3;
struct ContainerOwner;
struct ContainerRuntimeIdTag;
// clang-format on

class Container {
public:
    // Container inner types declare
    // clang-format off
    struct PublisherWrapper;
    // clang-format on

    // Container inner types define
    struct PublisherWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 128> mUnk6f83ba;
        // NOLINTEND

    public:
        // prevent constructor by default
        PublisherWrapper& operator=(PublisherWrapper const&);
        PublisherWrapper(PublisherWrapper const&);
        PublisherWrapper();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PublisherWrapper();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using ItemStackNetIdChangedCallback = ::std::function<void(int, ::ItemStack const&)>;

public:
    [[nodiscard]] std::string const& getTypeName() const { return getContainerTypeName(getContainerType()); }

    LLNDAPI optional_ref<ItemStack> getItemNonConst(int index);

    [[nodiscard]] ItemStack& operator[](int index) { return this->getItemNonConst(index); }

    [[nodiscard]] ItemStack const& operator[](int index) const { return this->getItem(index); }

    using TransactionContext = std::function<void(Container&, int, ItemStack const&, ItemStack const&)>;

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
    // member variables
    // NOLINTBEGIN
    ::ContainerType                                         mContainerType;
    ::ContainerType                                         mGameplayContainerType;
    ::std::unordered_set<::ContainerContentChangeListener*> mContentChangeListeners;
    ::std::unordered_set<::ContainerSizeChangeListener*>    mSizeChangeListeners;
    ::std::unordered_set<::ContainerCloseListener*>         mCloseListeners;
    ::Container::PublisherWrapper                           mRemovedPublisher;
    ::std::deque<TransactionContext>                        mTransactionContextStack;
    ::std::string                                           mName;
    bool                                                    mCustomName;
    ::ContainerOwner                                        mContainerOwner;
    ::ContainerRuntimeId                                    mContainerRuntimeId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Container();

    // vIndex: 1
    virtual void init();

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) = 0;

    // vIndex: 3
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener);

    // vIndex: 4
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener);

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector();

    // vIndex: 6
    virtual bool hasRemovedSubscribers() const;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const = 0;

    // vIndex: 8
    virtual bool hasRoomForItem(::ItemStack const& item);

    // vIndex: 9
    virtual bool addItem(::ItemStack& item);

    // vIndex: 10
    virtual bool addItemWithForceBalance(::ItemStack& item);

    // vIndex: 11
    virtual bool addItemToFirstEmptySlot(::ItemStack const& item);

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) = 0;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    // vIndex: 14
    virtual void removeItem(int slot, int count);

    // vIndex: 15
    virtual void removeAllItems();

    // vIndex: 16
    virtual void removeAllItemsWithForceBalance();

    // vIndex: 17
    virtual void containerRemoved();

    // vIndex: 18
    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    // vIndex: 19
    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    // vIndex: 20
    virtual int getContainerSize() const = 0;

    // vIndex: 21
    virtual int getMaxStackSize() const = 0;

    // vIndex: 22
    virtual void startOpen(::Player&) = 0;

    // vIndex: 23
    virtual void stopOpen(::Player& player);

    // vIndex: 24
    virtual ::std::vector<::ItemStack> getSlotCopies() const;

    // vIndex: 25
    virtual ::std::vector<::ItemStack const*> const getSlots() const;

    // vIndex: 26
    virtual int getEmptySlotsCount() const;

    // vIndex: 27
    virtual int getItemCount(::ItemStack const& compare) const;

    // vIndex: 28
    virtual int findFirstSlotForItem(::ItemStack const& item) const;

    // vIndex: 29
    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    // vIndex: 30
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    // vIndex: 31
    virtual void setContainerChanged(int slot);

    // vIndex: 32
    virtual void setContainerMoved();

    // vIndex: 33
    virtual void setCustomName(::std::string const& name);

    // vIndex: 34
    virtual bool hasCustomName() const;

    // vIndex: 35
    virtual void readAdditionalSaveData(::CompoundTag const& tag);

    // vIndex: 36
    virtual void addAdditionalSaveData(::CompoundTag& tag);

    // vIndex: 37
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );

    // vIndex: 38
    virtual void initializeContainerContents(::BlockSource& region);

    // vIndex: 39
    virtual bool isEmpty() const;

    // vIndex: 40
    virtual bool isSlotDisabled(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Container(::Container const&);

    MCAPI explicit Container(::ContainerType type);

    MCAPI Container(::ContainerType type, ::std::string const& name, bool customName);

    MCAPI void
    _dropSlotContent(::BlockSource& region, ::Random& random, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI int _getEmptySlotsCount(int start, int end) const;

    MCAPI void
    _serverInitId(int slot, ::ItemStack& item, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCAPI void addCloseListener(::ContainerCloseListener* listener);

    MCFOLD ::ContainerType getContainerType() const;

    MCFOLD ::ContainerType getGameplayContainerType() const;

    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator);

    MCAPI int getRedstoneSignalFromContainer(::BlockSource& region);

    MCFOLD ::ContainerRuntimeId const& getRuntimeId() const;

    MCAPI void initRuntimeId();

    MCAPI ::Container& operator=(::Container const&);

    MCAPI void receiveContainerLifetimes(::DynamicContainerTracker const& tracker);

    MCAPI void removeCloseListener(::ContainerCloseListener* listener);

    MCAPI void serverInitItemStackIdsAll(::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCFOLD void setGameplayContainerType(::ContainerType type);

    MCAPI void triggerTransactionChange(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ContainerType getContainerTypeId(::std::string const& name);

    MCAPI static ::std::string const& getContainerTypeName(::ContainerType type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ContainerType, ::std::string> const& containerTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Container const&);

    MCAPI void* $ctor(::ContainerType type);

    MCAPI void* $ctor(::ContainerType type, ::std::string const& name, bool customName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $init();

    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCFOLD ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCAPI bool $hasRemovedSubscribers() const;

    MCAPI bool $hasRoomForItem(::ItemStack const& item);

    MCAPI bool $addItem(::ItemStack& item);

    MCAPI bool $addItemWithForceBalance(::ItemStack& item);

    MCAPI bool $addItemToFirstEmptySlot(::ItemStack const& item);

    MCFOLD void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI void $removeItem(int slot, int count);

    MCAPI void $removeAllItems();

    MCAPI void $removeAllItemsWithForceBalance();

    MCAPI void $containerRemoved();

    MCAPI void $dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI void $dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCAPI void $stopOpen(::Player& player);

    MCAPI ::std::vector<::ItemStack> $getSlotCopies() const;

    MCAPI ::std::vector<::ItemStack const*> const $getSlots() const;

    MCAPI int $getEmptySlotsCount() const;

    MCAPI int $getItemCount(::ItemStack const& compare) const;

    MCAPI int $findFirstSlotForItem(::ItemStack const& item) const;

    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $setContainerChanged(int slot);

    MCAPI void $setContainerMoved();

    MCAPI void $setCustomName(::std::string const& name);

    MCAPI bool $hasCustomName() const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag);

    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );

    MCFOLD void $initializeContainerContents(::BlockSource& region);

    MCAPI bool $isEmpty() const;

    MCFOLD bool $isSlotDisabled(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
