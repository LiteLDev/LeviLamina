#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Control {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROL
public:
    Control& operator=(Control const&) = delete;
    Control(Control const&)            = delete;
    Control()                          = delete;
#endif

public:
};
