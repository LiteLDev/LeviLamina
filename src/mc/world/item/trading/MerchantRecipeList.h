#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/crafting/MerchantRecipe.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"

class MerchantRecipeList {
public:
    std::vector<class MerchantRecipe> mRecipeList;
    std::vector<uint>                 mTierExpRequirements;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBVItemInstance@@0H@Z
    virtual class MerchantRecipe* getRecipeFor(class ItemInstance const&, class ItemInstance const&, int);

    // vIndex: 2, symbol: ?addIfNewOrBetter@MerchantRecipeList@@UEAAXPEAVMerchantRecipe@@@Z
    virtual void addIfNewOrBetter(class MerchantRecipe*);

    // vIndex: 3, symbol: ?getMatchingRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBVItemInstance@@00@Z
    virtual class MerchantRecipe*
    getMatchingRecipeFor(class ItemInstance const&, class ItemInstance const&, class ItemInstance const&);

    // vIndex: 4, symbol: ?getMatchingRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBV2@@Z
    virtual class MerchantRecipe* getMatchingRecipeFor(class MerchantRecipe const&);

    // vIndex: 5, symbol: ?load@MerchantRecipeList@@UEAAXAEBVCompoundTag@@@Z
    virtual void load(class CompoundTag const&);

    // vIndex: 6, symbol:
    // ?createTag@MerchantRecipeList@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
    virtual std::unique_ptr<class CompoundTag> createTag(bool) const;

    // symbol: ??0MerchantRecipeList@@QEAA@XZ
    MCAPI MerchantRecipeList();

    // symbol: ?assignNetIds@MerchantRecipeList@@QEAAXXZ
    MCAPI void assignNetIds();

    // symbol:
    // ?getRecipeByNetId@MerchantRecipeList@@QEBAPEBVMerchantRecipe@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
    MCAPI class MerchantRecipe const* getRecipeByNetId(RecipeNetId const&) const;

    // symbol:
    // ?getRecipeIndexByNetId@MerchantRecipeList@@QEBA?AV?$optional@_K@std@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
    MCAPI std::optional<uint64> getRecipeIndexByNetId(RecipeNetId const&) const;

    // symbol: ?isRequiredItem@MerchantRecipeList@@QEAA_NAEBVItemInstance@@0@Z
    MCAPI bool isRequiredItem(class ItemInstance const&, class ItemInstance const&);

    // NOLINTEND
};
