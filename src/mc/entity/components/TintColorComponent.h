#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TintColorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk8a1f87;
    ::ll::UntypedStorage<4, 16> mUnke75837;
    // NOLINTEND

public:
    // prevent constructor by default
    TintColorComponent& operator=(TintColorComponent const&);
    TintColorComponent(TintColorComponent const&);
    TintColorComponent();
};
