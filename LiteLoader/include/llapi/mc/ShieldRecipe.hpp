/**
 * @file  ShieldRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ShieldRecipe : public Recipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDRECIPE
public:
    class ShieldRecipe& operator=(class ShieldRecipe const &) = delete;
    ShieldRecipe(class ShieldRecipe const &) = delete;
    ShieldRecipe() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@ShieldRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@ShieldRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@ShieldRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol ?getResultItem\@ShieldRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@ShieldRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;
    /**
     * @vftbl 7
     * @symbol ?size\@ShieldRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHIELDRECIPE
    /**
     * @symbol ?isShapeless\@ShieldRecipe\@\@UEBA_NXZ
     */
    MCVAPI bool isShapeless() const;
#endif
    /**
     * @symbol ??0ShieldRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEBVUUID\@mce\@\@\@Z
     */
    MCAPI ShieldRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const *);
    /**
     * @symbol ?ID\@ShieldRecipe\@\@2VUUID\@mce\@\@A
     */
    MCAPI static class mce::UUID ID;

};
