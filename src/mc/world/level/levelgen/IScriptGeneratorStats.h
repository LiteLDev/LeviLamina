#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptGeneratorStats {
public:
    // prevent constructor by default
    IScriptGeneratorStats& operator=(IScriptGeneratorStats const&);
    IScriptGeneratorStats(IScriptGeneratorStats const&);
    IScriptGeneratorStats();
};
