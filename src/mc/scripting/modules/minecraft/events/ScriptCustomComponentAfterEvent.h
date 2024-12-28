#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCustomComponentAfterEvent {
public:
    // prevent constructor by default
    ScriptCustomComponentAfterEvent& operator=(ScriptCustomComponentAfterEvent const&);
    ScriptCustomComponentAfterEvent(ScriptCustomComponentAfterEvent const&);
    ScriptCustomComponentAfterEvent();
};

} // namespace ScriptModuleMinecraft
