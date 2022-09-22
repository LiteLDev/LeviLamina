/**
 * @file  MerchantRecipeList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~MerchantRecipeList();
    /**
     * @hash   1972199023
     * @vftbl  1
     * @symbol ?getRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBVItemInstance@@0H@Z
     */
    virtual class MerchantRecipe * getRecipeFor(class ItemInstance const &, class ItemInstance const &, int);
    /**
     * @hash   671815394
     * @vftbl  2
     * @symbol ?addIfNewOrBetter@MerchantRecipeList@@UEAAXPEAVMerchantRecipe@@@Z
     */
    virtual void addIfNewOrBetter(class MerchantRecipe *);
    /**
     * @hash   23293966
     * @vftbl  3
     * @symbol ?getMatchingRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBVItemInstance@@00@Z
     */
    virtual class MerchantRecipe * getMatchingRecipeFor(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @hash   74043328
     * @vftbl  4
     * @symbol ?getMatchingRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBV2@@Z
     */
    virtual class MerchantRecipe * getMatchingRecipeFor(class MerchantRecipe const &);
    /**
     * @hash   718562673
     * @vftbl  5
     * @symbol ?load@MerchantRecipeList@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void load(class CompoundTag const &);
    /**
     * @hash   -742258937
     * @vftbl  6
     * @symbol ?createTag@MerchantRecipeList@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
     */
    virtual std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @hash   -1942988624
     * @symbol ??0MerchantRecipeList@@QEAA@XZ
     */
    MCAPI MerchantRecipeList();
    /**
     * @hash   1548539381
     * @symbol ?assignNetIds@MerchantRecipeList@@QEAAXXZ
     */
    MCAPI void assignNetIds();
    /**
     * @hash   1121243077
     * @symbol ?getRecipeByNetId@MerchantRecipeList@@QEBAPEBVMerchantRecipe@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI class MerchantRecipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @hash   430236125
     * @symbol ?getRecipeIndexByNetId@MerchantRecipeList@@QEBA?AV?$optional@_K@std@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI class std::optional<unsigned __int64> getRecipeIndexByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @hash   1776544190
     * @symbol ?isRequiredItem@MerchantRecipeList@@QEAA_NAEBVItemInstance@@0@Z
     */
    MCAPI bool isRequiredItem(class ItemInstance const &, class ItemInstance const &);

};