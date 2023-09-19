#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFunctionEntry {
public:
    // prevent constructor by default
    IFunctionEntry& operator=(IFunctionEntry const&);
    IFunctionEntry(IFunctionEntry const&);
    IFunctionEntry();
};
