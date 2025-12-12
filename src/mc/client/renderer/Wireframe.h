#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Wireframe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>   mUnk131062;
    ::ll::UntypedStorage<4, 12>   mUnkb83290;
    ::ll::UntypedStorage<4, 1248> mUnk66b2e1;
    // NOLINTEND

public:
    // prevent constructor by default
    Wireframe& operator=(Wireframe const&);
    Wireframe(Wireframe const&);
    Wireframe();
};
