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
    MCAPI explicit MolangTempVariable(class HashedString const& value);

    MCAPI ~MolangTempVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HashedString const& value);

    MCAPI void dtor$();

    // NOLINTEND
};
