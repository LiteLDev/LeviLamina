#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModuleIdentifier {
public:
    // prevent constructor by default
    ModuleIdentifier& operator=(ModuleIdentifier const&);
    ModuleIdentifier(ModuleIdentifier const&);
    ModuleIdentifier();

public:
    // NOLINTBEGIN
    // symbol: ??1ModuleIdentifier@@QEAA@XZ
    MCAPI ~ModuleIdentifier();

    // NOLINTEND
};
