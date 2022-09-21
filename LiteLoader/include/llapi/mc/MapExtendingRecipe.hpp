/**
 * @file  MC/MapExtendingRecipe.hpp
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
 * @brief MC class MapExtendingRecipe.
 *
 */
class MapExtendingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPEXTENDINGRECIPE
public:
    class MapExtendingRecipe& operator=(class MapExtendingRecipe const &) = delete;
    MapExtendingRecipe(class MapExtendingRecipe const &) = delete;
    MapExtendingRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MapExtendingRecipe();
    /**
     * @hash   2122381144
     * @vftbl  1
     * @symbol ?assemble@MapExtendingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -531577334
     * @vftbl  2
     * @symbol ?getCraftingSize@MapExtendingRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   -118026357
     * @vftbl  3
     * @symbol ?getIngredient@MapExtendingRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -1001793033
     * @vftbl  4
     * @symbol ?getResultItem@MapExtendingRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   -250482196
     * @vftbl  6
     * @symbol ?matches@MapExtendingRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   -266356430
     * @vftbl  7
     * @symbol ?size@MapExtendingRecipe@@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   861873330
     * @symbol ??0MapExtendingRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     */
    MCAPI MapExtendingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   164301195
     * @symbol ?CartographyTableID@MapExtendingRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @hash   -1828456487
     * @symbol ?CraftingTableID@MapExtendingRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const CraftingTableID;

//private:
    /**
     * @hash   -1568190168
     * @symbol ?_updateMapInstance@MapExtendingRecipe@@AEBAXAEAVItemInstance@@@Z
     */
    MCAPI void _updateMapInstance(class ItemInstance &) const;

private:

};