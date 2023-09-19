#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PushedByComponent {
public:
    // prevent constructor by default
    PushedByComponent& operator=(PushedByComponent const&);
    PushedByComponent(PushedByComponent const&);
    PushedByComponent();
};
