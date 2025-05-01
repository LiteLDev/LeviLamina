#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ContainerScreenContext;
class ContainerWeakRef;
class ItemStack;
class ItemStackNetManagerScreen;
class ItemStackRequestAction;
class Player;
class SparseContainer;
struct FullContainerName;
struct ItemStackRequestIdTag;
// clang-format on

class ItemStackNetManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk1a7334;
    ::ll::UntypedStorage<1, 1>  mUnk784de5;
    ::ll::UntypedStorage<8, 8>  mUnkecd0f2;
    ::ll::UntypedStorage<8, 16> mUnk6169ac;
    ::ll::UntypedStorage<8, 16> mUnk29720d;
    ::ll::UntypedStorage<8, 8>  mUnkc005c3;
    ::ll::UntypedStorage<1, 1>  mUnk568e3c;
    ::ll::UntypedStorage<4, 16> mUnka42c09;
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
    MCNAPI ItemStackNetManagerBase(::Player& player, bool isEnabled, bool isClientSide);

    MCNAPI bool _isRequestActionAllowed(::ItemStackRequestAction const& requestAction);

    MCNAPI void _pushScreen(::ContainerScreenContext screenContext);

    MCNAPI ::ContainerScreenContext const& getScreenContext() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest(::Player* player
    );

    MCNAPI static bool setPlayerContainer(
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
    MCNAPI void* $ctor(::Player& player, bool isEnabled, bool isClientSide);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isEnabled() const;

    MCNAPI bool $retainSetItemStackNetIdVariant() const;

    MCNAPI ::gsl::final_action<::std::function<void()>> $_tryBeginClientLegacyTransactionRequest();

    MCNAPI void $onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCNAPI void $onContainerScreenClose();

    MCNAPI ::SparseContainer* $initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    MCNAPI void $_addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );

    MCNAPI void $_initScreen(::ItemStackNetManagerScreen&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
