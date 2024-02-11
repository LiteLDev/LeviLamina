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
    // symbol: ?setBlockReducer@ExternalRecipeStore@@QEAAXPEAVBlockReducer@@@Z
    MCAPI void setBlockReducer(class BlockReducer*);

    // NOLINTEND
};
