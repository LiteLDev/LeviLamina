/**
 * @file  CraftHandlerEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerEnchant.
 *
 */
class CraftHandlerEnchant : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERENCHANT
public:
    class CraftHandlerEnchant& operator=(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?endRequestBatch\@CraftHandlerEnchant\@\@MEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @vftbl 4
     * @symbol ?_handleCraftAction\@CraftHandlerEnchant\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerEnchant\@\@MEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);

//private:
    /**
     * @symbol ?_getEnchantingModel\@CraftHandlerEnchant\@\@AEBAAEAVEnchantingContainerManagerModel\@\@XZ
     */
    MCAPI class EnchantingContainerManagerModel & _getEnchantingModel() const;
    /**
     * @symbol ?_handleEnchant\@CraftHandlerEnchant\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionCraft\@V?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@$0M\@\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);

private:

};
