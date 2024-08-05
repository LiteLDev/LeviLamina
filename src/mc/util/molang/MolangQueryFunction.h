#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangQueryFunction {
public:
    // prevent constructor by default
    MolangQueryFunction& operator=(MolangQueryFunction const&);
    MolangQueryFunction(MolangQueryFunction const&);
    MolangQueryFunction();

public:
    // NOLINTBEGIN
    MCAPI ~MolangQueryFunction();

    // NOLINTEND
};
