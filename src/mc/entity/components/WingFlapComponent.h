#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WingFlapComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5fe166;
    ::ll::UntypedStorage<4, 4> mUnk4044ab;
    ::ll::UntypedStorage<4, 4> mUnk244166;
    // NOLINTEND

public:
    // prevent constructor by default
    WingFlapComponent& operator=(WingFlapComponent const&);
    WingFlapComponent(WingFlapComponent const&);
    WingFlapComponent();
};
