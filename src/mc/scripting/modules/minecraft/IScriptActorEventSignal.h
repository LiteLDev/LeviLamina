#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int32_t T1>
class IScriptActorEventSignal {

public:
    // prevent constructor by default
    IScriptActorEventSignal& operator=(IScriptActorEventSignal const&) = delete;
    IScriptActorEventSignal(IScriptActorEventSignal const&)            = delete;
    IScriptActorEventSignal()                                          = delete;
};

}; // namespace ScriptModuleMinecraft
