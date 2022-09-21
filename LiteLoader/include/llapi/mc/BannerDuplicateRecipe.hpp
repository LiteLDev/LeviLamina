/**
 * @file  MC/BannerDuplicateRecipe.hpp
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
 * @brief MC class BannerDuplicateRecipe.
 *
 */
class BannerDuplicateRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERDUPLICATERECIPE
public:
    class BannerDuplicateRecipe& operator=(class BannerDuplicateRecipe const &) = delete;
    BannerDuplicateRecipe(class BannerDuplicateRecipe const &) = delete;
    BannerDuplicateRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BannerDuplicateRecipe();
    /**
     * @hash   -674949557
     * @vftbl  1
     * @symbol ?assemble@BannerDuplicateRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -1245600249
     * @vftbl  2
     * @symbol ?getCraftingSize@BannerDuplicateRecipe@@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   1676418136
     * @vftbl  3
     * @symbol ?getIngredient@BannerDuplicateRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   -1435512380
     * @vftbl  4
     * @symbol ?getResultItem@BannerDuplicateRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   -1494341159
     * @vftbl  6
     * @symbol ?matches@BannerDuplicateRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   -235989777
     * @vftbl  7
     * @symbol ?size@BannerDuplicateRecipe@@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   1430019445
     * @symbol ??0BannerDuplicateRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBVUUID@mce@@@Z
     */
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   2048939226
     * @symbol ??0BannerDuplicateRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   605715711
     * @symbol ?ID@BannerDuplicateRecipe@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const ID;

};