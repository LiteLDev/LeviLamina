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
    MCAPI ~ModuleIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
