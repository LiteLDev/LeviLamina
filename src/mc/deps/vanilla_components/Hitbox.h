#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Hitbox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk92dc7f;
    ::ll::UntypedStorage<4, 24> mUnkfcf9c8;
    // NOLINTEND

public:
    // prevent constructor by default
    Hitbox& operator=(Hitbox const&);
    Hitbox(Hitbox const&);
    Hitbox();
};
