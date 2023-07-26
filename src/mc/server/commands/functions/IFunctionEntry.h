#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFunctionEntry {

public:
    // prevent constructor by default
    IFunctionEntry& operator=(IFunctionEntry const&) = delete;
    IFunctionEntry(IFunctionEntry const&)            = delete;
    IFunctionEntry()                                 = delete;
};
