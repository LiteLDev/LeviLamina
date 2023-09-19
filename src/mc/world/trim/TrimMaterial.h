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
    // symbol: ??0TrimMaterial@@QEAA@$$QEAU0@@Z
    MCAPI TrimMaterial(struct TrimMaterial&&);

    // symbol: ??1TrimMaterial@@QEAA@XZ
    MCAPI ~TrimMaterial();

    // NOLINTEND
};
