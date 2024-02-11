#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PeekComponent {
public:
    // prevent constructor by default
    PeekComponent& operator=(PeekComponent const&);
    PeekComponent(PeekComponent const&);
    PeekComponent();
};
