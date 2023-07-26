#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BookCloningRecipe : public ::Recipe {

public:
    // prevent constructor by default
    BookCloningRecipe& operator=(BookCloningRecipe const&) = delete;
    BookCloningRecipe(BookCloningRecipe const&)            = delete;
    BookCloningRecipe()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?assemble\@BookCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer&, class CraftingContext&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@BookCloningRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@BookCloningRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const& getIngredient(int, int) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getResultItem\@BookCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const& getResultItem() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?matches\@BookCloningRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?size\@BookCloningRecipe\@\@UEBAHXZ
     */
    virtual int size() const; // NOLINT
    /**
     * @symbol ??0BookCloningRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI BookCloningRecipe(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ??0BookCloningRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI
    BookCloningRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const&); // NOLINT
    /**
     * @symbol ?ID\@BookCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID; // NOLINT
};
