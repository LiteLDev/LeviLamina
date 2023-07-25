#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PushedByComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHEDBYCOMPONENT
public:
    PushedByComponent& operator=(PushedByComponent const&) = delete;
    PushedByComponent(PushedByComponent const&)            = delete;
    PushedByComponent()                                    = delete;
#endif

public:
};
