#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OutOfControlComponent {
public:
    // prevent constructor by default
    OutOfControlComponent& operator=(OutOfControlComponent const&);
    OutOfControlComponent(OutOfControlComponent const&);
    OutOfControlComponent();
};
