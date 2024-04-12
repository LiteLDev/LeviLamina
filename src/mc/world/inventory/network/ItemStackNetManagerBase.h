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
    // vIndex: 0, symbol: ??1ItemStackNetManagerBase@@UEAA@XZ
    virtual ~ItemStackNetManagerBase();

    // vIndex: 1, symbol: ?isEnabled@ItemStackNetManagerBase@@UEBA_NXZ
    virtual bool isEnabled() const;

    // vIndex: 2, symbol:
    // ?getRequestId@ItemStackNetManagerServer@@UEBA?AV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
    virtual ItemStackRequestId getRequestId() const = 0;

    // vIndex: 3, symbol: ?retainSetItemStackNetIdVariant@ItemStackNetManagerBase@@UEBA_NXZ
    virtual bool retainSetItemStackNetIdVariant() const;

    // vIndex: 4, symbol: ?allowInventoryTransactionManager@ItemStackNetManagerServer@@UEBA_NXZ
    virtual bool allowInventoryTransactionManager() const = 0;

    // vIndex: 5, symbol:
    // ?_tryBeginClientLegacyTransactionRequest@ItemStackNetManagerBase@@MEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@XZ
    virtual gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest();

    // vIndex: 6, symbol: ?onContainerScreenOpen@ItemStackNetManagerBase@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void onContainerScreenOpen(class ContainerScreenContext const& screenContext);

    // vIndex: 7, symbol: ?onContainerScreenClose@ItemStackNetManagerBase@@UEAAXXZ
    virtual void onContainerScreenClose();

    // vIndex: 8, symbol:
    // ?initOpenContainer@ItemStackNetManagerBase@@UEAAPEAVSparseContainer@@AEAVBlockSource@@W4ContainerEnumName@@AEBVContainerWeakRef@@@Z
    virtual class SparseContainer*
    initOpenContainer(class BlockSource&, ::ContainerEnumName, class ContainerWeakRef const&);

    // vIndex: 9, symbol:
    // ?_addLegacyTransactionRequestSetItemSlot@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@W4ContainerType@@H@Z
    virtual void
    _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen&, ::ContainerType containerType, int slot);

    // vIndex: 10, symbol: ?_initScreen@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@@Z
    virtual void _initScreen(class ItemStackNetManagerScreen&);

    // symbol: ??0ItemStackNetManagerBase@@QEAA@AEAVPlayer@@_N1@Z
    MCAPI ItemStackNetManagerBase(class Player& player, bool isClientSide, bool isEnabled);

    // symbol: ?getScreenContext@ItemStackNetManagerBase@@QEBAAEBVContainerScreenContext@@XZ
    MCAPI class ContainerScreenContext const& getScreenContext() const;

    // symbol: ?isClientSide@ItemStackNetManagerBase@@QEBA_NXZ
    MCAPI bool isClientSide() const;

    // symbol: ?isScreenOpen@ItemStackNetManagerBase@@QEBA_NXZ
    MCAPI bool isScreenOpen() const;

    // symbol:
    // ?_tryBeginClientLegacyTransactionRequest@ItemStackNetManagerBase@@SA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@PEAVPlayer@@@Z
    MCAPI static gsl::final_action<std::function<void()>> _tryBeginClientLegacyTransactionRequest(class Player* player);

    // symbol:
    // ?setPlayerContainer@ItemStackNetManagerBase@@SA_NAEAVPlayer@@W4ContainerType@@HAEBVItemStack@@AEAV4@AEBV?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
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
    // symbol: ?_isRequestActionAllowed@ItemStackNetManagerBase@@IEAA_NAEBVItemStackRequestAction@@@Z
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction const& requestAction);

    // NOLINTEND
};
