#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangGeometryVariable {

public:
    // prevent constructor by default
    MolangGeometryVariable& operator=(MolangGeometryVariable const&) = delete;
    MolangGeometryVariable(MolangGeometryVariable const&)            = delete;
    MolangGeometryVariable()                                         = delete;

public:
    /**
     * @symbol ??1MolangGeometryVariable\@\@QEAA\@XZ
     */
    MCAPI ~MolangGeometryVariable(); // NOLINT
};
