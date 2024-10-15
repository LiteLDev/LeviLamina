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
    MCAPI explicit MolangEntityVariable(class HashedString const& value);

    MCAPI ~MolangEntityVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HashedString const& value);

    MCAPI void dtor$();

    // NOLINTEND
};
