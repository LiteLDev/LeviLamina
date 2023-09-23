#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExternalRecipeStore {
public:
    // prevent constructor by default
    ExternalRecipeStore& operator=(ExternalRecipeStore const&);
    ExternalRecipeStore(ExternalRecipeStore const&);
    ExternalRecipeStore();

public:
    // NOLINTBEGIN
    // symbol:
    // ?registerBlockReduction@ExternalRecipeStore@@QEAAXAEBVItemStack@@$$QEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI void registerBlockReduction(class ItemStack const&, std::vector<class ItemStack>&&);

    // symbol: ?setBlockReducer@ExternalRecipeStore@@QEAAXPEAVBlockReducer@@@Z
    MCAPI void setBlockReducer(class BlockReducer*);

    // NOLINTEND
};
