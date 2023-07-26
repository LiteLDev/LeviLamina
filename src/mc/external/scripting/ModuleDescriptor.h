#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {

public:
    // prevent constructor by default
    ModuleDescriptor& operator=(ModuleDescriptor const&) = delete;
    ModuleDescriptor(ModuleDescriptor const&)            = delete;
    ModuleDescriptor()                                   = delete;
};

}; // namespace Scripting
