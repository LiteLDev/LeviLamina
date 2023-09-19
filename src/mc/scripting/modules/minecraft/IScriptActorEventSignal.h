#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptActorEventSignal {
public:
    // prevent constructor by default
    IScriptActorEventSignal& operator=(IScriptActorEventSignal const&);
    IScriptActorEventSignal(IScriptActorEventSignal const&);
    IScriptActorEventSignal();
};

}; // namespace ScriptModuleMinecraft
