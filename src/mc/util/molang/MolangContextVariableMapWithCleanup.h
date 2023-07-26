#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangContextVariableMapWithCleanup {

public:
    // prevent constructor by default
    MolangContextVariableMapWithCleanup& operator=(MolangContextVariableMapWithCleanup const&) = delete;
    MolangContextVariableMapWithCleanup(MolangContextVariableMapWithCleanup const&)            = delete;
    MolangContextVariableMapWithCleanup()                                                      = delete;

public:
    /**
     * @symbol ??1MolangContextVariableMapWithCleanup\@\@QEAA\@XZ
     */
    MCAPI ~MolangContextVariableMapWithCleanup(); // NOLINT
};
