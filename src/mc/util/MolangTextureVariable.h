#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangTextureVariable {
public:
    // prevent constructor by default
    MolangTextureVariable& operator=(MolangTextureVariable const&);
    MolangTextureVariable(MolangTextureVariable const&);
    MolangTextureVariable();

public:
    // NOLINTBEGIN
    MCAPI ~MolangTextureVariable();

    // NOLINTEND
};
