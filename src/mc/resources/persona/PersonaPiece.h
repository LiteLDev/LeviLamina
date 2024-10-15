#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaPiece {
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

public:
    // NOLINTBEGIN
    MCAPI PersonaPiece();

    MCAPI ~PersonaPiece();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static class PersonaPiece const& INVALID_PIECE();

    // NOLINTEND
};
