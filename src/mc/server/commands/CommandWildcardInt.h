#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsWildcard;
    ::ll::TypedStorage<4, 4, int>  mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandWildcardInt();

    MCFOLD int getValue() const;

    MCFOLD bool isWildcard() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
