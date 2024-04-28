#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentSignalCollection {
public:
    // prevent constructor by default
    IScriptItemCustomComponentSignalCollection& operator=(IScriptItemCustomComponentSignalCollection const&);
    IScriptItemCustomComponentSignalCollection(IScriptItemCustomComponentSignalCollection const&);
    IScriptItemCustomComponentSignalCollection();
};

}; // namespace ScriptModuleMinecraft
