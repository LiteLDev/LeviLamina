/**
 * @file  ItemStackRequestActionCraftHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftHandler.
 *
 */
class ItemStackRequestActionCraftHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTHANDLER
public:
    class ItemStackRequestActionCraftHandler& operator=(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler() = delete;
#endif

public:
    /**
     * @hash   185493520
     * @symbol ??0ItemStackRequestActionCraftHandler@@QEAA@AEAVItemStackRequestActionHandler@@AEAVPlayer@@@Z
     */
    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler &, class Player &);
    /**
     * @hash   -1584173772
     * @symbol ?_getOrInitSparseContainer@ItemStackRequestActionCraftHandler@@QEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum ContainerEnumName);
    /**
     * @hash   10330023
     * @symbol ?_initCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@E@Z
     */
    MCAPI enum ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const &, unsigned char);
    /**
     * @hash   -1395652886
     * @symbol ?_initSingleCraftResult@ItemStackRequestActionCraftHandler@@QEAAPEAVItemInstance@@AEBV2@@Z
     */
    MCAPI class ItemInstance * _initSingleCraftResult(class ItemInstance const &);
    /**
     * @hash   1488581137
     * @symbol ?_validateRequestSlot@ItemStackRequestActionCraftHandler@@QEAA?AUItemStackRequestHandlerSlotInfo@@AEBUItemStackRequestSlotInfo@@@Z
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &);
    /**
     * @hash   528406242
     * @symbol ?endRequest@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W42@@Z
     */
    MCAPI enum ItemStackNetResult endRequest(enum ItemStackNetResult);
    /**
     * @hash   795795955
     * @symbol ?endRequestBatch@ItemStackRequestActionCraftHandler@@QEAAXXZ
     */
    MCAPI void endRequestBatch();
    /**
     * @hash   -884703013
     * @symbol ?handleConsume@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionConsume@@@Z
     */
    MCAPI enum ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const &);
    /**
     * @hash   -350875363
     * @symbol ?handleCraftAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    MCAPI enum ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   1383291403
     * @symbol ?handleCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@@Z
     */
    MCAPI enum ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &);
    /**
     * @hash   -1317613553
     * @symbol ?handleCreate@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCreate@@@Z
     */
    MCAPI enum ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const &);
    /**
     * @hash   -1257903700
     * @symbol ?isCraftRequest@ItemStackRequestActionCraftHandler@@QEBA_NXZ
     */
    MCAPI bool isCraftRequest() const;
    /**
     * @hash   1997724472
     * @symbol ?onContainerScreenOpen@ItemStackRequestActionCraftHandler@@QEAAXAEBVContainerScreenContext@@@Z
     */
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @hash   1198710610
     * @symbol ?postRequest@ItemStackRequestActionCraftHandler@@QEAAX_N@Z
     */
    MCAPI void postRequest(bool);
    /**
     * @hash   1750807603
     * @symbol ?preHandleAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
     */
    MCAPI enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);

//private:
    /**
     * @hash   -100677005
     * @symbol ?_createCraftInputs@ItemStackRequestActionCraftHandler@@AEAA?AV?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs> _createCraftInputs(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   1418035927
     * @symbol ?_setCreatedItemOutputSlot@ItemStackRequestActionCraftHandler@@AEAA?AW4ItemStackNetResult@@E@Z
     */
    MCAPI enum ItemStackNetResult _setCreatedItemOutputSlot(unsigned char);

private:

};