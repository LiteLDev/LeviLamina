#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Recipe {
public:
    // prevent constructor by default
    Recipe& operator=(Recipe const&);
    Recipe(Recipe const&);
    Recipe();

    std::string                   mRecipeId;      // this+0x8
    mce::UUID                     mMyId;          // this+0x28
    int                           mWidth;         // this+0x38
    int                           mHeight;        // this+0x3C
    int                           mPriority;      // this+0x40
    RecipeNetId                   mRecipeNetId;   // this+0x44
    std::vector<RecipeIngredient> mMyIngredients; // this+0x48
    RecipeUnlockingRequirement    mUnlockingRequirement;
    HashedString                  mTag;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Recipe@@UEAA@XZ
    virtual ~Recipe();

    // vIndex: 1, symbol:
    // ?assemble@BannerAddPatternRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const = 0;

    // vIndex: 2, symbol: ?getCraftingSize@BannerAddPatternRecipe@@UEBAHXZ
    virtual int getCraftingSize() const = 0;

    // vIndex: 3, symbol: ?getIngredient@BannerAddPatternRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const& getIngredient(int x, int y) const = 0;

    // vIndex: 4, symbol:
    // ?getResultItem@BannerAddPatternRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const& getResultItem() const = 0;

    // vIndex: 5, symbol: ?isShapeless@ShapedRecipe@@UEBA_NXZ
    virtual bool isShapeless() const = 0;

    // vIndex: 6, symbol: ?matches@BannerAddPatternRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const = 0;

    // vIndex: 7, symbol: ?size@BannerAddPatternRecipe@@UEBAHXZ
    virtual int size() const = 0;

    // vIndex: 8, symbol: ?getId@Recipe@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getId() const;

    // vIndex: 9, symbol: ?isMultiRecipe@Recipe@@UEBA_NXZ
    virtual bool isMultiRecipe() const;

    // vIndex: 10, symbol: ?hasDataDrivenResult@Recipe@@UEBA_NXZ
    virtual bool hasDataDrivenResult() const;

    // vIndex: 11, symbol: ?itemValidForRecipe@Recipe@@UEBA_NAEBVItemDescriptor@@AEBVItemStack@@@Z
    virtual bool itemValidForRecipe(class ItemDescriptor const& recipeItem, class ItemStack const& item) const;

    // vIndex: 12, symbol: ?itemsMatch@Recipe@@UEBA_NAEBVItemDescriptor@@0@Z
    virtual bool itemsMatch(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs) const;

    // vIndex: 13, symbol: ?itemsMatch@Recipe@@UEBA_NAEBVItemDescriptor@@0PEBVCompoundTag@@@Z
    virtual bool
    itemsMatch(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs, class CompoundTag const* rhsTag) const;

    // vIndex: 14, symbol: ?getIngredientsHash@Recipe@@UEBA_KXZ
    virtual uint64 getIngredientsHash() const;

    // vIndex: 15, symbol: ?loadResultList@Recipe@@UEBAXAEBVBlockPalette@@@Z
    virtual void loadResultList(class BlockPalette const&) const;

    // symbol: ?countQuantityOfIngredient@Recipe@@QEBAHAEBVItemInstance@@@Z
    MCAPI int countQuantityOfIngredient(class ItemInstance const& ingredient) const;

    // symbol: ?getHeight@Recipe@@QEBAHXZ
    MCAPI int getHeight() const;

    // symbol:
    // ?getIngredients@Recipe@@QEBAAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@XZ
    MCAPI std::vector<class RecipeIngredient> const& getIngredients() const;

    // symbol: ?getNetId@Recipe@@QEBAAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@XZ
    MCAPI RecipeNetId const& getNetId() const;

    // symbol: ?getPriority@Recipe@@QEBAHXZ
    MCAPI int getPriority() const;

    // symbol: ?getRecipeId@Recipe@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getRecipeId() const;

    // symbol: ?getTag@Recipe@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getTag() const;

    // symbol: ?getUnlockingRequirement@Recipe@@QEBAAEBVRecipeUnlockingRequirement@@XZ
    MCAPI class RecipeUnlockingRequirement const& getUnlockingRequirement() const;

    // symbol: ?getWidth@Recipe@@QEBAHXZ
    MCAPI int getWidth() const;

    // symbol: ?setNetId@Recipe@@QEAAXAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
    MCAPI void setNetId(RecipeNetId const& recipeNetId);

    // symbol: ?isAnyAuxValue@Recipe@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const& ii);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0Recipe@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@VHashedString@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@V?$optional@VRecipeUnlockingRequirement@@@2@VSemVersion@@@Z
    MCAPI Recipe(
        std::string_view,
        class HashedString,
        std::vector<class RecipeIngredient> const&,
        std::optional<class RecipeUnlockingRequirement>,
        class SemVersion
    );

    // NOLINTEND
};
