#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct SlotData;
struct SparseContainerClient;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class ContainerModel : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                 mIsClientSide;
    ::ll::TypedStorage<8, 32, ::std::string>             mContainerStringName;
    ::ll::TypedStorage<4, 12, ::FullContainerName const> mFullContainerName;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::SharedTypes::Legacy::ContainerType,
            ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>>
        mTrackedOnContainerChangedCallbacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>>
        mOnContainerChangedCallbacks;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>
        mPlayerNotificationCallbacks;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Bedrock::PubSub::
                          Publisher<void(::ItemStackBase const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                         mContainerSlotChangePublishers;
    ::ll::TypedStorage<4, 4, ::ContainerCategory>        mContainerCategory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotData>> mItemSource;
    ::ll::TypedStorage<8, 8, ::SparseContainerClient*>   mClientUIContainer;
    ::ll::
        TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(int), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                          mContainerSizeChangePublisher;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ContainerModel() /*override*/;

    // vIndex: 2
    virtual void postInit();

    // vIndex: 3
    virtual void releaseResources();

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 4
    virtual int getContainerSize() const;

    // vIndex: 5
    virtual int getFilteredContainerSize() const;

    // vIndex: 6
    virtual void tick(int selectedSlot);

    // vIndex: 7
    virtual ::ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 8
    virtual ::ItemStack const& getItemStack(int modelSlot) const;

    // vIndex: 9
    virtual ::std::vector<::ItemStack> const& getItems() const;

    // vIndex: 10
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const;

    // vIndex: 11
    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const;

    // vIndex: 12
    virtual bool isItemInstanceBased() const;

    // vIndex: 13
    virtual void setItem(int modelSlot, ::ItemStack const& item);

    // vIndex: 14
    virtual bool isValid();

    // vIndex: 15
    virtual bool isItemFiltered(::ItemStackBase const& item) const;

    // vIndex: 16
    virtual bool isExpanableItemFiltered(int index) const;

    // vIndex: 17
    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const;

    // vIndex: 18
    virtual ::std::string const& getItemGroupName(int itemId) const;

    // vIndex: 19
    virtual void switchItemExpando(int itemId);

    // vIndex: 20
    virtual bool isSlotDisabled(int) const;

    // vIndex: 21
    virtual void refreshContainer(bool);

    // vIndex: 22
    virtual ::Container* _getContainer() const;

    // vIndex: 23
    virtual int _getContainerOffset() const;

    // vIndex: 24
    virtual void _init();

    // vIndex: 25
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerModel(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
    );

    MCAPI void _onClientUIItemNetworkChanged(int containerSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI ::SlotData const& getItemSource(int slot) const;

    MCAPI void networkUpdateItem(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI ::Bedrock::PubSub::Subscription
    registerContainerSlotChangedListener(int slot, ::std::function<void(::ItemStackBase const&)> callback);

    MCAPI void
    registerOnContainerChangedCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCAPI void
    registerPlayerNotificationCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCAPI void setClientUIContainer(::SparseContainerClient* clientUIContainer);

    MCAPI void setItemSource(int slot, ::SlotData const& srcSlot);

    MCAPI void unregisterTrackedOnContainerChangedCallback(::SharedTypes::Legacy::ContainerType containerType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $postInit();

    MCAPI void $releaseResources();

    MCAPI void $containerContentChanged(int slot);

    MCAPI int $getContainerSize() const;

    MCFOLD int $getFilteredContainerSize() const;

    MCFOLD void $tick(int selectedSlot);

    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCAPI ::ItemStack const& $getItemStack(int modelSlot) const;

    MCFOLD ::std::vector<::ItemStack> const& $getItems() const;

    MCFOLD ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCFOLD ::ItemStackBase const& $getItemStackBase(int modelSlot) const;

    MCFOLD bool $isItemInstanceBased() const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD bool $isValid();

    MCFOLD bool $isItemFiltered(::ItemStackBase const& item) const;

    MCFOLD bool $isExpanableItemFiltered(int index) const;

    MCFOLD ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;

    MCFOLD ::std::string const& $getItemGroupName(int itemId) const;

    MCFOLD void $switchItemExpando(int itemId);

    MCFOLD bool $isSlotDisabled(int) const;

    MCFOLD void $refreshContainer(bool);

    MCFOLD ::Container* $_getContainer() const;

    MCFOLD int $_getContainerOffset() const;

    MCAPI void $_init();

    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
