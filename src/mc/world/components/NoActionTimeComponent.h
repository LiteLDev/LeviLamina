#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NoActionTimeComponent {

public:
    // prevent constructor by default
    NoActionTimeComponent& operator=(NoActionTimeComponent const&) = delete;
    NoActionTimeComponent(NoActionTimeComponent const&)            = delete;
    NoActionTimeComponent()                                        = delete;
};
