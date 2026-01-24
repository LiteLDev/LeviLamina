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

    virtual ::ItemStack const& getItem(int index) const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void removeItem(int slot, int count) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C SparseContainer(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isClientSide,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCAPI_C int _getAvailableAddCount(
        ::ContainerScreenContext const& context,
        ::ContainerEnumName             name,
        ::ItemStack const&              itemInSlot
    ) const;

    MCAPI_C bool
    _isItemAllowedInSlot(::ContainerEnumName name, int slot, ::ItemStackBase const& item, int amount) const;

    MCAPI void _onItemNetworkChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI_C void _setBackingContainerSlot(int slot, ::ItemStack const& newItem);

    MCAPI_C void addAvailableSetCountCallback(
        ::ContainerEnumName                               name,
        ::std::function<int(int, ::ItemStackBase const&)> availableSetCountCallback
    );

    MCAPI_C void addItemAllowedInSlotCallback(
        ::ContainerEnumName                                     name,
        ::std::function<bool(int, ::ItemStackBase const&, int)> itemAllowedCallback
    );

    MCAPI_C void addItemAllowedToAddCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCAPI_C void addItemAllowedToRemoveCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCAPI_C void addValidSlotForContainerCallback(
        ::ContainerEnumName        name,
        ::std::function<bool(int)> validSlotForContainerCallback
    );

    MCAPI_C ::ItemAddType canAdd(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      openContainerNetId,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCAPI_C bool canRemove(::ContainerEnumName name, int slot, int amount) const;

    MCAPI_C ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCAPI_C int getAvailableSetCount(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item
    ) const;

    MCAPI_C bool isValidSlot(::ContainerEnumName name, int slot) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::ItemStack const& $getItem(int index) const;

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCFOLD void $containerContentChanged(int slot);

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCFOLD void $serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>);

    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $stopOpen(::Actor& actor);

    MCFOLD void $removeItem(int slot, int count);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
