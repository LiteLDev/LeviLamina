#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PieceWeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk37d9f4;
    ::ll::UntypedStorage<4, 4>  mUnk3393d8;
    ::ll::UntypedStorage<4, 4>  mUnka5b947;
    ::ll::UntypedStorage<4, 4>  mUnk363f93;
    ::ll::UntypedStorage<4, 4>  mUnk2fe59b;
    ::ll::UntypedStorage<1, 1>  mUnk4d6e94;
    // NOLINTEND

public:
    // prevent constructor by default
    PieceWeight& operator=(PieceWeight const&);
    PieceWeight(PieceWeight const&);
    PieceWeight();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PieceWeight(::std::string const& pieceClass, int weight, int maxPlaceCount, int minDepth, bool allowInRow);

    MCNAPI ~PieceWeight();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& pieceClass, int weight, int maxPlaceCount, int minDepth, bool allowInRow);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
