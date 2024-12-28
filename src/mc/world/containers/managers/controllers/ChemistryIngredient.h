#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChemistryIngredient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkb02e94;
    // NOLINTEND

public:
    // prevent constructor by default
    ChemistryIngredient& operator=(ChemistryIngredient const&);
    ChemistryIngredient(ChemistryIngredient const&);
    ChemistryIngredient();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChemistryIngredient();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
