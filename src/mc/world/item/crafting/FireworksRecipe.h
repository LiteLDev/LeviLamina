#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class FireworksRecipe : public ::Recipe {

public:
    // prevent constructor by default
    FireworksRecipe& operator=(FireworksRecipe const&) = delete;
    FireworksRecipe(FireworksRecipe const&)            = delete;
    FireworksRecipe()                                  = delete;

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
     * ?assemble\@FireworksRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@FireworksRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@FireworksRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const& getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol
     * ?getResultItem\@FireworksRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const& getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@FireworksRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;
    /**
     * @vftbl 7
     * @symbol ?size\@FireworksRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKSRECIPE
    /**
     * @symbol ?isShapeless\@FireworksRecipe\@\@UEBA_NXZ
     */
    MCVAPI bool isShapeless() const;
#endif
    /**
     * @symbol
     * ??0FireworksRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEBVUUID\@mce\@\@\@Z
     */
    MCAPI FireworksRecipe(std::string_view, class mce::UUID const*);
    /**
     * @symbol ?ID\@FireworksRecipe\@\@2VUUID\@mce\@\@A
     */
    MCAPI static class mce::UUID ID;
    // NOLINTEND
};
