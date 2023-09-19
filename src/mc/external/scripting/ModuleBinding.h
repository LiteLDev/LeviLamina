#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBinding {
public:
    // prevent constructor by default
    ModuleBinding& operator=(ModuleBinding const&);
    ModuleBinding(ModuleBinding const&);
    ModuleBinding();
};

}; // namespace Scripting
