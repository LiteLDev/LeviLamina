#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Spherical {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb95b4d;
    ::ll::UntypedStorage<4, 4> mUnk67754f;
    ::ll::UntypedStorage<4, 4> mUnkde64a5;
    // NOLINTEND

public:
    // prevent constructor by default
    Spherical& operator=(Spherical const&);
    Spherical(Spherical const&);
    Spherical();

};
