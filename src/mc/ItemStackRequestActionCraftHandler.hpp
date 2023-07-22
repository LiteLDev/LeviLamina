/**
 * @file  ItemStackRequestActionCraftHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0ItemStackRequestActionCraftHandler\@\@QEAA\@AEAVItemStackRequestActionHandler\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler &, class Player &);
    /**
     * @symbol  ?_getOrInitSparseContainer\@ItemStackRequestActionCraftHandler\@\@QEAA?AV?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum class ContainerEnumName);
    /**
     * @symbol  ?_initCraftResults\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@E\@Z
     */
    MCAPI enum class ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const &, unsigned char);
    /**
     * @symbol  ?_initSingleCraftResult\@ItemStackRequestActionCraftHandler\@\@QEAAPEAVItemInstance\@\@AEBV2\@\@Z
     */
    MCAPI class ItemInstance * _initSingleCraftResult(class ItemInstance const &);
    /**
     * @symbol  ?_validateRequestSlot\@ItemStackRequestActionCraftHandler\@\@QEAA?AUItemStackRequestHandlerSlotInfo\@\@AEBUItemStackRequestSlotInfo\@\@\@Z
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &);
    /**
     * @symbol  ?endRequest\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@W42\@\@Z
     */
    MCAPI enum class ItemStackNetResult endRequest(enum class ItemStackNetResult);
    /**
     * @symbol  ?endRequestBatch\@ItemStackRequestActionCraftHandler\@\@QEAAXXZ
     */
    MCAPI void endRequestBatch();
    /**
     * @symbol  ?handleConsume\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionConsume\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const &);
    /**
     * @symbol  ?handleCraftAction\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @symbol  ?handleCraftResults\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &);
    /**
     * @symbol  ?handleCreate\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCreate\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const &);
    /**
     * @symbol  ?isCraftRequest\@ItemStackRequestActionCraftHandler\@\@QEBA_NXZ
     */
    MCAPI bool isCraftRequest() const;
    /**
     * @symbol  ?onContainerScreenOpen\@ItemStackRequestActionCraftHandler\@\@QEAAXAEBVContainerScreenContext\@\@\@Z
     */
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @symbol  ?postRequest\@ItemStackRequestActionCraftHandler\@\@QEAAX_N\@Z
     */
    MCAPI void postRequest(bool);
    /**
     * @symbol  ?preHandleAction\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);

//private:
    /**
     * @symbol  ?_createCraftInputs\@ItemStackRequestActionCraftHandler\@\@AEAA?AV?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs> _createCraftInputs(class ItemStackRequestActionCraftBase const &);
    /**
     * @symbol  ?_setCreatedItemOutputSlot\@ItemStackRequestActionCraftHandler\@\@AEAA?AW4ItemStackNetResult\@\@E\@Z
     */
    MCAPI enum class ItemStackNetResult _setCreatedItemOutputSlot(unsigned char);

private:

};