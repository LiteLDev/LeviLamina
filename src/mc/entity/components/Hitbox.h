#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Hitbox {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HITBOX
public:
    Hitbox& operator=(Hitbox const&) = delete;
    Hitbox(Hitbox const&)            = delete;
    Hitbox()                         = delete;
#endif

public:
};
