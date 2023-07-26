#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ModuleBindingBuilder {

public:
    // prevent constructor by default
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&) = delete;
    ModuleBindingBuilder(ModuleBindingBuilder const&)            = delete;
    ModuleBindingBuilder()                                       = delete;
};

}; // namespace Scripting
