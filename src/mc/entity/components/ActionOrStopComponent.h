#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActionOrStopComponent {
public:
    // prevent constructor by default
    ActionOrStopComponent& operator=(ActionOrStopComponent const&);
    ActionOrStopComponent(ActionOrStopComponent const&);
    ActionOrStopComponent();
};
