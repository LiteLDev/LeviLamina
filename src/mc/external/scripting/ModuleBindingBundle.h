#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBindingBundle {

public:
    // prevent constructor by default
    ModuleBindingBundle& operator=(ModuleBindingBundle const&) = delete;
    ModuleBindingBundle(ModuleBindingBundle const&)            = delete;
    ModuleBindingBundle()                                      = delete;
};

}; // namespace Scripting
