#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBindingBundle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_MODULEBINDINGBUNDLE
public:
    ModuleBindingBundle& operator=(ModuleBindingBundle const&) = delete;
    ModuleBindingBundle(ModuleBindingBundle const&)            = delete;
    ModuleBindingBundle()                                      = delete;
#endif

public:
};

}; // namespace Scripting
