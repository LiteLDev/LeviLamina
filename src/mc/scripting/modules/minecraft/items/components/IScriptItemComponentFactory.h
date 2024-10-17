#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptItemComponentFactory {
public:
    // prevent constructor by default
    IScriptItemComponentFactory& operator=(IScriptItemComponentFactory const&);
    IScriptItemComponentFactory(IScriptItemComponentFactory const&);
    IScriptItemComponentFactory();
};

}; // namespace ScriptModuleMinecraft
