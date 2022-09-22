/**
 * @file  ItemStackNetManagerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackNetManagerBase();
    /**
     * @hash   -841996775
     * @vftbl  1
     * @symbol ?isEnabled@ItemStackNetManagerBase@@UEBA_NXZ
     */
    virtual bool isEnabled() const;
    /**
     * @hash   -761034034
     * @vftbl  2
     * @symbol ?getRequestId@ItemStackNetManagerServer@@UEBA?AV?$TypedClientNetId@UItemStackRequestIdTag@@H$0A@@@XZ
     */
    virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const = 0;
    /**
     * @hash   -870379353
     * @vftbl  3
     * @symbol ?retainSetItemStackNetIdVariant@ItemStackNetManagerBase@@UEBA_NXZ
     */
    virtual bool retainSetItemStackNetIdVariant() const;
    /**
     * @hash   -1570455969
     * @vftbl  4
     * @symbol ?allowInventoryTransactionManager@ItemStackNetManagerServer@@UEBA_NXZ
     */
    virtual bool allowInventoryTransactionManager() const = 0;
    /**
     * @hash   -854740118
     * @vftbl  5
     * @symbol ?_tryBeginClientLegacyTransactionRequest@ItemStackNetManagerBase@@MEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@XZ
     */
    virtual class gsl::final_action<class std::function<void (void)>> _tryBeginClientLegacyTransactionRequest();
    /**
     * @hash   819743750
     * @vftbl  6
     * @symbol ?onContainerScreenOpen@ItemStackNetManagerBase@@UEAAXAEBVContainerScreenContext@@@Z
     */
    virtual void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @hash   215842283
     * @vftbl  7
     * @symbol ?onContainerScreenClose@ItemStackNetManagerBase@@UEAAXXZ
     */
    virtual void onContainerScreenClose();
    /**
     * @hash   -1414105063
     * @vftbl  8
     * @symbol ?initOpenContainer@ItemStackNetManagerBase@@UEAAPEAVSparseContainer@@AEAVBlockSource@@W4ContainerEnumName@@AEBVContainerWeakRef@@@Z
     */
    virtual class SparseContainer * initOpenContainer(class BlockSource &, enum ContainerEnumName, class ContainerWeakRef const &);
    /**
     * @hash   1424969098
     * @vftbl  9
     * @symbol ?_addLegacyTransactionRequestSetItemSlot@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@W4ContainerType@@H@Z
     */
    virtual void _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen &, enum ContainerType, int);
    /**
     * @hash   -1511634682
     * @vftbl  10
     * @symbol ?_initScreen@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@@Z
     */
    virtual void _initScreen(class ItemStackNetManagerScreen &);
    /**
     * @hash   -139749611
     * @symbol ??0ItemStackNetManagerBase@@QEAA@AEAVPlayer@@_N1@Z
     */
    MCAPI ItemStackNetManagerBase(class Player &, bool, bool);
    /**
     * @hash   1896538242
     * @symbol ?_getScreenStack@ItemStackNetManagerBase@@QEAAAEAVItemStackNetManagerScreenStack@@XZ
     */
    MCAPI class ItemStackNetManagerScreenStack & _getScreenStack();
    /**
     * @hash   -1206193284
     * @symbol ?getScreenContext@ItemStackNetManagerBase@@QEBAAEBVContainerScreenContext@@XZ
     */
    MCAPI class ContainerScreenContext const & getScreenContext() const;
    /**
     * @hash   -150689276
     * @symbol ?isClientSide@ItemStackNetManagerBase@@QEBA_NXZ
     */
    MCAPI bool isClientSide() const;
    /**
     * @hash   1512981748
     * @symbol ?isScreenOpen@ItemStackNetManagerBase@@QEBA_NXZ
     */
    MCAPI bool isScreenOpen() const;
    /**
     * @hash   -1328678135
     * @symbol ?_tryBeginClientLegacyTransactionRequest@ItemStackNetManagerBase@@SA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@PEAVPlayer@@@Z
     */
    MCAPI static class gsl::final_action<class std::function<void (void)>> _tryBeginClientLegacyTransactionRequest(class Player *);
    /**
     * @hash   1870194946
     * @symbol ?setPlayerContainer@ItemStackNetManagerBase@@SA_NAEAVPlayer@@W4ContainerType@@HAEBVItemStack@@AEAV4@AEBV?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI static bool setPlayerContainer(class Player &, enum ContainerType, int, class ItemStack const &, class ItemStack &, class std::function<void (class ItemStack const &)> const &);

//protected:
    /**
     * @hash   422943174
     * @symbol ?_isRequestActionAllowed@ItemStackNetManagerBase@@IEAA_NAEBVItemStackRequestAction@@@Z
     */
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction const &);

protected:

};