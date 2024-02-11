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
    // symbol: ??4ModuleResolveResult@Scripting@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct Scripting::ModuleResolveResult& operator=(struct Scripting::ModuleResolveResult&&);

    // symbol: ??1ModuleResolveResult@Scripting@@QEAA@XZ
    MCAPI ~ModuleResolveResult();

    // NOLINTEND
};

}; // namespace Scripting
