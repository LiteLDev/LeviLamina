#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderRotationComponent {

public:
    // prevent constructor by default
    RenderRotationComponent& operator=(RenderRotationComponent const&) = delete;
    RenderRotationComponent(RenderRotationComponent const&)            = delete;
    RenderRotationComponent()                                          = delete;
};
