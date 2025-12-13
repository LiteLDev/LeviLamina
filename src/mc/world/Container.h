#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/ContainerIterator.h"
#include "mc/world/ContainerOwner.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/safety/RedactableString.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/ContainerCloseListener.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerOwner.h"
#include "mc/world/ContainerSizeChangeListener.h"
#include "mc/world/TypedRuntimeId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class Random;
class Vec3;
struct ContainerRuntimeIdTag;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
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
        ::ll::
            TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                mPublisher;
        // NOLINTEND

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
    [[nodiscard]] std::string const& getTypeName() const { return containerTypeMap().at(mContainerType); }

    LLNDAPI optional_ref<ItemStack> getItemNonConst(int index);

    [[nodiscard]] ItemStack& operator[](int index) { return this->getItemNonConst(index); }

    [[nodiscard]] ItemStack const& operator[](int index) const { return this->getItem(index); }

    using TransactionContext = std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>;

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
    ::SharedTypes::Legacy::ContainerType                    mContainerType;
    ::SharedTypes::Legacy::ContainerType                    mGameplayContainerType;
    ::std::unordered_set<::ContainerContentChangeListener*> mContentChangeListeners;
    ::std::unordered_set<::ContainerSizeChangeListener*>    mSizeChangeListeners;
    ::std::unordered_set<::ContainerCloseListener*>         mCloseListeners;
    ::Container::PublisherWrapper                           mRemovedPublisher;
    ::std::deque<TransactionContext>                        mTransactionContextStack;
    ::Bedrock::Safety::RedactableString                     mName;
    bool                                                    mCustomName;
    ::ContainerOwner                                        mContainerOwner;
    ::ContainerRuntimeId                                    mContainerRuntimeId;
    // NOLINTEND

public:
    // prevent constructor by default
    Container();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Container();

    virtual void init();

    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) = 0;

    virtual void addContentChangeListener(::ContainerContentChangeListener* listener);

    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener);

    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector();

    virtual bool hasRemovedSubscribers() const;

    virtual ::ItemStack const& getItem(int slot) const = 0;

    virtual bool hasRoomForItem(::ItemStack const& item) const;

    virtual bool addItem(::ItemStack& item);

    virtual bool addItemWithForceBalance(::ItemStack& item);

    virtual bool addItemToFirstEmptySlot(::ItemStack const& item);

    virtual void setItem(int modelSlot, ::ItemStack const& item) = 0;

    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    virtual void removeItem(int slot, int count);

    virtual void removeAllItems();

    virtual void removeAllItemsWithForceBalance();

    virtual void containerRemoved();

    virtual void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    virtual void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    virtual int getContainerSize() const = 0;

    virtual int getMaxStackSize() const = 0;

    virtual void startOpen(::Actor&) = 0;

    virtual void stopOpen(::Actor& actor);

    virtual ::std::vector<::ItemStack> getSlotCopies() const;

    virtual ::std::vector<::ItemStack const*> const getSlots() const;

    virtual int getEmptySlotsCount() const;

    virtual int getItemCount(::ItemStack const& compare) const;

    virtual int firstEmptySlot() const;

    virtual int firstItem() const;

    virtual int findFirstSlotForItem(::ItemStack const& item) const;

    virtual int reverseFindFirstSlotForItem(::ItemStack const& item) const;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const;

    virtual void setContainerChanged(int slot);

    virtual void setContainerMoved();

    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name);

    virtual bool hasCustomName() const;

    virtual void readAdditionalSaveData(::CompoundTag const& tag);

    virtual void addAdditionalSaveData(::CompoundTag& tag);

    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::std::function<void()>                                                          execute
    );

    virtual void initializeContainerContents(::BlockSource& region);

    virtual bool isEmpty() const;

    virtual bool isSlotDisabled(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Container(::Container const&);

    MCAPI explicit Container(::SharedTypes::Legacy::ContainerType type);

    MCAPI Container(::SharedTypes::Legacy::ContainerType type, ::std::string const& name, bool customName);

    MCAPI_C Container(
        ::SharedTypes::Legacy::ContainerType       type,
        ::Bedrock::Safety::RedactableString const& name,
        bool                                       customName
    );

    MCAPI void
    _dropSlotContent(::BlockSource& region, ::Random& random, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI void
    _serverInitId(int slot, ::ItemStack& item, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCAPI int getItemCount(::std::function<bool(::ItemStack const&)> comparator) const;

    MCAPI int getRedstoneSignalFromContainer(::BlockSource& region);

    MCAPI ::Container& operator=(::Container const&);

    MCAPI void removeCloseListener(::ContainerCloseListener* listener);

    MCAPI void triggerTransactionChange(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::Legacy::ContainerType getContainerTypeId(::std::string const& name);

    MCAPI static ::std::function<bool(::ItemStack const&)> sameItemAndAuxComparator(::ItemDescriptor const& descriptor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::SharedTypes::Legacy::ContainerType, ::std::string> const&
    containerTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Container const&);

    MCAPI void* $ctor(::SharedTypes::Legacy::ContainerType type);

    MCAPI void* $ctor(::SharedTypes::Legacy::ContainerType type, ::std::string const& name, bool customName);

    MCAPI_C void*
    $ctor(::SharedTypes::Legacy::ContainerType type, ::Bedrock::Safety::RedactableString const& name, bool customName);
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

    MCAPI bool $hasRoomForItem(::ItemStack const& item) const;

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

    MCAPI void $stopOpen(::Actor& actor);

    MCAPI ::std::vector<::ItemStack> $getSlotCopies() const;

    MCAPI ::std::vector<::ItemStack const*> const $getSlots() const;

    MCFOLD int $getEmptySlotsCount() const;

    MCAPI int $getItemCount(::ItemStack const& compare) const;

    MCAPI int $firstEmptySlot() const;

    MCAPI int $firstItem() const;

    MCAPI int $findFirstSlotForItem(::ItemStack const& item) const;

    MCAPI int $reverseFindFirstSlotForItem(::ItemStack const& item) const;

    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $setContainerChanged(int slot);

    MCAPI void $setContainerMoved();

    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);

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
