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

#ifdef LL_PLAT_S
    virtual ::ItemStack const& getItem(int) const /*override*/;
#else // LL_PLAT_C
    virtual ::ItemStack const& getItem(int slot) const /*override*/;
#endif

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

#ifdef LL_PLAT_S
    virtual void containerContentChanged(int) /*override*/;
#else // LL_PLAT_C
    virtual void containerContentChanged(int slot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void setItem(int, ::ItemStack const&) /*override*/;
#else // LL_PLAT_C
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;
#endif

    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) /*override*/;

#ifdef LL_PLAT_S
    virtual void startOpen(::Actor&) /*override*/;
#else // LL_PLAT_C
    virtual void startOpen(::Actor& actor) /*override*/;
#endif

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void removeItem(int slot, int count) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI SparseContainer(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isClientSide,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCFOLD void _clearCreatedItem(int slot);

    MCAPI int _getAvailableAddCount(
        ::ContainerScreenContext const& name,
        ::ContainerEnumName             itemInSlot,
        ::ItemStack const&
    ) const;

    MCAPI bool _isSlotInRange(int slot) const;

    MCAPI void _onItemNetworkChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI void addAvailableSetCountCallback(
        ::ContainerEnumName                               name,
        ::std::function<int(int, ::ItemStackBase const&)> availableSetCountCallback
    );

    MCAPI void addItemAllowedInContainerCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCAPI void addItemAllowedInSlotCallback(
        ::ContainerEnumName                                     name,
        ::std::function<bool(int, ::ItemStackBase const&, int)> itemAllowedCallback
    );

    MCAPI void addItemAllowedToAddCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCAPI void addItemAllowedToRemoveCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );
#endif

    MCAPI void addItemNetworkChangedCallback(
        ::ContainerEnumName                                                name,
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> itemNetworkChangedCallback
    );

#ifdef LL_PLAT_C
    MCAPI void addValidSlotForContainerCallback(
        ::ContainerEnumName        name,
        ::std::function<bool(int)> validSlotForContainerCallback
    );

    MCAPI ::ItemAddType canAdd(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      openContainerNetId,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCFOLD bool canConsume(::ContainerEnumName name, int slot, int amount) const;

    MCFOLD bool canDestroy(::ContainerEnumName name, int slot, int amount) const;

    MCFOLD bool canDrop(::ContainerEnumName name, int slot, int amount) const;

    MCAPI bool canRemove(::ContainerEnumName name, int slot, int amount) const;

    MCAPI ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCAPI int getAvailableAddCount(::ContainerScreenContext const& name, ::ContainerEnumName slot, int) const;

    MCAPI int getAvailableAddCount(
        ::ContainerScreenContext const& context,
        ::ContainerEnumName             name,
        int                             slot,
        ::ItemStackBase const&          itemToAdd
    ) const;

    MCAPI int getAvailableSetCount(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item
    ) const;

    MCAPI bool isClientSide() const;
#endif

    MCAPI bool isUsingLegacyScreenTransactions() const;

#ifdef LL_PLAT_C
    MCAPI bool isValidSlot(::ContainerEnumName name, int slot) const;
#endif

    MCAPI void removeItemNetworkChangedCallback(::ContainerEnumName name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isClientSide,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );
#endif
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
    MCAPI ::ItemStack const& $getItem(int slot) const;

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
