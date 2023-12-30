#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBinding {
public:
    // prevent constructor by default
    ModuleBinding& operator=(ModuleBinding const&);
    ModuleBinding();

public:
    // NOLINTBEGIN
    // symbol: ??0ModuleBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ModuleBinding(struct Scripting::ModuleBinding&&);

    // symbol: ??0ModuleBinding@Scripting@@QEAA@AEBU01@@Z
    MCAPI ModuleBinding(struct Scripting::ModuleBinding const&);

    // symbol: ??4ModuleBinding@Scripting@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct Scripting::ModuleBinding& operator=(struct Scripting::ModuleBinding&&);

    // symbol: ??1ModuleBinding@Scripting@@QEAA@XZ
    MCAPI ~ModuleBinding();

    // NOLINTEND
};

}; // namespace Scripting
