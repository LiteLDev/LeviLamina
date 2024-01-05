#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangContextVariable {
public:
    // prevent constructor by default
    MolangContextVariable& operator=(MolangContextVariable const&);
    MolangContextVariable(MolangContextVariable const&);
    MolangContextVariable();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangContextVariable@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit MolangContextVariable(class HashedString const& value);

    // symbol: ??1MolangContextVariable@@QEAA@XZ
    MCAPI ~MolangContextVariable();

    // NOLINTEND
};
