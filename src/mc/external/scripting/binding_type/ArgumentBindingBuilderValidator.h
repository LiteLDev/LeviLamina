#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBindingBuilderValidator {
public:
    // prevent constructor by default
    ArgumentBindingBuilderValidator& operator=(ArgumentBindingBuilderValidator const&);
    ArgumentBindingBuilderValidator(ArgumentBindingBuilderValidator const&);
    ArgumentBindingBuilderValidator();
};

} // namespace Scripting
