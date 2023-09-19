#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Animating {
public:
    // prevent constructor by default
    Animating& operator=(Animating const&);
    Animating(Animating const&);
    Animating();
};

}; // namespace AgentComponents
