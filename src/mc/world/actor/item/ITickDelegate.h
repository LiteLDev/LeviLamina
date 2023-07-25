#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickDelegate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKDELEGATE
public:
    ITickDelegate& operator=(ITickDelegate const&) = delete;
    ITickDelegate(ITickDelegate const&)            = delete;
    ITickDelegate()                                = delete;
#endif

public:
};
