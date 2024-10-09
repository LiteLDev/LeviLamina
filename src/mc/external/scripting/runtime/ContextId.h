#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextId {
public:
    // prevent constructor by default
    ContextId& operator=(ContextId const&);
    ContextId(ContextId const&);
    ContextId();
};

}; // namespace Scripting
