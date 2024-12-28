#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Vec3Component {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk5ee234;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec3Component& operator=(Vec3Component const&);
    Vec3Component(Vec3Component const&);
    Vec3Component();
};
