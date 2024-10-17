#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbsoluteSizeUpdateComponent {
public:
    // prevent constructor by default
    AbsoluteSizeUpdateComponent& operator=(AbsoluteSizeUpdateComponent const&);
    AbsoluteSizeUpdateComponent(AbsoluteSizeUpdateComponent const&);
    AbsoluteSizeUpdateComponent();

public:
    // NOLINTBEGIN
    MCAPI struct AbsoluteSizeUpdateComponent& operator=(struct AbsoluteSizeUpdateComponent&&);

    // NOLINTEND
};
