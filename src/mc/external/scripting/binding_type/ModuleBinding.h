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
    MCAPI ModuleBinding(struct Scripting::ModuleBinding&&);

    MCAPI ModuleBinding(struct Scripting::ModuleBinding const&);

    MCAPI struct Scripting::ModuleBinding& operator=(struct Scripting::ModuleBinding&&);

    MCAPI ~ModuleBinding();

    // NOLINTEND
};

}; // namespace Scripting
