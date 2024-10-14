#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RecipeCraftInputs {
public:
    // prevent constructor by default
    RecipeCraftInputs& operator=(RecipeCraftInputs const&);
    RecipeCraftInputs(RecipeCraftInputs const&);
    RecipeCraftInputs();

public:
    // NOLINTBEGIN
    MCAPI ~RecipeCraftInputs();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
