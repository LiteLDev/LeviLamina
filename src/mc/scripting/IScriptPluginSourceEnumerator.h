#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptPluginSourceEnumerator {
public:
    // prevent constructor by default
    IScriptPluginSourceEnumerator& operator=(IScriptPluginSourceEnumerator const&);
    IScriptPluginSourceEnumerator(IScriptPluginSourceEnumerator const&);
    IScriptPluginSourceEnumerator();
};
