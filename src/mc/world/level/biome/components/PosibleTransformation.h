#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PosibleTransformation {
public:
    // prevent constructor by default
    PosibleTransformation();

public:
    // NOLINTBEGIN
    MCAPI PosibleTransformation(struct PosibleTransformation const&);

    MCAPI struct PosibleTransformation& operator=(struct PosibleTransformation const&);

    MCAPI ~PosibleTransformation();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PosibleTransformation const&);

    MCAPI void dtor$();

    // NOLINTEND
};
