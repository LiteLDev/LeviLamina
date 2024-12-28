#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WasControlledByLocalInstanceComponent {
public:
    // prevent constructor by default
    WasControlledByLocalInstanceComponent& operator=(WasControlledByLocalInstanceComponent const&);
    WasControlledByLocalInstanceComponent(WasControlledByLocalInstanceComponent const&);
    WasControlledByLocalInstanceComponent();
};
