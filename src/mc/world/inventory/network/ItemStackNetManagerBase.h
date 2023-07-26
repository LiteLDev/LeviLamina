#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"

class ItemStackNetManagerBase {

public:
    // prevent constructor by default
    ItemStackNetManagerBase& operator=(ItemStackNetManagerBase const&) = delete;
    ItemStackNetManagerBase(ItemStackNetManagerBase const&)            = delete;
    ItemStackNetManagerBase()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isEnabled\@ItemStackNetManagerBase\@\@UEBA_NXZ
     */
    virtual bool isEnabled() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getRequestId\@ItemStackNetManagerServer\@\@UEBA?AV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const = 0; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?retainSetItemStackNetIdVariant\@ItemStackNetManagerBase\@\@UEBA_NXZ
     */
    virtual bool retainSetItemStackNetIdVariant() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?allowInventoryTransactionManager\@ItemStackNetManagerServer\@\@UEBA_NXZ
     */
    virtual bool allowInventoryTransactionManager() const = 0; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?_tryBeginClientLegacyTransactionRequest\@ItemStackNetManagerBase\@\@MEAA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@XZ
     */
    virtual class gsl::final_action<class std::function<void(void)>>
    _tryBeginClientLegacyTransactionRequest(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?onContainerScreenOpen\@ItemStackNetManagerBase\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void onContainerScreenOpen(class ContainerScreenContext const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?onContainerScreenClose\@ItemStackNetManagerBase\@\@UEAAXXZ
     */
    virtual void onContainerScreenClose(); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?initOpenContainer\@ItemStackNetManagerBase\@\@UEAAPEAVSparseContainer\@\@AEAVBlockSource\@\@W4ContainerEnumName\@\@AEBVContainerWeakRef\@\@\@Z
     */
    virtual class SparseContainer*
    initOpenContainer(class BlockSource&, enum class ContainerEnumName, class ContainerWeakRef const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?_addLegacyTransactionRequestSetItemSlot\@ItemStackNetManagerBase\@\@MEAAXAEAVItemStackNetManagerScreen\@\@W4ContainerType\@\@H\@Z
     */
    virtual void
    _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen&, enum class ContainerType, int); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_initScreen\@ItemStackNetManagerBase\@\@MEAAXAEAVItemStackNetManagerScreen\@\@\@Z
     */
    virtual void _initScreen(class ItemStackNetManagerScreen&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKNETMANAGERBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackNetManagerBase(); // NOLINT
#endif
    /**
     * @symbol ??0ItemStackNetManagerBase\@\@QEAA\@AEAVPlayer\@\@_N1\@Z
     */
    MCAPI ItemStackNetManagerBase(class Player&, bool, bool); // NOLINT
    /**
     * @symbol ?getScreenContext\@ItemStackNetManagerBase\@\@QEBAAEBVContainerScreenContext\@\@XZ
     */
    MCAPI class ContainerScreenContext const& getScreenContext() const; // NOLINT
    /**
     * @symbol ?isClientSide\@ItemStackNetManagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isClientSide() const; // NOLINT
    /**
     * @symbol ?isScreenOpen\@ItemStackNetManagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isScreenOpen() const; // NOLINT
    /**
     * @symbol
     * ?_tryBeginClientLegacyTransactionRequest\@ItemStackNetManagerBase\@\@SA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI static class gsl::final_action<class std::function<void(void)>>
    _tryBeginClientLegacyTransactionRequest(class Player*); // NOLINT
    /**
     * @symbol
     * ?setPlayerContainer\@ItemStackNetManagerBase\@\@SA_NAEAVPlayer\@\@W4ContainerType\@\@HAEBVItemStack\@\@AEAV4\@AEBV?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static bool
    setPlayerContainer(class Player&, enum class ContainerType, int, class ItemStack const&, class ItemStack&, class std::function<void(class ItemStack const&)> const&); // NOLINT

    // protected:
    /**
     * @symbol ?_isRequestActionAllowed\@ItemStackNetManagerBase\@\@IEAA_NAEBVItemStackRequestAction\@\@\@Z
     */
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction const&); // NOLINT

    // private:
    /**
     * @symbol ?_pushScreen\@ItemStackNetManagerBase\@\@AEAAXVContainerScreenContext\@\@\@Z
     */
    MCAPI void _pushScreen(class ContainerScreenContext); // NOLINT

protected:
private:
};
