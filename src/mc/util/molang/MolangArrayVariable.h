#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangArrayVariable {
public:
    // prevent constructor by default
    MolangArrayVariable& operator=(MolangArrayVariable const&);
    MolangArrayVariable(MolangArrayVariable const&);
    MolangArrayVariable();

public:
    // NOLINTBEGIN
    MCAPI ~MolangArrayVariable();

    // NOLINTEND
};
