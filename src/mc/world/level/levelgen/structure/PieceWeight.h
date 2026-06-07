#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PieceWeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> pieceClass;
    ::ll::TypedStorage<4, 4, int>            weight;
    ::ll::TypedStorage<4, 4, int>            placeCount;
    ::ll::TypedStorage<4, 4, int>            maxPlaceCount;
    ::ll::TypedStorage<4, 4, int>            minDepth;
    ::ll::TypedStorage<1, 1, bool>           allowInRow;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PieceWeight();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
