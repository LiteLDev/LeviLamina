#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptPluginSource {
public:
    // prevent constructor by default
    IScriptPluginSource& operator=(IScriptPluginSource const&);
    IScriptPluginSource(IScriptPluginSource const&);
    IScriptPluginSource();
};
