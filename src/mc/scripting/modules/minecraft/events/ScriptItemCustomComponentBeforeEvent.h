#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, typename T1, typename T2, typename T3>
struct ScriptItemCustomComponentBeforeEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeEvent& operator=(ScriptItemCustomComponentBeforeEvent const&);
    ScriptItemCustomComponentBeforeEvent(ScriptItemCustomComponentBeforeEvent const&);
    ScriptItemCustomComponentBeforeEvent();
};

} // namespace ScriptModuleMinecraft
