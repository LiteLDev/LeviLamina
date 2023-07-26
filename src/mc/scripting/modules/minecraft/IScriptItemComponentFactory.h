#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class IScriptItemComponentFactory {

public:
    // prevent constructor by default
    IScriptItemComponentFactory& operator=(IScriptItemComponentFactory const&) = delete;
    IScriptItemComponentFactory(IScriptItemComponentFactory const&)            = delete;
    IScriptItemComponentFactory()                                              = delete;
};

}; // namespace ScriptModuleMinecraft
