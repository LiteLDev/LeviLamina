#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int32_t T1>
class IScriptConditionalEventSignal {

public:
    // prevent constructor by default
    IScriptConditionalEventSignal& operator=(IScriptConditionalEventSignal const&) = delete;
    IScriptConditionalEventSignal(IScriptConditionalEventSignal const&)            = delete;
    IScriptConditionalEventSignal()                                                = delete;
};

}; // namespace ScriptModuleMinecraft
