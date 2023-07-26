#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptActorDataDrivenTriggerEventSignal {

public:
    // prevent constructor by default
    IScriptActorDataDrivenTriggerEventSignal& operator=(IScriptActorDataDrivenTriggerEventSignal const&) = delete;
    IScriptActorDataDrivenTriggerEventSignal(IScriptActorDataDrivenTriggerEventSignal const&)            = delete;
    IScriptActorDataDrivenTriggerEventSignal()                                                           = delete;
};

}; // namespace ScriptModuleMinecraft
