#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mOffset;
    ::ll::TypedStorage<1, 1, bool>  mRelative;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RelativeFloat();

    MCAPI RelativeFloat(float offset, bool relative);

    MCAPI float getValue(float base) const;

    MCFOLD bool isRelative() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(float offset, bool relative);
    // NOLINTEND
};
