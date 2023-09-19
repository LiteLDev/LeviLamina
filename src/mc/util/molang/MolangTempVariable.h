#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangTempVariable {
public:
    // prevent constructor by default
    MolangTempVariable& operator=(MolangTempVariable const&);
    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangTempVariable@@QEAA@AEBVHashedString@@@Z
    MCAPI explicit MolangTempVariable(class HashedString const&);

    // symbol: ??1MolangTempVariable@@QEAA@XZ
    MCAPI ~MolangTempVariable();

    // NOLINTEND
};
