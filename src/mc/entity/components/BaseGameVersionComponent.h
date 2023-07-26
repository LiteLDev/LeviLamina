#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BaseGameVersionComponent {

public:
    // prevent constructor by default
    BaseGameVersionComponent& operator=(BaseGameVersionComponent const&) = delete;
    BaseGameVersionComponent(BaseGameVersionComponent const&)            = delete;
    BaseGameVersionComponent()                                           = delete;
};
