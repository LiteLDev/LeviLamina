#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CustomSizeUpdateComponent {
public:
    // prevent constructor by default
    CustomSizeUpdateComponent& operator=(CustomSizeUpdateComponent const&);
    CustomSizeUpdateComponent(CustomSizeUpdateComponent const&);
    CustomSizeUpdateComponent();
};
