#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChemistryIngredient {
public:
    // prevent constructor by default
    ChemistryIngredient& operator=(ChemistryIngredient const&);
    ChemistryIngredient(ChemistryIngredient const&);
    ChemistryIngredient();

public:
    // NOLINTBEGIN
    MCAPI ~ChemistryIngredient();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
