#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFunctionEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFUNCTIONENTRY
public:
    IFunctionEntry& operator=(IFunctionEntry const&) = delete;
    IFunctionEntry(IFunctionEntry const&)            = delete;
    IFunctionEntry()                                 = delete;
#endif

public:
};
