/**
 * @file  MC/ShapelessRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShapelessRecipe.
 *
 */
class ShapelessRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSRECIPE
public:
    class ShapelessRecipe& operator=(class ShapelessRecipe const &) = delete;
    ShapelessRecipe(class ShapelessRecipe const &) = delete;
    ShapelessRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShapelessRecipe();
    /**
     * @hash   -280850090
     * @vftbl  1
     * @symbol ?assemble@ShapelessRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -388032228
     * @vftbl  2
     * @symbol ?getCraftingSize@ShapelessRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   1793080749
     * @vftbl  3
     * @symbol ?getIngredient@ShapelessRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -707100951
     * @vftbl  4
     * @symbol ?getResultItem@ShapelessRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   1427756800
     * @vftbl  5
     * @symbol ?isShapeless@ShapelessRecipe@@UEBA_NXZ
     */
    virtual bool isShapeless() const;
    /**
     * @hash   824061934
     * @vftbl  6
     * @symbol ?matches@ShapelessRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   -48532332
     * @vftbl  7
     * @symbol ?size@ShapelessRecipe@@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   197772834
     * @vftbl  14
     * @symbol ?loadResultList@ShapelessRecipe@@UEBAXAEBVBlockPalette@@@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
    /**
     * @hash   -1948053580
     * @symbol ??0ShapelessRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@4@VHashedString@@HPEBVUUID@mce@@@Z
     */
    MCAPI ShapelessRecipe(class gsl::basic_string_span<char const, -1>, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    /**
     * @hash   -1629298893
     * @symbol ?generateUUID@ShapelessRecipe@@QEAAXXZ
     */
    MCAPI void generateUUID();

//private:
    /**
     * @hash   1980476899
     * @symbol ?init@ShapelessRecipe@@AEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HPEBVUUID@mce@@@Z
     */
    MCAPI void init(class gsl::basic_string_span<char const, -1>, int, class mce::UUID const *);

private:

};