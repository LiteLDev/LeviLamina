/**
 * @file  BookCloningRecipe.hpp
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
 * @brief MC class BookCloningRecipe.
 *
 */
class BookCloningRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOKCLONINGRECIPE
public:
    class BookCloningRecipe& operator=(class BookCloningRecipe const &) = delete;
    BookCloningRecipe(class BookCloningRecipe const &) = delete;
    BookCloningRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BookCloningRecipe();
    /**
     * @hash   1441149309
     * @vftbl  1
     * @symbol ?assemble@BookCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   839227413
     * @vftbl  2
     * @symbol ?getCraftingSize@BookCloningRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   -559413402
     * @vftbl  3
     * @symbol ?getIngredient@BookCloningRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   837757010
     * @vftbl  4
     * @symbol ?getResultItem@BookCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   23157367
     * @vftbl  6
     * @symbol ?matches@BookCloningRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   1655068765
     * @vftbl  7
     * @symbol ?size@BookCloningRecipe@@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   432251527
     * @symbol ??0BookCloningRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   1179477228
     * @symbol ??0BookCloningRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI BookCloningRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   1560630623
     * @symbol ?ID@BookCloningRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const ID;

};