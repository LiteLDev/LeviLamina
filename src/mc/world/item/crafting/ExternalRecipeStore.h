#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ItemStack;
// clang-format on

class ExternalRecipeStore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc68c24;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalRecipeStore& operator=(ExternalRecipeStore const&);
    ExternalRecipeStore(ExternalRecipeStore const&);
    ExternalRecipeStore();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerBlockReduction(::ItemStack const& block, ::std::vector<::ItemStack> const& elements);

    MCFOLD void setBlockReducer(::BlockReducer* reducer);
    // NOLINTEND
};
