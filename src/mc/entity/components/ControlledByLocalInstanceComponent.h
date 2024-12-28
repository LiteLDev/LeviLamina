#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ControlledByLocalInstanceComponent {
public:
    // prevent constructor by default
    ControlledByLocalInstanceComponent& operator=(ControlledByLocalInstanceComponent const&);
    ControlledByLocalInstanceComponent(ControlledByLocalInstanceComponent const&);
    ControlledByLocalInstanceComponent();
};
