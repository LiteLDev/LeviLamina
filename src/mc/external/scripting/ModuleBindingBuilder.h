#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ModuleBindingBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_MODULEBINDINGBUILDER
public:
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&) = delete;
    ModuleBindingBuilder(ModuleBindingBuilder const&)            = delete;
    ModuleBindingBuilder()                                       = delete;
#endif

public:
};

}; // namespace Scripting
