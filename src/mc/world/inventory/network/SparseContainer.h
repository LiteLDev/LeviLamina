#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemAddType.h"
#include "mc/world/containers/controllers/ItemSetType.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerScreenContext;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
class ItemStack;
class ItemStackBase;
struct FullContainerName;
// clang-format on

class SparseContainer : public ::Container, public ::ContainerContentChangeListener {
public:
    // SparseContainer inner types define
    using ItemNetworkChangedCallback = ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SparseContainerBackingSetType const>            mBackingSetType;
    ::ll::TypedStorage<8, 8, ::Container&>                                     mBackingContainer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::ItemStack>>          mItems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ISparseContainerSetListener>> mNetManagerSetter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPlayerContainerSetter>>      mPlayerSetter;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerEnumName, ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)>>>
        mItemNetworkChangedCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerEnumName, ::std::function<bool(int, ::ItemStackBase const&, int)>>>
        mItemAllowedInSlotCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(::ItemStackBase const&)>>>
        mItemAllowedToAddCallbacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerEnumName, ::std::function<int(int, ::ItemStackBase const&)>>>
        mAvailableSetCountCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(int)>>>
        mValidSlotForContainerCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(::ItemStackBase const&)>>>
        mItemAllowedToRemoveCallbacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContainerEnumName, ::std::function<bool(::ItemStackBase const&)>>>
                                         mItemAllowedInContainerCallbacks;
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::TypedStorage<1, 1, bool const> mIsItemStackNetManagerEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&);
    SparseContainer(SparseContainer const&);
    SparseContainer();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SparseContainer() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~SparseContainer() /*override*/;
#endif

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual void
    serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void removeItem(int slot, int count) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C SparseContainer(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isClientSide,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCNAPI_C int _getAvailableAddCount(
        ::ContainerScreenContext const& context,
        ::ContainerEnumName             name,
        ::ItemStack const&              itemInSlot
    ) const;

    MCNAPI_C bool
    _isItemAllowedInSlot(::ContainerEnumName name, int slot, ::ItemStackBase const& item, int amount) const;

    MCNAPI void _onItemNetworkChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI_C void _setBackingContainerSlot(int slot, ::ItemStack const& newItem);

    MCNAPI_C void addAvailableSetCountCallback(
        ::ContainerEnumName                               name,
        ::std::function<int(int, ::ItemStackBase const&)> availableSetCountCallback
    );

    MCNAPI_C void addItemAllowedInSlotCallback(
        ::ContainerEnumName                                     name,
        ::std::function<bool(int, ::ItemStackBase const&, int)> itemAllowedCallback
    );

    MCNAPI_C void addItemAllowedToAddCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCNAPI_C void addItemAllowedToRemoveCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCNAPI_C void addValidSlotForContainerCallback(
        ::ContainerEnumName        name,
        ::std::function<bool(int)> validSlotForContainerCallback
    );

    MCNAPI_C ::ItemAddType canAdd(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      openContainerNetId,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCNAPI_C bool canDrop(::ContainerEnumName name, int slot, int amount) const;

    MCNAPI_C bool canRemove(::ContainerEnumName name, int slot, int amount) const;

    MCNAPI_C ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCNAPI_C int getAvailableSetCount(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item
    ) const;

    MCNAPI_C bool isValidSlot(::ContainerEnumName name, int slot) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isClientSide,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
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
#ifdef LL_PLAT_C
    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI void $serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCNAPI void $startOpen(::Actor& actor);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI void $removeItem(int slot, int count);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
