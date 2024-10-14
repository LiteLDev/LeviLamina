#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangGeometryVariable {
public:
    // prevent constructor by default
    MolangGeometryVariable& operator=(MolangGeometryVariable const&);
    MolangGeometryVariable(MolangGeometryVariable const&);
    MolangGeometryVariable();

public:
    // NOLINTBEGIN
    MCAPI ~MolangGeometryVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
