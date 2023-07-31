#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMaterialVariable {

public:
    // prevent constructor by default
    MolangMaterialVariable& operator=(MolangMaterialVariable const&) = delete;
    MolangMaterialVariable(MolangMaterialVariable const&)            = delete;
    MolangMaterialVariable()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1MolangMaterialVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangMaterialVariable();
    // NOLINTEND
};
