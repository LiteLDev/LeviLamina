#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Animating {

public:
    // prevent constructor by default
    Animating& operator=(Animating const&) = delete;
    Animating(Animating const&)            = delete;
    Animating()                            = delete;
};

}; // namespace AgentComponents
