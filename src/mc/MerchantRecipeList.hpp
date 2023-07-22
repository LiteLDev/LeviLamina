/**
 * @file  MerchantRecipeList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "MerchantRecipe.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MerchantRecipeList.
 *
 */
class MerchantRecipeList {

#define AFTER_EXTRA
// Add Member There
    std::vector<MerchantRecipe> mRecipes;
    std::vector<int> mTierExpRequirements;

public:
    inline MerchantRecipe* getRecipeByNetId(unsigned int recipeNetId)
    {
        for (auto& recipe : mRecipes)
        {
            if (recipe.getRecipeNetId() == recipeNetId)
                return &recipe;
        }
        return nullptr;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MERCHANTRECIPELIST
public:
    class MerchantRecipeList& operator=(class MerchantRecipeList const &) = delete;
    MerchantRecipeList(class MerchantRecipeList const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MerchantRecipeList();
    /**
     * @vftbl  1
     * @symbol  ?getRecipeFor\@MerchantRecipeList\@\@UEAAPEAVMerchantRecipe\@\@AEBVItemInstance\@\@0H\@Z
     */
    virtual class MerchantRecipe * getRecipeFor(class ItemInstance const &, class ItemInstance const &, int);
    /**
     * @vftbl  2
     * @symbol  ?addIfNewOrBetter\@MerchantRecipeList\@\@UEAAXPEAVMerchantRecipe\@\@\@Z
     */
    virtual void addIfNewOrBetter(class MerchantRecipe *);
    /**
     * @vftbl  3
     * @symbol  ?getMatchingRecipeFor\@MerchantRecipeList\@\@UEAAPEAVMerchantRecipe\@\@AEBVItemInstance\@\@00\@Z
     */
    virtual class MerchantRecipe * getMatchingRecipeFor(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @vftbl  4
     * @symbol  ?getMatchingRecipeFor\@MerchantRecipeList\@\@UEAAPEAVMerchantRecipe\@\@AEBV2\@\@Z
     */
    virtual class MerchantRecipe * getMatchingRecipeFor(class MerchantRecipe const &);
    /**
     * @vftbl  5
     * @symbol  ?load\@MerchantRecipeList\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void load(class CompoundTag const &);
    /**
     * @vftbl  6
     * @symbol  ?createTag\@MerchantRecipeList\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    virtual std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @symbol  ??0MerchantRecipeList\@\@QEAA\@XZ
     */
    MCAPI MerchantRecipeList();
    /**
     * @symbol  ?assignNetIds\@MerchantRecipeList\@\@QEAAXXZ
     */
    MCAPI void assignNetIds();
    /**
     * @symbol  ?getRecipeByNetId\@MerchantRecipeList\@\@QEBAPEBVMerchantRecipe\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class MerchantRecipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @symbol  ?getRecipeIndexByNetId\@MerchantRecipeList\@\@QEBA?AV?$optional\@_K\@std\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getRecipeIndexByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @symbol  ?isRequiredItem\@MerchantRecipeList\@\@QEAA_NAEBVItemInstance\@\@0\@Z
     */
    MCAPI bool isRequiredItem(class ItemInstance const &, class ItemInstance const &);

};