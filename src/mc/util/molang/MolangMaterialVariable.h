#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMaterialVariable {
public:
    // prevent constructor by default
    MolangMaterialVariable& operator=(MolangMaterialVariable const&);
    MolangMaterialVariable(MolangMaterialVariable const&);
    MolangMaterialVariable();

public:
    // NOLINTBEGIN
    MCAPI ~MolangMaterialVariable();

    // NOLINTEND
};
