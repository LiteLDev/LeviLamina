#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BreedableType {
public:
    // prevent constructor by default
    BreedableType& operator=(BreedableType const&);
    BreedableType();

public:
    // NOLINTBEGIN
    MCAPI BreedableType(struct BreedableType const&);

    MCAPI ~BreedableType();

    // NOLINTEND
};
