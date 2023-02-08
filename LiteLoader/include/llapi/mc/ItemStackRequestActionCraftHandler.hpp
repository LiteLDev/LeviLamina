/**
 * @file  ItemStackRequestActionCraftHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1820680400
     * @symbol  ??0ItemStackRequestActionCraftHandler\@\@QEAA\@AEAVItemStackRequestActionHandler\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler &, class Player &);
    /**
     * @hash   51059236
     * @symbol  ?_getOrInitSparseContainer\@ItemStackRequestActionCraftHandler\@\@QEAA?AV?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum class ContainerEnumName);
    /**
     * @hash   1645563031
     * @symbol  ?_initCraftResults\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@E\@Z
     */
    MCAPI enum class ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const &, unsigned char);
    /**
     * @hash   239580122
     * @symbol  ?_initSingleCraftResult\@ItemStackRequestActionCraftHandler\@\@QEAAPEAVItemInstance\@\@AEBV2\@\@Z
     */
    MCAPI class ItemInstance * _initSingleCraftResult(class ItemInstance const &);
    /**
     * @hash   -1171122399
     * @symbol  ?_validateRequestSlot\@ItemStackRequestActionCraftHandler\@\@QEAA?AUItemStackRequestHandlerSlotInfo\@\@AEBUItemStackRequestSlotInfo\@\@\@Z
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &);
    /**
     * @hash   -2131297294
     * @symbol  ?endRequest\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@W42\@\@Z
     */
    MCAPI enum class ItemStackNetResult endRequest(enum class ItemStackNetResult);
    /**
     * @hash   -1863861453
     * @symbol  ?endRequestBatch\@ItemStackRequestActionCraftHandler\@\@QEAAXXZ
     */
    MCAPI void endRequestBatch();
    /**
     * @hash   750606875
     * @symbol  ?handleConsume\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionConsume\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const &);
    /**
     * @hash   1284449901
     * @symbol  ?handleCraftAction\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   -1276304501
     * @symbol  ?handleCraftResults\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const &);
    /**
     * @hash   317757839
     * @symbol  ?handleCreate\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCreate\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const &);
    /**
     * @hash   377467692
     * @symbol  ?isCraftRequest\@ItemStackRequestActionCraftHandler\@\@QEBA_NXZ
     */
    MCAPI bool isCraftRequest() const;
    /**
     * @hash   -661871432
     * @symbol  ?onContainerScreenOpen\@ItemStackRequestActionCraftHandler\@\@QEAAXAEBVContainerScreenContext\@\@\@Z
     */
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const &);
    /**
     * @hash   -1460869918
     * @symbol  ?postRequest\@ItemStackRequestActionCraftHandler\@\@QEAAX_N\@Z
     */
    MCAPI void postRequest(bool);
    /**
     * @hash   -908772925
     * @symbol  ?preHandleAction\@ItemStackRequestActionCraftHandler\@\@QEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);

//private:
    /**
     * @hash   1534540627
     * @symbol  ?_createCraftInputs\@ItemStackRequestActionCraftHandler\@\@AEAA?AV?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs> _createCraftInputs(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   -1241698361
     * @symbol  ?_setCreatedItemOutputSlot\@ItemStackRequestActionCraftHandler\@\@AEAA?AW4ItemStackNetResult\@\@E\@Z
     */
    MCAPI enum class ItemStackNetResult _setCreatedItemOutputSlot(unsigned char);

private:

};