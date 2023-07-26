#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
class ScriptActorEventSignalAsync {

public:
    // prevent constructor by default
    ScriptActorEventSignalAsync& operator=(ScriptActorEventSignalAsync const&) = delete;
    ScriptActorEventSignalAsync(ScriptActorEventSignalAsync const&)            = delete;
    ScriptActorEventSignalAsync()                                              = delete;
};

}; // namespace ScriptModuleMinecraft
