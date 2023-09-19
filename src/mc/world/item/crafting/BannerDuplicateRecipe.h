#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BannerDuplicateRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    BannerDuplicateRecipe& operator=(BannerDuplicateRecipe const&);
    BannerDuplicateRecipe(BannerDuplicateRecipe const&);
    BannerDuplicateRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?assemble@BannerDuplicateRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;

    // vIndex: 2, symbol: ?getCraftingSize@BannerDuplicateRecipe@@UEBAHXZ
    virtual int getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@BannerDuplicateRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 4, symbol:
    // ?getResultItem@BannerDuplicateRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?matches@BannerDuplicateRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;

    // vIndex: 7, symbol: ?size@BannerDuplicateRecipe@@UEBAHXZ
    virtual int size() const;

    // symbol: ??0BannerDuplicateRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVUUID@mce@@@Z
    MCAPI BannerDuplicateRecipe(std::string_view, class mce::UUID const&);

    // symbol: ??0BannerDuplicateRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI explicit BannerDuplicateRecipe(std::string_view);

    // symbol: ?ID@BannerDuplicateRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND
};
