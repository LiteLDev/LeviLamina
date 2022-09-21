/**
 * @file  MC/MapCloningRecipe.hpp
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
 * @brief MC class MapCloningRecipe.
 *
 */
class MapCloningRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCLONINGRECIPE
public:
    class MapCloningRecipe& operator=(class MapCloningRecipe const &) = delete;
    MapCloningRecipe(class MapCloningRecipe const &) = delete;
    MapCloningRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MapCloningRecipe();
    /**
     * @hash   176112410
     * @vftbl  1
     * @symbol ?assemble@MapCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -1436744600
     * @vftbl  2
     * @symbol ?getCraftingSize@MapCloningRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   -547718727
     * @vftbl  3
     * @symbol ?getIngredient@MapCloningRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -674197595
     * @vftbl  4
     * @symbol ?getResultItem@MapCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   1019507866
     * @vftbl  6
     * @symbol ?matches@MapCloningRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   1003362912
     * @vftbl  7
     * @symbol ?size@MapCloningRecipe@@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   -1257205484
     * @symbol ??0MapCloningRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     */
    MCAPI MapCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   -1845031637
     * @symbol ?CartographyTableID@MapCloningRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @hash   970546425
     * @symbol ?CraftingTableID@MapCloningRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const CraftingTableID;

};