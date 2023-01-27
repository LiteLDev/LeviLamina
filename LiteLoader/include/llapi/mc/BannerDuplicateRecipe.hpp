/**
 * @file  BannerDuplicateRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Recipe.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~BannerDuplicateRecipe();
    /**
     * @hash   179833035
     * @vftbl  1
     * @symbol  ?assemble\@BannerDuplicateRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   -1148977465
     * @vftbl  2
     * @symbol  ?getCraftingSize\@BannerDuplicateRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   -1763689688
     * @vftbl  3
     * @symbol  ?getIngredient\@BannerDuplicateRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   322770164
     * @vftbl  4
     * @symbol  ?getResultItem\@BannerDuplicateRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   -639420183
     * @vftbl  6
     * @symbol  ?matches\@BannerDuplicateRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   35304367
     * @vftbl  7
     * @symbol  ?size\@BannerDuplicateRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   -2009949995
     * @symbol  ??0BannerDuplicateRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @hash   -1391030214
     * @symbol  ??0BannerDuplicateRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   1500429775
     * @symbol  ?ID\@BannerDuplicateRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};