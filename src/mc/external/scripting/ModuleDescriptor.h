#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_MODULEDESCRIPTOR
public:
    ModuleDescriptor& operator=(ModuleDescriptor const&) = delete;
    ModuleDescriptor(ModuleDescriptor const&)            = delete;
    ModuleDescriptor()                                   = delete;
#endif

public:
};

}; // namespace Scripting
