#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundType.h"
#include "mc/world/level/block/ElementType.h"

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
    MCAPI ChemistryIngredient(::CompoundType compound, int stackCount);

    MCAPI ChemistryIngredient(::ElementType element, int stackCount);

    MCAPI ~ChemistryIngredient();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompoundType compound, int stackCount);

    MCAPI void* $ctor(::ElementType element, int stackCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
