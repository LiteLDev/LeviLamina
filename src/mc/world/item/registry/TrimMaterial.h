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
};
