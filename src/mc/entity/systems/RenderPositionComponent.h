#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderPositionComponent {

public:
    // prevent constructor by default
    RenderPositionComponent& operator=(RenderPositionComponent const&) = delete;
    RenderPositionComponent(RenderPositionComponent const&)            = delete;
    RenderPositionComponent()                                          = delete;
};
