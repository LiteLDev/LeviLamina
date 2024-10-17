#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimMaterial {
public:
    // prevent constructor by default
    TrimMaterial& operator=(TrimMaterial const&);
    TrimMaterial(TrimMaterial const&);
    TrimMaterial();

public:
    // NOLINTBEGIN
    MCAPI TrimMaterial(struct TrimMaterial&&);

    MCAPI ~TrimMaterial();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct TrimMaterial&&);

    MCAPI void dtor$();

    // NOLINTEND
};
