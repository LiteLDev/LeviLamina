#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

class ItemStackNetManagerBase {
public:
    // prevent constructor by default
    ItemStackNetManagerBase& operator=(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase(ItemStackNetManagerBase const&);
    ItemStackNetManagerBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackNetManagerBase();

    // vIndex: 1
    virtual bool isEnabled() const;

    // vIndex: 2
    virtual ItemStackRequestId getRequestId() const = 0;

    // vIndex: 3
    virtual bool retainSetItemStackNetIdVariant() const;

    // vIndex: 4
    virtual bool allowInventoryTransactionManager() const = 0;

    // vIndex: 5
    virtual gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest();

    // vIndex: 6
    virtual void onContainerScreenOpen(class ContainerScreenContext const& screenContext);

    // vIndex: 7
    virtual void onContainerScreenClose();

    // vIndex: 8
    virtual class SparseContainer*
    initOpenContainer(class BlockSource&, ::ContainerEnumName, class ContainerWeakRef const&);

    // vIndex: 9
    virtual void
    _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen&, ::ContainerType containerType, int slot);

    // vIndex: 10
    virtual void _initScreen(class ItemStackNetManagerScreen&);

    MCAPI ItemStackNetManagerBase(class Player& player, bool isClientSide, bool isEnabled);

    MCAPI class ContainerScreenContext const& getScreenContext() const;

    MCAPI bool isClientSide() const;

    MCAPI bool isScreenOpen() const;

    MCAPI static gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest(class Player* player);

    MCAPI static bool setPlayerContainer(
        class Player&                                      player,
        ::ContainerType                                    containerType,
        int                                                slot,
        class ItemStack const&                             item,
        class ItemStack&                                   slotItem,
        std::function<void(class ItemStack const&)> const& callback
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction const& requestAction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _pushScreen(class ContainerScreenContext screenContext);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Player& player, bool isClientSide, bool isEnabled);

    MCAPI void dtor$();

    MCAPI void
    _addLegacyTransactionRequestSetItemSlot$(class ItemStackNetManagerScreen&, ::ContainerType containerType, int slot);

    MCAPI void _initScreen$(class ItemStackNetManagerScreen&);

    MCAPI gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest$();

    MCAPI class SparseContainer*
    initOpenContainer$(class BlockSource&, ::ContainerEnumName, class ContainerWeakRef const&);

    MCAPI bool isEnabled$() const;

    MCAPI void onContainerScreenClose$();

    MCAPI void onContainerScreenOpen$(class ContainerScreenContext const& screenContext);

    MCAPI bool retainSetItemStackNetIdVariant$() const;

    // NOLINTEND
};
