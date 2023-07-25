#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptEventSignal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_ISCRIPTEVENTSIGNAL
public:
    IScriptEventSignal& operator=(IScriptEventSignal const&) = delete;
    IScriptEventSignal(IScriptEventSignal const&)            = delete;
    IScriptEventSignal()                                     = delete;
#endif

public:
};

}; // namespace ScriptModuleMinecraft
