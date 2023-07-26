#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PushedByComponent {

public:
    // prevent constructor by default
    PushedByComponent& operator=(PushedByComponent const&) = delete;
    PushedByComponent(PushedByComponent const&)            = delete;
    PushedByComponent()                                    = delete;
};
