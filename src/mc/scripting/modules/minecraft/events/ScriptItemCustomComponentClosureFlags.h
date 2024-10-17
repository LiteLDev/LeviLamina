#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentClosureFlags {
public:
    // prevent constructor by default
    ScriptItemCustomComponentClosureFlags& operator=(ScriptItemCustomComponentClosureFlags const&);
    ScriptItemCustomComponentClosureFlags(ScriptItemCustomComponentClosureFlags const&);
    ScriptItemCustomComponentClosureFlags();
};

}; // namespace ScriptModuleMinecraft
