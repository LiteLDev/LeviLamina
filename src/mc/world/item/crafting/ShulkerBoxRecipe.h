#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShulkerBoxRecipe : public ::ShapelessRecipe {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXRECIPE
public:
    ShulkerBoxRecipe& operator=(ShulkerBoxRecipe const&) = delete;
    ShulkerBoxRecipe(ShulkerBoxRecipe const&)            = delete;
    ShulkerBoxRecipe()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?assemble\@ShulkerBoxRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 12
     * @symbol ?itemsMatch\@ShulkerBoxRecipe\@\@UEBA_NAEBVItemDescriptor\@\@0\@Z
     */
    virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&) const;
    /**
     * @symbol
     * ??0ShulkerBoxRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z
     */
    MCAPI
    ShulkerBoxRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, class std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol ?ID\@ShulkerBoxRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;
};
