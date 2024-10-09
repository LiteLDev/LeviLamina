#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WingFlapComponent {
public:
    // prevent constructor by default
    WingFlapComponent& operator=(WingFlapComponent const&);
    WingFlapComponent(WingFlapComponent const&);
    WingFlapComponent();
};
