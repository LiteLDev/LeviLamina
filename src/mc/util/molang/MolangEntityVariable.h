#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEntityVariable {
public:
    // prevent constructor by default
    MolangEntityVariable& operator=(MolangEntityVariable const&);
    MolangEntityVariable(MolangEntityVariable const&);
    MolangEntityVariable();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangEntityVariable@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit MolangEntityVariable(class HashedString const&);

    // symbol: ??1MolangEntityVariable@@QEAA@XZ
    MCAPI ~MolangEntityVariable();

    // NOLINTEND
};
