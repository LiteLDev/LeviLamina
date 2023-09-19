#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangMemberVariable {
public:
    // prevent constructor by default
    MolangMemberVariable& operator=(MolangMemberVariable const&);
    MolangMemberVariable(MolangMemberVariable const&);
    MolangMemberVariable();

public:
    // NOLINTBEGIN
    // symbol: ??1MolangMemberVariable@@QEAA@XZ
    MCAPI ~MolangMemberVariable();

    // NOLINTEND
};
