#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Paddle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PADDLE
public:
    Paddle& operator=(Paddle const&) = delete;
    Paddle(Paddle const&)            = delete;
    Paddle()                         = delete;
#endif

public:
};
