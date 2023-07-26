#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptPluginSource {

public:
    // prevent constructor by default
    IScriptPluginSource& operator=(IScriptPluginSource const&) = delete;
    IScriptPluginSource(IScriptPluginSource const&)            = delete;
    IScriptPluginSource()                                      = delete;
};
