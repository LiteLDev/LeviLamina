/**
 * @file  RepairItemRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~RepairItemRecipe();
    /**
     * @hash   -1181570100
     * @vftbl  1
     * @symbol ?assemble@RepairItemRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -2118596474
     * @vftbl  2
     * @symbol ?getCraftingSize@RepairItemRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   518917847
     * @vftbl  3
     * @symbol ?getIngredient@RepairItemRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   1751082051
     * @vftbl  4
     * @symbol ?getResultItem@RepairItemRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   -1727573608
     * @vftbl  6
     * @symbol ?matches@RepairItemRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   905998926
     * @vftbl  7
     * @symbol ?size@RepairItemRecipe@@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   235433313
     * @symbol ??0RepairItemRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@PEBVUUID@mce@@@Z
     */
    MCAPI RepairItemRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const *);
    /**
     * @hash   -1171096769
     * @symbol ?ID@RepairItemRecipe@@2VUUID@mce@@A
     */
    MCAPI static class mce::UUID ID;

};