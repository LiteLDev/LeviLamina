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
    MCNAPI ChemistryIngredient(::CompoundType compound, int stackCount);

    MCNAPI ChemistryIngredient(::ElementType element, int stackCount);

    MCNAPI ~ChemistryIngredient();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundType compound, int stackCount);

    MCNAPI void* $ctor(::ElementType element, int stackCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
