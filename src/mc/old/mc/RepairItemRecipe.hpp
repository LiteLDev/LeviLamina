/**
 * @file  RepairItemRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepairItemRecipe.
 *
 */
class RepairItemRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPAIRITEMRECIPE
public:
    class RepairItemRecipe& operator=(class RepairItemRecipe const &) = delete;
    RepairItemRecipe(class RepairItemRecipe const &) = delete;
    RepairItemRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RepairItemRecipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@RepairItemRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol  ?getCraftingSize\@RepairItemRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol  ?getIngredient\@RepairItemRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol  ?getResultItem\@RepairItemRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol  ?matches\@RepairItemRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol  ?size\@RepairItemRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol  ??0RepairItemRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@PEBVUUID\@mce\@\@\@Z
     */
    MCAPI RepairItemRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const *);
    /**
     * @symbol  ?ID\@RepairItemRecipe\@\@2VUUID\@mce\@\@A
     */
    MCAPI static class mce::UUID ID;

};