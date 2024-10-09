#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct IScriptItemCustomComponentClosures {
public:
    // prevent constructor by default
    IScriptItemCustomComponentClosures& operator=(IScriptItemCustomComponentClosures const&);
    IScriptItemCustomComponentClosures(IScriptItemCustomComponentClosures const&);
    IScriptItemCustomComponentClosures();
};

}; // namespace ScriptModuleMinecraft
