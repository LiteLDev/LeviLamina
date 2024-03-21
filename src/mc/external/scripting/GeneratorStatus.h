#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class GeneratorStatus {
public:
    // prevent constructor by default
    GeneratorStatus& operator=(GeneratorStatus const&);
    GeneratorStatus(GeneratorStatus const&);
    GeneratorStatus();
};

}; // namespace Scripting
