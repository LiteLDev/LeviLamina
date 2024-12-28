#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MolangHashStringVariable {
public:
    // prevent constructor by default
    MolangHashStringVariable& operator=(MolangHashStringVariable const&);
    MolangHashStringVariable(MolangHashStringVariable const&);
    MolangHashStringVariable();
};
