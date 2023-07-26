#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangDataDrivenGeometry {

public:
    // prevent constructor by default
    MolangDataDrivenGeometry& operator=(MolangDataDrivenGeometry const&) = delete;
    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&)            = delete;
    MolangDataDrivenGeometry()                                           = delete;

public:
    /**
     * @symbol ??8MolangDataDrivenGeometry\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MolangDataDrivenGeometry const&) const; // NOLINT
    /**
     * @symbol ??1MolangDataDrivenGeometry\@\@QEAA\@XZ
     */
    MCAPI ~MolangDataDrivenGeometry(); // NOLINT
};
