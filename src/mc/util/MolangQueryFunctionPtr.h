#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangQueryFunctionPtr {
public:
    // prevent constructor by default
    MolangQueryFunctionPtr& operator=(MolangQueryFunctionPtr const&);
    MolangQueryFunctionPtr(MolangQueryFunctionPtr const&);
    MolangQueryFunctionPtr();

public:
    // NOLINTBEGIN
    MCAPI ~MolangQueryFunctionPtr();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
