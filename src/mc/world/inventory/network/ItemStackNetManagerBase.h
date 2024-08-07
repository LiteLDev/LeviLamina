#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerType.h"

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
};
