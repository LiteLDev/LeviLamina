#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BaseGameVersionComponent {
public:
    // prevent constructor by default
    BaseGameVersionComponent& operator=(BaseGameVersionComponent const&);
    BaseGameVersionComponent(BaseGameVersionComponent const&);
    BaseGameVersionComponent();
};
