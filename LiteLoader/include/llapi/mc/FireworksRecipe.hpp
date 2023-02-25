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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FireworksRecipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@FireworksRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol  ?getCraftingSize\@FireworksRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol  ?getIngredient\@FireworksRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol  ?getResultItem\@FireworksRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  5
     * @symbol  ?isShapeless\@FireworksRecipe\@\@UEBA_NXZ
     */
    virtual bool isShapeless() const;
    /**
     * @vftbl  6
     * @symbol  ?matches\@FireworksRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol  ?size\@FireworksRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol  ??0FireworksRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@PEBVUUID\@mce\@\@\@Z
     */
    MCAPI FireworksRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const *);
    /**
     * @symbol  ?ID\@FireworksRecipe\@\@2VUUID\@mce\@\@A
     */
    MCAPI static class mce::UUID ID;

};