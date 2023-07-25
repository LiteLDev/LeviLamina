#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBinding {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_MODULEBINDING
public:
    ModuleBinding& operator=(ModuleBinding const&) = delete;
    ModuleBinding(ModuleBinding const&)            = delete;
    ModuleBinding()                                = delete;
#endif

public:
};

}; // namespace Scripting
