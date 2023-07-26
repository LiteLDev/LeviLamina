#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangArrayVariable {

public:
    // prevent constructor by default
    MolangArrayVariable& operator=(MolangArrayVariable const&) = delete;
    MolangArrayVariable(MolangArrayVariable const&)            = delete;
    MolangArrayVariable()                                      = delete;

public:
    /**
     * @symbol ??1MolangArrayVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangArrayVariable(); // NOLINT
};
