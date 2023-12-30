#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBindingBundle {
public:
    // prevent constructor by default
    ModuleBindingBundle& operator=(ModuleBindingBundle const&);
    ModuleBindingBundle();

public:
    // NOLINTBEGIN
    // symbol: ??0ModuleBindingBundle@Scripting@@QEAA@AEBU01@@Z
    MCAPI ModuleBindingBundle(struct Scripting::ModuleBindingBundle const&);

    // symbol: ??1ModuleBindingBundle@Scripting@@QEAA@XZ
    MCAPI ~ModuleBindingBundle();

    // NOLINTEND
};

}; // namespace Scripting
