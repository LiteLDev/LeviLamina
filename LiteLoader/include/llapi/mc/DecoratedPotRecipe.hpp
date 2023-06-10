/**
 * @file  DecoratedPotRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class DecoratedPotRecipe : public Recipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECORATEDPOTRECIPE
public:
    class DecoratedPotRecipe& operator=(class DecoratedPotRecipe const &) = delete;
    DecoratedPotRecipe(class DecoratedPotRecipe const &) = delete;
    DecoratedPotRecipe() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@DecoratedPotRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@DecoratedPotRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@DecoratedPotRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol ?getResultItem\@DecoratedPotRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@DecoratedPotRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;
    /**
     * @vftbl 7
     * @symbol ?size\@DecoratedPotRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol ??0DecoratedPotRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI DecoratedPotRecipe(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ??0DecoratedPotRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI DecoratedPotRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const &);
    /**
     * @symbol ?ID\@DecoratedPotRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};
