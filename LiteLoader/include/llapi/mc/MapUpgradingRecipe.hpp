/**
 * @file  MapUpgradingRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapUpgradingRecipe.
 *
 */
class MapUpgradingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPUPGRADINGRECIPE
public:
    class MapUpgradingRecipe& operator=(class MapUpgradingRecipe const &) = delete;
    MapUpgradingRecipe(class MapUpgradingRecipe const &) = delete;
    MapUpgradingRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MapUpgradingRecipe();
    /**
     * @hash   623763801
     * @vftbl  1
     * @symbol  ?assemble\@MapUpgradingRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -659563543
     * @vftbl  2
     * @symbol  ?getCraftingSize\@MapUpgradingRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   1340069578
     * @vftbl  3
     * @symbol  ?getIngredient\@MapUpgradingRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -758096554
     * @vftbl  4
     * @symbol  ?getResultItem\@MapUpgradingRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   403125179
     * @vftbl  6
     * @symbol  ?matches\@MapUpgradingRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   -1192633807
     * @vftbl  7
     * @symbol  ?size\@MapUpgradingRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   2065447411
     * @symbol  ??0MapUpgradingRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI MapUpgradingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   1985081131
     * @symbol  ?CartographyTableID\@MapUpgradingRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @hash   -7676551
     * @symbol  ?CraftingTableID\@MapUpgradingRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CraftingTableID;

};