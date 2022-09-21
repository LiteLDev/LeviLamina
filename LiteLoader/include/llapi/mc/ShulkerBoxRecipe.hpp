/**
 * @file  MC/ShulkerBoxRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerBoxRecipe.
 *
 */
class ShulkerBoxRecipe : public ShapelessRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXRECIPE
public:
    class ShulkerBoxRecipe& operator=(class ShulkerBoxRecipe const &) = delete;
    ShulkerBoxRecipe(class ShulkerBoxRecipe const &) = delete;
    ShulkerBoxRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShulkerBoxRecipe();
    /**
     * @hash   1746881515
     * @vftbl  1
     * @symbol ?assemble@ShulkerBoxRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   1411723512
     * @vftbl  12
     * @symbol ?itemsMatch@ShulkerBoxRecipe@@UEBA_NAEBVItemDescriptor@@0@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    /**
     * @hash   -1622148209
     * @symbol ??0ShulkerBoxRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@4@VHashedString@@HPEBVUUID@mce@@@Z
     */
    MCAPI ShulkerBoxRecipe(class gsl::basic_string_span<char const, -1>, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    /**
     * @hash   847733163
     * @symbol ?ID@ShulkerBoxRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const ID;

};