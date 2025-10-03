#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SmoothFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb01e93;
    ::ll::UntypedStorage<4, 4> mUnk76f676;
    ::ll::UntypedStorage<4, 4> mUnk6f93f1;
    // NOLINTEND

public:
    // prevent constructor by default
    SmoothFloat& operator=(SmoothFloat const&);
    SmoothFloat(SmoothFloat const&);
    SmoothFloat();
};
