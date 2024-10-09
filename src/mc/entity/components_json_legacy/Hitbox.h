#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Hitbox {
public:
    // prevent constructor by default
    Hitbox& operator=(Hitbox const&);
    Hitbox(Hitbox const&);
    Hitbox();
};
