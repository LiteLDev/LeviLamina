#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextConfig {

public:
    // prevent constructor by default
    ContextConfig& operator=(ContextConfig const&) = delete;
    ContextConfig(ContextConfig const&)            = delete;
    ContextConfig()                                = delete;
};

}; // namespace Scripting
