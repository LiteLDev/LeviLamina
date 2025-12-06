#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ContainerScreenContext;
class ContainerWeakRef;
class EntityRegistry;
class ItemStack;
class ItemStackRequestAction;
class Player;
struct FullContainerName;
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetManagerScreen;
struct ItemStackNetManagerScreenStack;
struct ItemStackRequestIdTag;
struct SparseContainer;
// clang-format on

class ItemStackNetManagerBase {
public:
    // ItemStackNetManagerBase inner types define
    using LegacyRequestScope = ::gsl::final_action<::std::function<void()>>;

    using BaseContainerSetter = ::std::function<void(::ItemStack const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                          mIsEnabled;
    ::ll::TypedStorage<1, 1, bool const>                                          mIsClientSide;
    ::ll::TypedStorage<8, 8, ::Player&>                                           mPlayer;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>>                        mLevelWeakRegistry;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EntityRegistry>>                       mEntityRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackNetManagerScreenStack>> mScreenStack;
    ::ll::TypedStorage<1, 1, bool>                                                mCurrentRequestHasCraftAction;
    ::ll::TypedStorage<4, 16, ::ItemStackLegacyRequestId>                         mLegacyTransactionRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerBase& operator=(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackNetManagerBase();

    // vIndex: 1
    virtual bool isEnabled() const;

    // vIndex: 2
    virtual ::ItemStackRequestId getRequestId() const = 0;

    // vIndex: 3
    virtual bool retainSetItemStackNetIdVariant() const;

    // vIndex: 4
    virtual bool allowInventoryTransactionManager() const = 0;

    // vIndex: 5
    virtual ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest();

    // vIndex: 6
    virtual void onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    // vIndex: 7
    virtual void onContainerScreenClose();

    // vIndex: 8
    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    // vIndex: 9
    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );

    // vIndex: 10
    virtual void _initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackNetManagerBase(::Player& player, bool isClientSide, bool isEnabled);

    MCAPI bool _isRequestActionAllowed(::ItemStackRequestAction const& requestAction);

    MCAPI void _pushScreen(::ContainerScreenContext screenContext);

    MCAPI ::ContainerScreenContext const& getScreenContext() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest(::Player* player);

    MCAPI static bool setPlayerContainer(
        ::Player&                                        player,
        ::SharedTypes::Legacy::ContainerType             containerType,
        int                                              slot,
        ::ItemStack const&                               item,
        ::ItemStack&                                     slotItem,
        ::std::function<void(::ItemStack const&)> const& callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, bool isClientSide, bool isEnabled);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isEnabled() const;

    MCFOLD bool $retainSetItemStackNetIdVariant() const;

    MCAPI ::gsl::final_action<::std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCFOLD void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCAPI void $onContainerScreenClose();

    MCFOLD ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    MCFOLD void $_addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );

    MCFOLD void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
