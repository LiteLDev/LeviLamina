/**
 * @file  SmithingTrimRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SmithingTrimRecipe : public ShapelessRecipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMITHINGTRIMRECIPE
public:
    class SmithingTrimRecipe& operator=(class SmithingTrimRecipe const &) = delete;
    SmithingTrimRecipe(class SmithingTrimRecipe const &) = delete;
    SmithingTrimRecipe() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@SmithingTrimRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@SmithingTrimRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;
    /**
     * @vftbl 10
     * @symbol ?hasDataDrivenResult\@SmithingTrimRecipe\@\@UEBA_NXZ
     */
    virtual bool hasDataDrivenResult() const;
    /**
     * @symbol ??0SmithingTrimRecipe\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRecipeIngredient\@\@11AEBVHashedString\@\@\@Z
     */
    MCAPI SmithingTrimRecipe(std::string const &, class RecipeIngredient const &, class RecipeIngredient const &, class RecipeIngredient const &, class HashedString const &);
    /**
     * @symbol ?getAdditionIngredient\@SmithingTrimRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const & getAdditionIngredient() const;
    /**
     * @symbol ?getBaseIngredient\@SmithingTrimRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const & getBaseIngredient() const;
    /**
     * @symbol ?getTemplateIngredient\@SmithingTrimRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const & getTemplateIngredient() const;
    /**
     * @symbol ?ID\@SmithingTrimRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};
