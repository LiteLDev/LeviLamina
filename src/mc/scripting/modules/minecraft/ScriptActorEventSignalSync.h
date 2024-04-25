#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class ScriptActorEventSignalSync {
public:
    // prevent constructor by default
    ScriptActorEventSignalSync& operator=(ScriptActorEventSignalSync const&);
    ScriptActorEventSignalSync(ScriptActorEventSignalSync const&);
    ScriptActorEventSignalSync();
};

}; // namespace ScriptModuleMinecraft
