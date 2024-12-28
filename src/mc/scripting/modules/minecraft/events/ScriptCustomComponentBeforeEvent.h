#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
class ScriptCustomComponentBeforeEvent {
public:
    // prevent constructor by default
    ScriptCustomComponentBeforeEvent& operator=(ScriptCustomComponentBeforeEvent const&);
    ScriptCustomComponentBeforeEvent(ScriptCustomComponentBeforeEvent const&);
    ScriptCustomComponentBeforeEvent();
};

} // namespace ScriptModuleMinecraft
