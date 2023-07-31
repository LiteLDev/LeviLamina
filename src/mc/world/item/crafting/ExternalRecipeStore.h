#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExternalRecipeStore {

public:
    // prevent constructor by default
    ExternalRecipeStore& operator=(ExternalRecipeStore const&) = delete;
    ExternalRecipeStore(ExternalRecipeStore const&)            = delete;
    ExternalRecipeStore()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?setBlockReducer\@ExternalRecipeStore\@\@QEAAXPEAVBlockReducer\@\@\@Z
     */
    MCAPI void setBlockReducer(class BlockReducer*);
    // NOLINTEND
};
