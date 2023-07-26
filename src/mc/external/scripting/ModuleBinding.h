#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleBinding {

public:
    // prevent constructor by default
    ModuleBinding& operator=(ModuleBinding const&) = delete;
    ModuleBinding(ModuleBinding const&)            = delete;
    ModuleBinding()                                = delete;
};

}; // namespace Scripting
