/**
 * @file  ShapedRecipe.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@ShapedRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@ShapedRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@ShapedRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol ?getResultItem\@ShapedRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@ShapedRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;
    /**
     * @vftbl 7
     * @symbol ?size\@ShapedRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @vftbl 15
     * @symbol ?loadResultList\@ShapedRecipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHAPEDRECIPE
    /**
     * @symbol ?isShapeless\@ShapedRecipe\@\@UEBA_NXZ
     */
    MCVAPI bool isShapeless() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ShapedRecipe();
#endif
    /**
     * @symbol ??0ShapedRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@\@Z
     */
    MCAPI ShapedRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *, class std::optional<class RecipeUnlockingRequirement>);
    /**
     * @symbol ?getIngredientsHashOffset\@ShapedRecipe\@\@QEBA_KHHHH\@Z
     */
    MCAPI unsigned __int64 getIngredientsHashOffset(int, int, int, int) const;

//private:
    /**
     * @symbol ?matches\@ShapedRecipe\@\@AEBA_NAEBVCraftingContainer\@\@HH_N\@Z
     */
    MCAPI bool matches(class CraftingContainer const &, int, int, bool) const;

private:

};
