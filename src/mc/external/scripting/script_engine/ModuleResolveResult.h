#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleResolveResult {
public:
    // prevent constructor by default
    ModuleResolveResult& operator=(ModuleResolveResult const&);
    ModuleResolveResult(ModuleResolveResult const&);
    ModuleResolveResult();

public:
    // NOLINTBEGIN
    MCAPI struct Scripting::ModuleResolveResult& operator=(struct Scripting::ModuleResolveResult&&);

    MCAPI ~ModuleResolveResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
