#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"

class MerchantRecipeList {

public:
    // prevent constructor by default
    MerchantRecipeList& operator=(MerchantRecipeList const&) = delete;
    MerchantRecipeList(MerchantRecipeList const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getRecipeFor\@MerchantRecipeList\@\@UEAAPEAVMerchantRecipe\@\@AEBVItemInstance\@\@0H\@Z
     */
    virtual class MerchantRecipe* getRecipeFor(class ItemInstance const&, class ItemInstance const&, int); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?addIfNewOrBetter\@MerchantRecipeList\@\@UEAAXPEAVMerchantRecipe\@\@\@Z
     */
    virtual void addIfNewOrBetter(class MerchantRecipe*); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMatchingRecipeFor\@MerchantRecipeList\@\@UEAAPEAVMerchantRecipe\@\@AEBVItemInstance\@\@00\@Z
     */
    virtual class MerchantRecipe*
    getMatchingRecipeFor(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getMatchingRecipeFor\@MerchantRecipeList\@\@UEAAPEAVMerchantRecipe\@\@AEBV2\@\@Z
     */
    virtual class MerchantRecipe* getMatchingRecipeFor(class MerchantRecipe const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?load\@MerchantRecipeList\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void load(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?createTag\@MerchantRecipeList\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@_N\@Z
     */
    virtual std::unique_ptr<class CompoundTag> createTag(bool) const; // NOLINT
    /**
     * @symbol ??0MerchantRecipeList\@\@QEAA\@XZ
     */
    MCAPI MerchantRecipeList(); // NOLINT
    /**
     * @symbol ?assignNetIds\@MerchantRecipeList\@\@QEAAXXZ
     */
    MCAPI void assignNetIds(); // NOLINT
    /**
     * @symbol
     * ?getRecipeByNetId\@MerchantRecipeList\@\@QEBAPEBVMerchantRecipe\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class MerchantRecipe const*
    getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&) const; // NOLINT
    /**
     * @symbol
     * ?getRecipeIndexByNetId\@MerchantRecipeList\@\@QEBA?AV?$optional\@_K\@std\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64>
    getRecipeIndexByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&) const; // NOLINT
    /**
     * @symbol ?isRequiredItem\@MerchantRecipeList\@\@QEAA_NAEBVItemInstance\@\@0\@Z
     */
    MCAPI bool isRequiredItem(class ItemInstance const&, class ItemInstance const&); // NOLINT
};
