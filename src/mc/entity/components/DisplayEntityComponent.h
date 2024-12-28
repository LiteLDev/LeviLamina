#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisplayEntityComponent {
public:
    // prevent constructor by default
    DisplayEntityComponent& operator=(DisplayEntityComponent const&);
    DisplayEntityComponent(DisplayEntityComponent const&);
    DisplayEntityComponent();
};
