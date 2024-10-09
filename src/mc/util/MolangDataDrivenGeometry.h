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
    MCAPI bool operator==(struct MolangDataDrivenGeometry const&) const;

    // NOLINTEND
};
