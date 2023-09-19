#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextConfig {
public:
    // prevent constructor by default
    ContextConfig& operator=(ContextConfig const&);
    ContextConfig(ContextConfig const&);
    ContextConfig();
};

}; // namespace Scripting
