#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SmithingTrimRecipe : public ::ShapelessRecipe {

public:
    // prevent constructor by default
    SmithingTrimRecipe& operator=(SmithingTrimRecipe const&) = delete;
    SmithingTrimRecipe(SmithingTrimRecipe const&)            = delete;
    SmithingTrimRecipe()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?assemble\@SmithingTrimRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer&, class CraftingContext&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?matches\@SmithingTrimRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?hasDataDrivenResult\@SmithingTrimRecipe\@\@UEBA_NXZ
     */
    virtual bool hasDataDrivenResult() const; // NOLINT
    /**
     * @symbol
     * ??0SmithingTrimRecipe\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRecipeIngredient\@\@11AEBVHashedString\@\@\@Z
     */
    MCAPI
    SmithingTrimRecipe(std::string const&, class RecipeIngredient const&, class RecipeIngredient const&, class RecipeIngredient const&, class HashedString const&); // NOLINT
    /**
     * @symbol ?getAdditionIngredient\@SmithingTrimRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const& getAdditionIngredient() const; // NOLINT
    /**
     * @symbol ?getBaseIngredient\@SmithingTrimRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const& getBaseIngredient() const; // NOLINT
    /**
     * @symbol ?getTemplateIngredient\@SmithingTrimRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const& getTemplateIngredient() const; // NOLINT
    /**
     * @symbol ?ID\@SmithingTrimRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID; // NOLINT
};
