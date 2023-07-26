#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextId {

public:
    // prevent constructor by default
    ContextId& operator=(ContextId const&) = delete;
    ContextId(ContextId const&)            = delete;
    ContextId()                            = delete;
};

}; // namespace Scripting
