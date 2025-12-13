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
    virtual ~ItemStackNetManagerBase();

    virtual bool isEnabled() const;

    virtual ::ItemStackRequestId getRequestId() const = 0;

    virtual bool retainSetItemStackNetIdVariant() const;

    virtual bool allowInventoryTransactionManager() const = 0;

    virtual ::gsl::final_action<::std::function<void()>> _tryBeginClientLegacyTransactionRequest();

    virtual void onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    virtual void onContainerScreenClose();

    virtual ::SparseContainer* initOpenContainer(::BlockSource&, ::FullContainerName const&, ::ContainerWeakRef const&);

    virtual void _addLegacyTransactionRequestSetItemSlot(
        ::ItemStackNetManagerScreen&,
        ::SharedTypes::Legacy::ContainerType containerType,
        int                                  slot
    );

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
