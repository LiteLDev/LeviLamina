#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEvalStackState {
public:
    // prevent constructor by default
    MolangEvalStackState& operator=(MolangEvalStackState const&);
    MolangEvalStackState(MolangEvalStackState const&);
    MolangEvalStackState();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangEvalStackState@@QEAA@AEAUMolangEvalParams@@@Z
    MCAPI explicit MolangEvalStackState(struct MolangEvalParams& evalParams);

    // NOLINTEND
};
