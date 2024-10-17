#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBindingBundle {
public:
    // prevent constructor by default
    ModuleBindingBundle& operator=(ModuleBindingBundle const&);
    ModuleBindingBundle(ModuleBindingBundle const&);
    ModuleBindingBundle();

public:
    // NOLINTBEGIN
    MCAPI ModuleBindingBundle(struct Scripting::ModuleBindingBundle&&);

    MCAPI ~ModuleBindingBundle();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Scripting::ModuleBindingBundle&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
