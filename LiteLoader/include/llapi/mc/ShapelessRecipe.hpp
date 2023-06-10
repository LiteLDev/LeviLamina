/**
 * @file  ShapelessRecipe.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@ShapelessRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol ?getResultItem\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@ShapelessRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;
    /**
     * @vftbl 7
     * @symbol ?size\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @vftbl 15
     * @symbol ?loadResultList\@ShapelessRecipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHAPELESSRECIPE
    /**
     * @symbol ?isShapeless\@ShapelessRecipe\@\@UEBA_NXZ
     */
    MCVAPI bool isShapeless() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ShapelessRecipe();
#endif
    /**
     * @symbol ??0ShapelessRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@\@Z
     */
    MCAPI ShapelessRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *, class std::optional<class RecipeUnlockingRequirement>);

};
