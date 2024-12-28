#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1cc847;
    ::ll::UntypedStorage<4, 4> mUnk70af24;
    ::ll::UntypedStorage<4, 4> mUnkb90c1c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenThreshold& operator=(ScreenThreshold const&);
    ScreenThreshold(ScreenThreshold const&);
    ScreenThreshold();
};
