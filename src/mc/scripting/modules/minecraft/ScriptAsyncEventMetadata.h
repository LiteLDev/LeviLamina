#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
struct ScriptAsyncEventMetadata {
public:
    // prevent constructor by default
    ScriptAsyncEventMetadata& operator=(ScriptAsyncEventMetadata const&);
    ScriptAsyncEventMetadata(ScriptAsyncEventMetadata const&);
    ScriptAsyncEventMetadata();
};

}; // namespace ScriptModuleMinecraft
