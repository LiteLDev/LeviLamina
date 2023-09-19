#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Paddle {
public:
    // prevent constructor by default
    Paddle& operator=(Paddle const&);
    Paddle(Paddle const&);
    Paddle();
};
