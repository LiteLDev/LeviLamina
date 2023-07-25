#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExternalRecipeStore {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALRECIPESTORE
public:
    ExternalRecipeStore& operator=(ExternalRecipeStore const&) = delete;
    ExternalRecipeStore(ExternalRecipeStore const&)            = delete;
    ExternalRecipeStore()                                      = delete;
#endif

public:
    /**
     * @symbol ?setBlockReducer\@ExternalRecipeStore\@\@QEAAXPEAVBlockReducer\@\@\@Z
     */
    MCAPI void setBlockReducer(class BlockReducer*);
};
