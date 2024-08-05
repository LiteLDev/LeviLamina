#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PieceWeight {
public:
    // prevent constructor by default
    PieceWeight& operator=(PieceWeight const&);
    PieceWeight(PieceWeight const&);
    PieceWeight();

public:
    // NOLINTBEGIN
    MCAPI ~PieceWeight();

    // NOLINTEND
};
