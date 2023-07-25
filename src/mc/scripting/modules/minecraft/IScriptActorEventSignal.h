#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptActorEventSignal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_ISCRIPTACTOREVENTSIGNAL
public:
    IScriptActorEventSignal& operator=(IScriptActorEventSignal const&) = delete;
    IScriptActorEventSignal(IScriptActorEventSignal const&)            = delete;
    IScriptActorEventSignal()                                          = delete;
#endif

public:
};

}; // namespace ScriptModuleMinecraft
