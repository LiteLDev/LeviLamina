#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugInfoDefinition {
public:
    // prevent constructor by default
    DebugInfoDefinition& operator=(DebugInfoDefinition const&);
    DebugInfoDefinition(DebugInfoDefinition const&);
    DebugInfoDefinition();
};
