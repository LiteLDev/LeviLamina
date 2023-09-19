#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangDataDrivenGeometry {
public:
    // prevent constructor by default
    MolangDataDrivenGeometry& operator=(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry(MolangDataDrivenGeometry const&);
    MolangDataDrivenGeometry();

public:
    // NOLINTBEGIN
    // symbol: ??8MolangDataDrivenGeometry@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct MolangDataDrivenGeometry const&) const;

    // symbol: ??1MolangDataDrivenGeometry@@QEAA@XZ
    MCAPI ~MolangDataDrivenGeometry();

    // NOLINTEND
};
