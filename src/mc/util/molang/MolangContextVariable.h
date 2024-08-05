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
    MCAPI explicit MolangContextVariable(class HashedString const& value);

    MCAPI ~MolangContextVariable();

    // NOLINTEND
};
