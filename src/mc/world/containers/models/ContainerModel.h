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
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class SparseContainerClient;
struct SlotData;
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
    virtual ~ContainerModel() /*override*/;

    virtual void postInit();

    virtual void releaseResources();

    virtual void containerContentChanged(int slot) /*override*/;

    virtual int getContainerSize() const;

    virtual int getFilteredContainerSize() const;

    virtual void tick(int selectedSlot);

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual ::ItemStack const& getItemStack(int modelSlot) const;

    virtual ::std::vector<::ItemStack> const& getItems() const;

    virtual ::ItemInstance const& getItemInstance(int modelSlot) const;

    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const;

    virtual bool isItemInstanceBased() const;

    virtual void setItem(int modelSlot, ::ItemStack const& item);

    virtual bool isValid();

    virtual bool isItemFiltered(::ItemStackBase const& item) const;

    virtual bool isExpanableItemFiltered(int index) const;

    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const;

    virtual ::std::string const& getItemGroupName(int itemId) const;

    virtual void switchItemExpando(int itemId);

    virtual bool isSlotDisabled(int) const;

    virtual void refreshContainer(bool);

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _init();

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

    MCAPI_C ::SlotData const& getItemSource(int slot) const;

    MCAPI_C int getValidIngredientItemCount(::ItemDescriptor const& descriptor) const;

    MCAPI void networkUpdateItem(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI_C ::Bedrock::PubSub::Subscription registerContainerSizeChangedListener(::std::function<void(int)> callback);

    MCAPI_C ::Bedrock::PubSub::Subscription
    registerContainerSlotChangedListener(int slot, ::std::function<void(::ItemStackBase const&)> callback);

    MCAPI void
    registerOnContainerChangedCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCAPI void
    registerPlayerNotificationCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCAPI void setClientUIContainer(::SparseContainerClient* clientUIContainer);

    MCAPI void setItemSource(int slot, ::SlotData const& srcSlot);

    MCAPI_C void unregisterTrackedOnContainerChangedCallback(::SharedTypes::Legacy::ContainerType containerType);
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

    MCAPI ::std::vector<::ItemStack> const& $getItems() const;

    MCAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCAPI ::ItemStackBase const& $getItemStackBase(int modelSlot) const;

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
