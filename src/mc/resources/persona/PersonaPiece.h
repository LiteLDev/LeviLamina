#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaPiece {
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PersonaPiece@@QEAA@XZ
    MCAPI PersonaPiece();

    // symbol: ??1PersonaPiece@@QEAA@XZ
    MCAPI ~PersonaPiece();

    // symbol: ?INVALID_PIECE@PersonaPiece@@2V1@B
    MCAPI static class PersonaPiece const INVALID_PIECE;

    // NOLINTEND
};
