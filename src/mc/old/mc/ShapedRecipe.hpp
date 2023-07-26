/**
 * @file  ShapedRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShapedRecipe.
 *
 */
class ShapedRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPEDRECIPE
public:
    class ShapedRecipe& operator=(class ShapedRecipe const &) = delete;
    ShapedRecipe(class ShapedRecipe const &) = delete;
    ShapedRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShapedRecipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@ShapedRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol  ?getCraftingSize\@ShapedRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol  ?getIngredient\@ShapedRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol  ?getResultItem\@ShapedRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  5
     * @symbol  ?isShapeless\@ShapedRecipe\@\@UEBA_NXZ
     */
    virtual bool isShapeless() const;
    /**
     * @vftbl  6
     * @symbol  ?matches\@ShapedRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol  ?size\@ShapedRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @vftbl  14
     * @symbol  ?loadResultList\@ShapedRecipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
    /**
     * @symbol  ??0ShapedRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@4\@VHashedString\@\@HPEBVUUID\@mce\@\@\@Z
     */
    MCAPI ShapedRecipe(class gsl::basic_string_span<char const, -1>, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    /**
     * @symbol  ?generateUUID\@ShapedRecipe\@\@QEAAXXZ
     */
    MCAPI void generateUUID();
    /**
     * @symbol  ?getIngredientsHashOffset\@ShapedRecipe\@\@QEBA_KHHHH\@Z
     */
    MCAPI unsigned __int64 getIngredientsHashOffset(int, int, int, int) const;

//private:
    /**
     * @symbol  ?matches\@ShapedRecipe\@\@AEBA_NAEAVCraftingContainer\@\@HH_N\@Z
     */
    MCAPI bool matches(class CraftingContainer &, int, int, bool) const;

private:

};