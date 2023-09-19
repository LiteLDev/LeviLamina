#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
class IScriptMessageReceiveEventSignal {
public:
    // prevent constructor by default
    IScriptMessageReceiveEventSignal& operator=(IScriptMessageReceiveEventSignal const&);
    IScriptMessageReceiveEventSignal(IScriptMessageReceiveEventSignal const&);
    IScriptMessageReceiveEventSignal();
};

}; // namespace ScriptModuleMinecraft
