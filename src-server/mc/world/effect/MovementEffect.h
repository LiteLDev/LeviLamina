#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MovementEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5258c0;
    ::ll::UntypedStorage<4, 4> mUnk703d1f;
    ::ll::UntypedStorage<4, 4> mUnkfeb02f;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffect& operator=(MovementEffect const&);
    MovementEffect(MovementEffect const&);
    MovementEffect();

};
