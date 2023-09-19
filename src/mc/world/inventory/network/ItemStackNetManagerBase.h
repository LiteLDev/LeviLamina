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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isEnabled@ItemStackNetManagerBase@@UEBA_NXZ
    virtual bool isEnabled() const;

    // vIndex: 2, symbol:
    // ?getRequestId@ItemStackNetManagerServer@@UEBA?AV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
    virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const = 0;

    // vIndex: 3, symbol: ?retainSetItemStackNetIdVariant@ItemStackNetManagerBase@@UEBA_NXZ
    virtual bool retainSetItemStackNetIdVariant() const;

    // vIndex: 4, symbol: ?allowInventoryTransactionManager@ItemStackNetManagerServer@@UEBA_NXZ
    virtual bool allowInventoryTransactionManager() const = 0;

    // vIndex: 5, symbol:
    // ?_tryBeginClientLegacyTransactionRequest@ItemStackNetManagerBase@@MEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@XZ
    virtual gsl::final_action<std::function<void(void)>> _tryBeginClientLegacyTransactionRequest();

    // vIndex: 6, symbol: ?onContainerScreenOpen@ItemStackNetManagerBase@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void onContainerScreenOpen(class ContainerScreenContext const&);

    // vIndex: 7, symbol: ?onContainerScreenClose@ItemStackNetManagerBase@@UEAAXXZ
    virtual void onContainerScreenClose();

    // vIndex: 8, symbol:
    // ?initOpenContainer@ItemStackNetManagerBase@@UEAAPEAVSparseContainer@@AEAVBlockSource@@W4ContainerEnumName@@AEBVContainerWeakRef@@@Z
    virtual class SparseContainer*
    initOpenContainer(class BlockSource&, ::ContainerEnumName, class ContainerWeakRef const&);

    // vIndex: 9, symbol:
    // ?_addLegacyTransactionRequestSetItemSlot@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@W4ContainerType@@H@Z
    virtual void _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen&, ::ContainerType, int);

    // vIndex: 10, symbol: ?_initScreen@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@@Z
    virtual void _initScreen(class ItemStackNetManagerScreen&);

    // symbol: ??1ItemStackNetManagerBase@@UEAA@XZ
    MCVAPI ~ItemStackNetManagerBase();

    // symbol: ??0ItemStackNetManagerBase@@QEAA@AEAVPlayer@@_N1@Z
    MCAPI ItemStackNetManagerBase(class Player&, bool, bool);

    // symbol: ?getScreenContext@ItemStackNetManagerBase@@QEBAAEBVContainerScreenContext@@XZ
    MCAPI class ContainerScreenContext const& getScreenContext() const;

    // symbol: ?isClientSide@ItemStackNetManagerBase@@QEBA_NXZ
    MCAPI bool isClientSide() const;

    // symbol: ?isScreenOpen@ItemStackNetManagerBase@@QEBA_NXZ
    MCAPI bool isScreenOpen() const;

    // symbol:
    // ?_tryBeginClientLegacyTransactionRequest@ItemStackNetManagerBase@@SA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@PEAVPlayer@@@Z
    MCAPI static gsl::final_action<std::function<void(void)>> _tryBeginClientLegacyTransactionRequest(class Player*);

    // symbol:
    // ?setPlayerContainer@ItemStackNetManagerBase@@SA_NAEAVPlayer@@W4ContainerType@@HAEBVItemStack@@AEAV4@AEBV?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
    MCAPI static bool
    setPlayerContainer(class Player&, ::ContainerType, int, class ItemStack const&, class ItemStack&, std::function<void(class ItemStack const&)> const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_isRequestActionAllowed@ItemStackNetManagerBase@@IEAA_NAEBVItemStackRequestAction@@@Z
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_pushScreen@ItemStackNetManagerBase@@AEAAXVContainerScreenContext@@@Z
    MCAPI void _pushScreen(class ContainerScreenContext);

    // NOLINTEND
};
