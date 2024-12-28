#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangLoopBreak {
public:
    // prevent constructor by default
    MolangLoopBreak& operator=(MolangLoopBreak const&);
    MolangLoopBreak(MolangLoopBreak const&);
    MolangLoopBreak();
};
