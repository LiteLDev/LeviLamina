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
    // symbol: ?hasErrors@ModuleResolveResult@Scripting@@QEBA_NXZ
    MCAPI bool hasErrors() const;

    // symbol: ??1ModuleResolveResult@Scripting@@QEAA@XZ
    MCAPI ~ModuleResolveResult();

    // NOLINTEND
};

}; // namespace Scripting
