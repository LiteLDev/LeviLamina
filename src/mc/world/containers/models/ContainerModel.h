#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
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
struct FullContainerName;
struct SlotData;
// clang-format on

class ContainerModel : public ::ContainerContentChangeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk853b36;
    ::ll::UntypedStorage<8, 32> mUnkdae880;
    ::ll::UntypedStorage<4, 12> mUnk510e36;
    ::ll::UntypedStorage<8, 64> mUnke0d973;
    ::ll::UntypedStorage<8, 24> mUnk77eb28;
    ::ll::UntypedStorage<8, 64> mUnk4e59ea;
    ::ll::UntypedStorage<8, 24> mUnk6fb30b;
    ::ll::UntypedStorage<4, 4>  mUnk61eff7;
    ::ll::UntypedStorage<8, 24> mUnkb820cb;
    ::ll::UntypedStorage<8, 8>  mUnk4832d9;
    ::ll::UntypedStorage<8, 48> mUnk4435e0;
    ::ll::UntypedStorage<8, 24> mUnkf85de3;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerModel& operator=(ContainerModel const&);
    ContainerModel(ContainerModel const&);
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
    virtual ::Container* _getContainer() const;

    // vIndex: 22
    virtual int _getContainerOffset() const;

    // vIndex: 23
    virtual void _init();

    // vIndex: 24
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

    MCNAPI void setItemSource(int slot, ::SlotData const& srcSlot);
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

    MCNAPI bool $isSlotDisabled(int) const;

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_init();

    MCNAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
