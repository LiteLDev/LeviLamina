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
    MCAPI void registerBlockReduction(class ItemStack const& block, std::vector<class ItemStack>&& elements);

    MCAPI void setBlockReducer(class BlockReducer* reducer);

    // NOLINTEND
};
