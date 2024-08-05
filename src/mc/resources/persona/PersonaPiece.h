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

    MCAPI static class PersonaPiece const INVALID_PIECE;

    // NOLINTEND
};
