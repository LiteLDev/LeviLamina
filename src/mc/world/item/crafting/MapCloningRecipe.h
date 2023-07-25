#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapCloningRecipe : public ::Recipe {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCLONINGRECIPE
public:
    MapCloningRecipe& operator=(MapCloningRecipe const&) = delete;
    MapCloningRecipe(MapCloningRecipe const&)            = delete;
    MapCloningRecipe()                                   = delete;
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
     * ?assemble\@MapCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@MapCloningRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@MapCloningRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const& getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol
     * ?getResultItem\@MapCloningRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const& getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@MapCloningRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;
    /**
     * @vftbl 7
     * @symbol ?size\@MapCloningRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol
     * ??0MapCloningRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI MapCloningRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const&);
    /**
     * @symbol ?CartographyTableID\@MapCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @symbol ?CraftingTableID\@MapCloningRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CraftingTableID;
};
