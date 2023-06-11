/**
 * @file  FireworksRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireworksRecipe.
 *
 */
class FireworksRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSRECIPE
public:
    class FireworksRecipe& operator=(class FireworksRecipe const &) = delete;
    FireworksRecipe(class FireworksRecipe const &) = delete;
    FireworksRecipe() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?assemble\@FireworksRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@FireworksRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@FireworksRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol ?getResultItem\@FireworksRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@FireworksRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;
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
     * @symbol ??0FireworksRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEBVUUID\@mce\@\@\@Z
     */
    MCAPI FireworksRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const *);
    /**
     * @symbol ?ID\@FireworksRecipe\@\@2VUUID\@mce\@\@A
     */
    MCAPI static class mce::UUID ID;

};
