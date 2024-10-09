#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OutOfControlComponent {
public:
    // prevent constructor by default
    OutOfControlComponent& operator=(OutOfControlComponent const&);
    OutOfControlComponent(OutOfControlComponent const&);
    OutOfControlComponent();
};
