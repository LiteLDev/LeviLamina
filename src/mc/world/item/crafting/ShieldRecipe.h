#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShieldRecipe : public ::Recipe {

public:
    // prevent constructor by default
    ShieldRecipe& operator=(ShieldRecipe const&) = delete;
    ShieldRecipe(ShieldRecipe const&)            = delete;
    ShieldRecipe()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?assemble\@ShieldRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer&, class CraftingContext&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@ShieldRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@ShieldRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const& getIngredient(int, int) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getResultItem\@ShieldRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const& getResultItem() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?matches\@ShieldRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?size\@ShieldRecipe\@\@UEBAHXZ
     */
    virtual int size() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHIELDRECIPE
    /**
     * @symbol ?isShapeless\@ShieldRecipe\@\@UEBA_NXZ
     */
    MCVAPI bool isShapeless() const; // NOLINT
#endif
    /**
     * @symbol ??0ShieldRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEBVUUID\@mce\@\@\@Z
     */
    MCAPI
    ShieldRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const*); // NOLINT
    /**
     * @symbol ?ID\@ShieldRecipe\@\@2VUUID\@mce\@\@A
     */
    MCAPI static class mce::UUID ID; // NOLINT
};
