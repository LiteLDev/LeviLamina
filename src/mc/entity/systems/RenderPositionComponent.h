#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderPositionComponent {
public:
    // prevent constructor by default
    RenderPositionComponent& operator=(RenderPositionComponent const&);
    RenderPositionComponent(RenderPositionComponent const&);
    RenderPositionComponent();
};
