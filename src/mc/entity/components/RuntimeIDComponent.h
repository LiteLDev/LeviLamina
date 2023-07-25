#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RuntimeIDComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNTIMEIDCOMPONENT
public:
    RuntimeIDComponent& operator=(RuntimeIDComponent const&) = delete;
    RuntimeIDComponent(RuntimeIDComponent const&)            = delete;
    RuntimeIDComponent()                                     = delete;
#endif

public:
};
