#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SkinAdjustments {
public:
    // prevent constructor by default
    SkinAdjustments& operator=(SkinAdjustments const&);
    SkinAdjustments(SkinAdjustments const&);

public:
    // NOLINTBEGIN
    MCAPI SkinAdjustments();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
