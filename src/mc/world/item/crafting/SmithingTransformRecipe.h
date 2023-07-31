#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SmithingTransformRecipe : public ::ShapelessRecipe {

public:
    // prevent constructor by default
    SmithingTransformRecipe& operator=(SmithingTransformRecipe const&) = delete;
    SmithingTransformRecipe(SmithingTransformRecipe const&)            = delete;
    SmithingTransformRecipe()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?assemble\@SmithingTransformRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@SmithingTransformRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;
    /**
     * @symbol
     * ??0SmithingTransformRecipe\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRecipeIngredient\@\@11AEBVItemInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI
    SmithingTransformRecipe(std::string const&, class RecipeIngredient const&, class RecipeIngredient const&, class RecipeIngredient const&, class ItemInstance const&, class HashedString const&);
    /**
     * @symbol ?getAdditionIngredient\@SmithingTransformRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const& getAdditionIngredient() const;
    /**
     * @symbol ?getBaseIngredient\@SmithingTransformRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const& getBaseIngredient() const;
    /**
     * @symbol ?getResult\@SmithingTransformRecipe\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getResult() const;
    /**
     * @symbol ?getTemplateIngredient\@SmithingTransformRecipe\@\@QEBAAEBVRecipeIngredient\@\@XZ
     */
    MCAPI class RecipeIngredient const& getTemplateIngredient() const;
    /**
     * @symbol ?ID\@SmithingTransformRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;
    // NOLINTEND
};
