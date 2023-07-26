#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OutOfControlComponent {

public:
    // prevent constructor by default
    OutOfControlComponent& operator=(OutOfControlComponent const&) = delete;
    OutOfControlComponent(OutOfControlComponent const&)            = delete;
    OutOfControlComponent()                                        = delete;
};
