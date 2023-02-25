/**
 * @file  BannerAddPatternRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerAddPatternRecipe.
 *
 */
class BannerAddPatternRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERADDPATTERNRECIPE
public:
    class BannerAddPatternRecipe& operator=(class BannerAddPatternRecipe const &) = delete;
    BannerAddPatternRecipe(class BannerAddPatternRecipe const &) = delete;
    BannerAddPatternRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BannerAddPatternRecipe();
    /**
     * @vftbl  1
     * @symbol  ?assemble\@BannerAddPatternRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol  ?getCraftingSize\@BannerAddPatternRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol  ?getIngredient\@BannerAddPatternRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol  ?getResultItem\@BannerAddPatternRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol  ?matches\@BannerAddPatternRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol  ?size\@BannerAddPatternRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol  ??0BannerAddPatternRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI BannerAddPatternRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    /**
     * @symbol  ??0BannerAddPatternRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI BannerAddPatternRecipe(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?matchPatterns\@BannerAddPatternRecipe\@\@QEBA?BV?$NonOwnerPointer\@$$CBVBannerPattern\@\@\@Bedrock\@\@AEAVCraftingContainer\@\@\@Z
     */
    MCAPI class Bedrock::NonOwnerPointer<class BannerPattern const> const matchPatterns(class CraftingContainer &) const;
    /**
     * @symbol  ?ID\@BannerAddPatternRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const ID;

};