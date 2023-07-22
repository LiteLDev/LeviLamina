/**
 * @file  ItemStackNetManagerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackNetManagerBase.
 *
 */
class ItemStackNetManagerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERBASE
public:
    class ItemStackNetManagerBase& operator=(class ItemStackNetManagerBase const &) = delete;
    ItemStackNetManagerBase(class ItemStackNetManagerBase const &) = delete;
    ItemStackNetManagerBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackNetManagerBase();
    /**
     * @vftbl  1
     * @symbol  ?isEnabled\@ItemStackNetManagerBase\@\@UEBA_NXZ
     */
    virtual bool isEnabled() const;
    /**
     * @vftbl  2
     * @symbol  ?getRequestId\@ItemStackNetManagerServer\@\@UEBA?AV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const = 0;
    /**
     * @vftbl  3
     * @symbol  ?retainSetItemStackNetIdVariant\@ItemStackNetManagerBase\@\@UEBA_NXZ
     */
    virtual bool retainSetItemStackNetIdVariant() const;
    /**
     * @vftbl  4
     * @symbol  ?allowInventoryTransactionManager\@ItemStackNetManagerServer\@\@UEBA_NXZ
     */
    virtual bool allowInventoryTransactionManager() const = 0;
    /**
     * @vftbl  5
     * @symbol  ?_tryBeginClientLegacyTransactionRequest\@ItemStackNetManagerBase\@\@MEAA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@XZ
     */
    virtual class gsl::final_action<class std::function<void (void)>> _tryBeginClientLegacyTransactionRequest();
    /**
     * @vftbl  6
     * @symbol  ?onContainerScreenOpen\@ItemStackNetManagerBase\@\@UEAAXAEBVContainerScreenContext\@\@\@Z
     */
    virtual void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @vftbl  7
     * @symbol  ?onContainerScreenClose\@ItemStackNetManagerBase\@\@UEAAXXZ
     */
    virtual void onContainerScreenClose();
    /**
     * @vftbl  8
     * @symbol  ?initOpenContainer\@ItemStackNetManagerBase\@\@UEAAPEAVSparseContainer\@\@AEAVBlockSource\@\@W4ContainerEnumName\@\@AEBVContainerWeakRef\@\@\@Z
     */
    virtual class SparseContainer * initOpenContainer(class BlockSource &, enum class ContainerEnumName, class ContainerWeakRef const &);
    /**
     * @vftbl  9
     * @symbol  ?_addLegacyTransactionRequestSetItemSlot\@ItemStackNetManagerBase\@\@MEAAXAEAVItemStackNetManagerScreen\@\@W4ContainerType\@\@H\@Z
     */
    virtual void _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen &, enum class ContainerType, int);
    /**
     * @vftbl  10
     * @symbol  ?_initScreen\@ItemStackNetManagerBase\@\@MEAAXAEAVItemStackNetManagerScreen\@\@\@Z
     */
    virtual void _initScreen(class ItemStackNetManagerScreen &);
    /**
     * @symbol  ??0ItemStackNetManagerBase\@\@QEAA\@AEAVPlayer\@\@_N1\@Z
     */
    MCAPI ItemStackNetManagerBase(class Player &, bool, bool);
    /**
     * @symbol  ?_getScreenStack\@ItemStackNetManagerBase\@\@QEAAAEAVItemStackNetManagerScreenStack\@\@XZ
     */
    MCAPI class ItemStackNetManagerScreenStack & _getScreenStack();
    /**
     * @symbol  ?getScreenContext\@ItemStackNetManagerBase\@\@QEBAAEBVContainerScreenContext\@\@XZ
     */
    MCAPI class ContainerScreenContext const & getScreenContext() const;
    /**
     * @symbol  ?isClientSide\@ItemStackNetManagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isClientSide() const;
    /**
     * @symbol  ?isScreenOpen\@ItemStackNetManagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isScreenOpen() const;
    /**
     * @symbol  ?_tryBeginClientLegacyTransactionRequest\@ItemStackNetManagerBase\@\@SA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI static class gsl::final_action<class std::function<void (void)>> _tryBeginClientLegacyTransactionRequest(class Player *);
    /**
     * @symbol  ?setPlayerContainer\@ItemStackNetManagerBase\@\@SA_NAEAVPlayer\@\@W4ContainerType\@\@HAEBVItemStack\@\@AEAV4\@AEBV?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static bool setPlayerContainer(class Player &, enum class ContainerType, int, class ItemStack const &, class ItemStack &, class std::function<void (class ItemStack const &)> const &);

//protected:
    /**
     * @symbol  ?_isRequestActionAllowed\@ItemStackNetManagerBase\@\@IEAA_NAEBVItemStackRequestAction\@\@\@Z
     */
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction const &);

protected:

};