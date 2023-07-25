#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OutOfControlComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OUTOFCONTROLCOMPONENT
public:
    OutOfControlComponent& operator=(OutOfControlComponent const&) = delete;
    OutOfControlComponent(OutOfControlComponent const&)            = delete;
    OutOfControlComponent()                                        = delete;
#endif

public:
};
