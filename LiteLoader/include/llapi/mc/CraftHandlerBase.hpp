/**
 * @file  CraftHandlerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include  "SimpleSparseContainer.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerBase.
 *
 */
class CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERBASE
public:
    class CraftHandlerBase& operator=(class CraftHandlerBase const &) = delete;
    CraftHandlerBase(class CraftHandlerBase const &) = delete;
    CraftHandlerBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CraftHandlerBase();
    /**
     * @hash   1638732736
     * @vftbl  1
     * @symbol  ?handleConsumedItem\@CraftHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@W4ContainerEnumName\@\@EAEBVItemStack\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const &);
    /**
     * @hash   -1583710824
     * @vftbl  2
     * @symbol  ?preHandleAction\@CraftHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@W4ItemStackRequestActionType\@\@\@Z
     */
    virtual enum class ItemStackNetResult preHandleAction(enum class ItemStackRequestActionType);
    /**
     * @hash   -127773518
     * @vftbl  3
     * @symbol  ?endRequestBatch\@CraftHandlerBase\@\@UEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @hash   2002133937
     * @vftbl  4
     * @symbol  ?_handleCraftAction\@CraftHandlerSmithingTable\@\@EEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &) = 0;
    /**
     * @hash   -1177689191
     * @vftbl  5
     * @symbol  ?_postCraftRequest\@CraftHandlerBase\@\@MEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);
    /**
     * @hash   508604402
     * @vftbl  6
     * @symbol  ?_getLevelRecipes\@CraftHandlerBase\@\@MEBAPEBVRecipes\@\@XZ
     */
    virtual class Recipes const * _getLevelRecipes() const;
    /**
     * @hash   1887522778
     * @symbol  ??0CraftHandlerBase\@\@QEAA\@AEAVItemStackRequestActionCraftHandler\@\@\@Z
     */
    MCAPI CraftHandlerBase(class ItemStackRequestActionCraftHandler &);
    /**
     * @hash   1759923484
     * @symbol  ?_isNonImplementedTrustClientResults\@CraftHandlerBase\@\@QEBA_NXZ
     */
    MCAPI bool _isNonImplementedTrustClientResults() const;
    /**
     * @hash   605243906
     * @symbol  ?endRequest\@CraftHandlerBase\@\@QEAA?AW4ItemStackNetResult\@\@W42\@\@Z
     */
    MCAPI enum class ItemStackNetResult endRequest(enum class ItemStackNetResult);
    /**
     * @hash   -361676785
     * @symbol  ?handleCraftAction\@CraftHandlerBase\@\@QEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@W42\@\@Z
     */
    MCAPI enum class ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &, enum class ItemStackNetResult);
    /**
     * @hash   -508141398
     * @symbol  ?isCraftRequest\@CraftHandlerBase\@\@QEAA_NXZ
     */
    MCAPI bool isCraftRequest();
    /**
     * @hash   -1236589660
     * @symbol  ?postRequest\@CraftHandlerBase\@\@QEAAX_N\@Z
     */
    MCAPI void postRequest(bool);

//protected:
    /**
     * @hash   251505157
     * @symbol  ?_getRecipeFromNetId\@CraftHandlerBase\@\@IEAA?AV?$tuple\@W4ItemStackNetResult\@\@PEBVRecipe\@\@\@std\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class std::tuple<enum class ItemStackNetResult, class Recipe const *> _getRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @hash   1928216641
     * @symbol  ?_tryGetSparseContainer\@CraftHandlerBase\@\@IEAA?AV?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum class ContainerEnumName);
    /**
     * @hash   152708186
     * @symbol  ?_validateRequestSlot\@CraftHandlerBase\@\@IEAA?AUItemStackRequestHandlerSlotInfo\@\@UItemStackRequestSlotInfo\@\@\@Z
     */
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo);

protected:

};