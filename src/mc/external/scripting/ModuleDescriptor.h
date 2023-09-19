#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {
public:
    // prevent constructor by default
    ModuleDescriptor& operator=(ModuleDescriptor const&);
    ModuleDescriptor(ModuleDescriptor const&);
    ModuleDescriptor();
};

}; // namespace Scripting
