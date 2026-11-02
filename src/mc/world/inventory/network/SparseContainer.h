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
    virtual ~SparseContainer() /*override*/ = default;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

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
#ifdef LL_PLAT_C
    MCNAPI SparseContainer(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isClientSide,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCNAPI void _onItemNetworkChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCNAPI void addAvailableSetCountCallback(
        ::ContainerEnumName                               name,
        ::std::function<int(int, ::ItemStackBase const&)> availableSetCountCallback
    );

    MCNAPI void addItemAllowedInContainerCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCNAPI void addItemAllowedInSlotCallback(
        ::ContainerEnumName                                     name,
        ::std::function<bool(int, ::ItemStackBase const&, int)> itemAllowedCallback
    );

    MCNAPI void addItemAllowedToAddCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );

    MCNAPI void addItemAllowedToRemoveCallback(
        ::ContainerEnumName                           name,
        ::std::function<bool(::ItemStackBase const&)> itemAllowedCallback
    );
#endif

    MCNAPI void addItemNetworkChangedCallback(
        ::ContainerEnumName                                                name,
        ::std::function<void(int, ::ItemStack const&, ::ItemStack const&)> itemNetworkChangedCallback
    );

#ifdef LL_PLAT_C
    MCNAPI void addValidSlotForContainerCallback(
        ::ContainerEnumName        name,
        ::std::function<bool(int)> validSlotForContainerCallback
    );

    MCNAPI ::ItemAddType canAdd(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      openContainerNetId,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCAPI bool canRemove(::ContainerEnumName name, int slot, int amount) const;

    MCNAPI ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item,
        int                             amount
    ) const;

    MCNAPI int getAvailableAddCount(::ContainerScreenContext const& context, ::ContainerEnumName name, int slot) const;

    MCNAPI int getAvailableAddCount(
        ::ContainerScreenContext const& context,
        ::ContainerEnumName             name,
        int                             slot,
        ::ItemStackBase const&          itemToAdd
    ) const;

    MCNAPI int getAvailableSetCount(
        ::ContainerScreenContext const& context,
        ::FullContainerName const&      name,
        int                             slot,
        ::ItemStackBase const&          item
    ) const;
#endif

    MCNAPI void removeItemNetworkChangedCallback(::ContainerEnumName name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
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
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>);

    MCNAPI void $startOpen(::Actor& actor);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI void $removeItem(int slot, int count);
#endif


    // NOLINTEND
};
