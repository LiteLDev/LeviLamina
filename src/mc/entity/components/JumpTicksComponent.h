#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpTicksComponent {

public:
    // prevent constructor by default
    JumpTicksComponent& operator=(JumpTicksComponent const&) = delete;
    JumpTicksComponent(JumpTicksComponent const&)            = delete;
    JumpTicksComponent()                                     = delete;
};
