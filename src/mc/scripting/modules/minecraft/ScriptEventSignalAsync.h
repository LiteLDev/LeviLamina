#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
class ScriptEventSignalAsync {

public:
    // prevent constructor by default
    ScriptEventSignalAsync& operator=(ScriptEventSignalAsync const&) = delete;
    ScriptEventSignalAsync(ScriptEventSignalAsync const&)            = delete;
    ScriptEventSignalAsync()                                         = delete;
};

}; // namespace ScriptModuleMinecraft
