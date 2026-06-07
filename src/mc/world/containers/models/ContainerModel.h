#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class DynamicContainerTracker;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class SparseContainerClient;
struct ItemStackRequestIdTag;
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

    virtual void tick(int);

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual ::ItemStack const& getItemStack(int modelSlot) const;

    virtual ::std::vector<::ItemStack> const& getItems() const;

    virtual ::ItemInstance const& getItemInstance(int modelSlot) const;

    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const;

    virtual bool isItemInstanceBased() const;

    virtual void setItem(int modelSlot, ::ItemStack const& item);

    virtual bool isValid();

    virtual bool isItemFiltered(::ItemStackBase const&) const;

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
    MCAPI ContainerModel(
        ::FullContainerName const& fullContainerName,
        int                        containerSize,
        ::ContainerCategory        containerCategory,
        bool                       isClientSide
    );

#ifdef LL_PLAT_C
    MCAPI void _clearCreatedItem(int modelSlot);
#endif

    MCAPI void _onClientUIItemNetworkChanged(int containerSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

#ifdef LL_PLAT_C
    MCAPI void _setCreatedItem(::ItemStackRequestId const& currentRequestId, int modelSlot, ::ItemStack const& newItem);

    MCAPI bool _useLegacyTransactions() const;

    MCFOLD ::SparseContainerClient const* getClientUIContainer() const;

    MCFOLD ::ContainerCategory getContainerCategory() const;

    MCFOLD ::ContainerEnumName getContainerEnumName() const;

    MCAPI int getContainerSlot(int modelSlot) const;
#endif

    MCFOLD ::std::string const& getContainerStringName() const;

    MCFOLD ::FullContainerName getFullContainerName() const;

#ifdef LL_PLAT_C
    MCAPI int getItemCount(::ItemDescriptor const& descriptor) const;

    MCAPI ::SlotData const& getItemSource(int slot) const;
#endif

    MCAPI int getModelSlot(int containerSlot) const;

#ifdef LL_PLAT_C
    MCAPI int getValidIngredientItemCount(::ItemDescriptor const& descriptor) const;
#endif

    MCAPI void initContainerRuntimeId();

#ifdef LL_PLAT_C
    MCAPI bool isIntermediaryCategory() const;
#endif

    MCAPI void networkUpdateItem(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI void receiveContainerLifetimes(::DynamicContainerTracker const& tracker);

    MCAPI void
    registerOnContainerChangedCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

    MCAPI void
    registerPlayerNotificationCallback(::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback);

#ifdef LL_PLAT_C
    MCAPI void registerTrackedOnContainerChangedCallback(
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::SharedTypes::Legacy::ContainerType                               containerType
    );
#endif

    MCAPI void serverInitItemStackIds();

    MCAPI void setClientUIContainer(::SparseContainerClient* clientUIContainer);

#ifdef LL_PLAT_C
    MCAPI void setItemSource(int slot, ::SlotData const& srcSlot);

    MCAPI void unregisterTrackedOnContainerChangedCallback(::SharedTypes::Legacy::ContainerType containerType);
#endif
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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $postInit();

    MCAPI void $releaseResources();

    MCAPI void $containerContentChanged(int slot);

    MCAPI int $getContainerSize() const;

    MCAPI int $getFilteredContainerSize() const;

    MCFOLD void $tick(int);

    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCAPI ::ItemStack const& $getItemStack(int modelSlot) const;

    MCFOLD ::std::vector<::ItemStack> const& $getItems() const;

    MCAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCAPI ::ItemStackBase const& $getItemStackBase(int modelSlot) const;

    MCFOLD bool $isItemInstanceBased() const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD bool $isValid();

    MCFOLD bool $isItemFiltered(::ItemStackBase const&) const;

    MCFOLD bool $isExpanableItemFiltered(int index) const;

    MCFOLD ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;

    MCFOLD ::std::string const& $getItemGroupName(int itemId) const;

    MCFOLD void $switchItemExpando(int itemId);

    MCFOLD bool $isSlotDisabled(int slot) const;

    MCFOLD void $refreshContainer(bool fullRefresh);

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
