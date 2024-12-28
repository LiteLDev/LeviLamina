#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Vec2Component {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkdf1c09;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec2Component& operator=(Vec2Component const&);
    Vec2Component(Vec2Component const&);
    Vec2Component();
};
