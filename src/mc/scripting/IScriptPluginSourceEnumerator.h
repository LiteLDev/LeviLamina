#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptPluginSourceEnumerator {

public:
    // prevent constructor by default
    IScriptPluginSourceEnumerator& operator=(IScriptPluginSourceEnumerator const&) = delete;
    IScriptPluginSourceEnumerator(IScriptPluginSourceEnumerator const&)            = delete;
    IScriptPluginSourceEnumerator()                                                = delete;
};
