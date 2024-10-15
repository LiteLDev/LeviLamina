#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TintMapColor {
public:
    // prevent constructor by default
    TintMapColor& operator=(TintMapColor const&);
    TintMapColor(TintMapColor const&);

public:
    // NOLINTBEGIN
    MCAPI TintMapColor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
