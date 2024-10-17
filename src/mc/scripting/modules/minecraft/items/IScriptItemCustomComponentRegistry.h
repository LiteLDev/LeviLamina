#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentRegistry {
public:
    // prevent constructor by default
    IScriptItemCustomComponentRegistry& operator=(IScriptItemCustomComponentRegistry const&);
    IScriptItemCustomComponentRegistry(IScriptItemCustomComponentRegistry const&);
    IScriptItemCustomComponentRegistry();
};

}; // namespace ScriptModuleMinecraft
