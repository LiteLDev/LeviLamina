/**
 * @file  MapLockingRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapLockingRecipe.
 *
 */
class MapLockingRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPLOCKINGRECIPE
public:
    class MapLockingRecipe& operator=(class MapLockingRecipe const &) = delete;
    MapLockingRecipe(class MapLockingRecipe const &) = delete;
    MapLockingRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MapLockingRecipe();
    /**
     * @hash   -1593463433
     * @vftbl  1
     * @symbol  ?assemble\@MapLockingRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   1968189979
     * @vftbl  2
     * @symbol  ?getCraftingSize\@MapLockingRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   -594388148
     * @vftbl  3
     * @symbol  ?getIngredient\@MapLockingRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -1624829352
     * @vftbl  4
     * @symbol  ?getResultItem\@MapLockingRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   -957945507
     * @vftbl  6
     * @symbol  ?matches\@MapLockingRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   -1122746445
     * @vftbl  7
     * @symbol  ?size\@MapLockingRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   -1631717519
     * @symbol  ??0MapLockingRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI MapLockingRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   -1829026229
     * @symbol  ?CartographyTableID\@MapLockingRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CartographyTableID;

};