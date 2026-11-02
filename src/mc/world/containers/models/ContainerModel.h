#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class SparseContainerClient;
struct SlotData;
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
    ::ll::TypedStorage<4, 4, ::ContainerCategory>         mContainerCategory;
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotData>>  mItemSource;
    ::ll::TypedStorage<8, 8, ::SparseContainerClient*>    mClientUIContainer;
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

    virtual bool isSlotDisabled(int slot) const;

    virtual void refreshContainer(bool fullRefresh);

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _init();

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerModel(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
    );

    MCNAPI void
    _onClientUIItemNetworkChanged(int containerSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI void networkUpdateItem(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI void
    registerOnContainerChangedCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCNAPI void
    registerPlayerNotificationCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCNAPI void setClientUIContainer(::SparseContainerClient* clientUIContainer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postInit();

    MCNAPI void $releaseResources();

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getFilteredContainerSize() const;

    MCNAPI void $tick(int selectedSlot);

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI ::ItemStack const& $getItemStack(int modelSlot) const;

    MCNAPI ::std::vector<::ItemStack> const& $getItems() const;

    MCNAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCNAPI ::ItemStackBase const& $getItemStackBase(int modelSlot) const;

    MCNAPI bool $isItemInstanceBased() const;

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI bool $isValid();

    MCNAPI bool $isItemFiltered(::ItemStackBase const& item) const;

    MCNAPI bool $isExpanableItemFiltered(int index) const;

    MCNAPI ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;

    MCNAPI ::std::string const& $getItemGroupName(int itemId) const;

    MCNAPI void $switchItemExpando(int itemId);

    MCNAPI bool $isSlotDisabled(int slot) const;

    MCNAPI void $refreshContainer(bool fullRefresh);

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_init();

    MCNAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);


    // NOLINTEND
};
