#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptEventSignal {

public:
    // prevent constructor by default
    IScriptEventSignal& operator=(IScriptEventSignal const&) = delete;
    IScriptEventSignal(IScriptEventSignal const&)            = delete;
    IScriptEventSignal()                                     = delete;
};

}; // namespace ScriptModuleMinecraft
