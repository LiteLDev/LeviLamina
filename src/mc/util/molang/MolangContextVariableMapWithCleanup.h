#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangContextVariableMapWithCleanup {
public:
    // prevent constructor by default
    MolangContextVariableMapWithCleanup& operator=(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup();

public:
    // NOLINTBEGIN
    // symbol: ??1MolangContextVariableMapWithCleanup@@QEAA@XZ
    MCAPI ~MolangContextVariableMapWithCleanup();

    // NOLINTEND
};
